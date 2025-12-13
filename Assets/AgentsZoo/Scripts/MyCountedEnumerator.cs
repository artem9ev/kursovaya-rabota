using System.Collections;
using UnityEngine;

public class MyCountedEnumerator : IEnumerator
{
    private IEnumerator m_enumerator;
    private int m_countGetted = 0;

    private object m_current = null;

    public object Current => m_current;
    public int Count => m_countGetted;

    public MyCountedEnumerator(IEnumerator enumerator)
    {
        m_enumerator = enumerator;
    }
    
    public bool MoveNext()
    {
        m_countGetted++;

        if (m_enumerator.MoveNext())
        {
            m_current = m_enumerator.Current;
            return true;
        }
        return false;
    }

    public void Reset()
    {
        m_enumerator.Reset();

        m_current = null;
        m_countGetted = 0;
    }
}
