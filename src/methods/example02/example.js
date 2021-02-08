// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => {
  addon.handlerA();
  addon.handlerB();
}

// Run function.
runAddon();