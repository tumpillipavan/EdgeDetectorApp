public class GLRenderer implements GLSurfaceView.Renderer {
    private int textureId;
    private Bitmap processedBitmap;

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        textureId = createTexture();
    }

    @Override
    public void onDrawFrame(GL10 gl) {
        if (processedBitmap != null) {
            updateTexture(processedBitmap);
            processedBitmap = null;
        }
        // Render texture here
    }

    public void updateFrame(Bitmap bitmap) {
        this.processedBitmap = bitmap;
    }
}