make:
	arm-none-eabi-gcc -mcpu=cortex-m4 -march=armv7e-m -mthumb -save-temps -nostdlib -o0 -Wl,-Map,"app.map" -Wl,-T"tm4c123gh6pm.lds" app_main.c app_2.c -o app_output.elf