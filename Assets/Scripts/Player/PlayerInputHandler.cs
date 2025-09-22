using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;

public class PlayerInputHandler : MonoBehaviour
{
    [SerializeField] private UnityEvent<Vector2> m_onMouseLook;
    [SerializeField] private UnityEvent<Vector2> m_onMove;

    [SerializeField] private UnityEvent m_onAttack;
    [SerializeField] private UnityEvent m_onInteract;
    [SerializeField] private UnityEvent m_onJump;
    [SerializeField] private UnityEvent m_onSprint;
    [SerializeField] private UnityEvent m_onCrouch;

    private PlayerInputActions m_actions;

    private void OnEnable()
    {
        m_actions ??= new PlayerInputActions();

        m_actions.Player.Look.performed += ctx => OnAction(m_onMouseLook, ctx);
        m_actions.Player.Move.performed += ctx => OnAction(m_onMove, ctx);

        m_actions.Player.Attack.performed += ctx => OnAction(m_onAttack);
        m_actions.Player.Interact.performed += ctx => OnAction(m_onInteract);
        m_actions.Player.Jump.performed += ctx => OnAction(m_onJump);
        m_actions.Player.Sprint.performed += ctx => OnAction(m_onSprint);

        m_actions.Player.Crouch.performed += ctx => OnAction(m_onCrouch);

        m_actions.Enable();
    }

    private void OnDisable()
    {
        m_actions.Disable();        
    }

    private void OnAction(UnityEvent e)
    {
        e?.Invoke();
    }

    private void OnAction(UnityEvent<Vector2> e, InputAction.CallbackContext ctx)
    {
        e?.Invoke(ctx.ReadValue<Vector2>());
    }

    private void OnAction(UnityEvent<float> e, InputAction.CallbackContext ctx)
    {
        e?.Invoke(ctx.ReadValue<float>());
    }

    private void OnAction(UnityEvent<int> e, InputAction.CallbackContext ctx)
    {
        e?.Invoke(ctx.ReadValue<int>());
    }
}
