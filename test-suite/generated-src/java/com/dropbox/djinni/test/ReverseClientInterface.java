// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

package com.dropbox.djinni.test;

import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public abstract class ReverseClientInterface {
    @Nonnull
    public abstract String returnStr();

    @Nonnull
    public abstract String methTakingInterface(@CheckForNull ReverseClientInterface i);

    @Nonnull
    public abstract String methTakingOptionalInterface(@CheckForNull ReverseClientInterface i);

    @CheckForNull
    public static native ReverseClientInterface create();

    private static final class CppProxy extends ReverseClientInterface
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        // ReverseClientInterface methods

        @Override
        public String returnStr()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_returnStr(this.nativeRef);
        }
        private native String native_returnStr(long _nativeRef);

        @Override
        public String methTakingInterface(ReverseClientInterface i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_methTakingInterface(this.nativeRef, i);
        }
        private native String native_methTakingInterface(long _nativeRef, ReverseClientInterface i);

        @Override
        public String methTakingOptionalInterface(ReverseClientInterface i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_methTakingOptionalInterface(this.nativeRef, i);
        }
        private native String native_methTakingOptionalInterface(long _nativeRef, ReverseClientInterface i);
    }
}
