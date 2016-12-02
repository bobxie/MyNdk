package testndk.xhb.com.myndk;

/**
 * Created by haibo on 2016/12/2.
 */

public class MyNdk {
    static {
        System.loadLibrary("MyLibrary");
    }
    public native String getString();
}
