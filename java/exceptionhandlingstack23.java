//exception handling in stack
class StackOverFlow extends Exception//user defined exception
{
    public String toString()
    {
        return "Stack is Full Buddy";
    }
}

class StackUnderFlow extends Exception
{
    public String toString()
    {
        return "Stack is Empty Buddy";
    }
}


class Stack
{
    private int size;
    private int top=-1; //empty stack
    private int S[];    //array    
    
    public Stack(int sz) //parametrised constructer
    {
        size=sz;
        S=new int[sz]; 
    }
    
    public void push(int x) throws StackOverFlow //throws StackOverFlow exception
    {
        if(top==size-1) //stack is full
            throw new StackOverFlow();  //throw StackOverFlow exception
        top++;
        S[top]=x;
    }
    
    public int pop() throws StackUnderFlow
    {
        int x=-1;//empty stack
        
        if(top==-1)
            throw new StackUnderFlow();
        x=S[top];
        top--;
        return x;              
    }
}




public class exceptionhandlingstack23
{
    public static void main(String[] args) 
    {
        Stack st=new Stack(5);
        try
        {
        st.push(10);
        st.push(15);
        st.push(10);
        st.push(15);
        st.push(10);
        st.push(15);
        
        }
        catch(StackOverFlow e)
        {
            System.out.println(e);
        }
        
    }   
}