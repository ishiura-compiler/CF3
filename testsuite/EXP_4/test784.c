#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int32_t x10 = 46;
static int32_t x11 = 810992;
int16_t x20 = INT16_MIN;
int64_t t3 = -226LL;
int8_t x33 = INT8_MAX;
static volatile int32_t t4 = 4062593;
static int8_t x44 = INT8_MAX;
int16_t x50 = 2045;
static volatile int32_t t6 = -66;
static int32_t x53 = -5296850;
int32_t t7 = 3349;
int32_t t8 = 4;
uint16_t x89 = UINT16_MAX;
static int32_t t14 = -3901193;
volatile int64_t x99 = 5LL;
volatile uint16_t x100 = UINT16_MAX;
int8_t x114 = -4;
int16_t x115 = INT16_MAX;
volatile int16_t x117 = -1;
int16_t x151 = -14134;
int16_t x153 = 0;
uint16_t x155 = 1597U;
volatile int16_t x161 = -1;
volatile int32_t x164 = -1;
static int64_t x173 = -1606070LL;
static volatile int32_t t26 = INT32_MAX;
static int64_t x202 = -146637065052738782LL;
volatile int64_t x213 = 3967362843512490LL;
static int64_t x215 = 974924LL;
static int32_t x216 = 224182;
uint32_t x221 = UINT32_MAX;
volatile uint8_t x237 = 6U;
int8_t x245 = -6;
volatile uint32_t x248 = UINT32_MAX;
int16_t x258 = 15;
static int32_t t33 = -2;
static volatile int32_t t34 = 393916;
uint64_t x289 = 318565992LLU;
int32_t x292 = INT32_MIN;
uint8_t x296 = 16U;
static int32_t x297 = INT32_MIN;
static int32_t x305 = -1;
volatile int32_t x316 = 101;
volatile uint8_t x317 = 113U;
static int64_t x319 = -1LL;
int32_t x372 = INT32_MAX;
int16_t x404 = -1;
int8_t x420 = 3;
uint16_t x424 = 355U;
uint64_t x435 = 1301276LLU;
static int64_t x451 = INT64_MAX;
volatile int8_t x460 = -16;
uint16_t x461 = UINT16_MAX;
volatile int32_t t53 = 14994;
int16_t x512 = -3;
int16_t x518 = INT16_MIN;
volatile int64_t x519 = -448014038LL;
volatile int32_t t56 = 57225;
static int8_t x527 = INT8_MIN;
uint64_t x550 = 80947402569248341LLU;
volatile int64_t t58 = INT64_MIN;
int32_t x573 = INT32_MIN;
uint32_t x577 = 54U;
uint64_t x580 = 12812500LLU;
static uint32_t t61 = 1895426228U;
int16_t x605 = 3774;
int16_t x623 = INT16_MAX;
int32_t x628 = INT32_MIN;
static uint64_t x639 = 1744046849518308LLU;
uint8_t x642 = 1U;
uint8_t x653 = 0U;
static int32_t x655 = -1;
int16_t x688 = INT16_MAX;
uint64_t x708 = UINT64_MAX;
volatile int32_t t74 = 965777136;
volatile int32_t t75 = 1552;
int32_t x721 = 239;
int16_t x727 = 0;
int64_t x742 = INT64_MIN;
uint32_t x769 = UINT32_MAX;
volatile int16_t x773 = INT16_MAX;
int32_t x776 = -1;
uint64_t x777 = UINT64_MAX;
static int16_t x779 = -1;
int64_t x780 = INT64_MIN;
int16_t x782 = INT16_MAX;
int16_t x783 = -9;
static volatile uint64_t t86 = 3219981LLU;
volatile int64_t t87 = 0LL;
int8_t x806 = INT8_MIN;
volatile int32_t t92 = INT32_MAX;
volatile uint32_t x838 = 3U;
int64_t x839 = INT64_MAX;
static int64_t x846 = -2067486760827261LL;
int16_t x853 = INT16_MIN;
int16_t x859 = -1;
static int32_t x860 = -6404;
static volatile int32_t t98 = 6;


void f0(void) {
	static int8_t x5 = -1;
	int64_t x7 = INT64_MAX;
	int64_t x8 = 4LL;
	volatile int32_t t0 = 29689;

	t0 = (x5/(x6<(x7%x8)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	static volatile uint32_t x12 = 6198U;
	volatile int64_t t1 = INT64_MIN;

	t1 = (x9/(x10<(x11%x12)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x17 = 0U;
	static uint64_t x18 = 670096212348338LLU;
	static volatile int8_t x19 = INT8_MIN;
	static volatile int32_t t2 = -139;

	t2 = (x17/(x18<(x19%x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = 113LL;
	int8_t x22 = INT8_MAX;
	static int64_t x23 = INT64_MAX;
	volatile uint64_t x24 = UINT64_MAX;

	t3 = (x21/(x22<(x23%x24)));

	if (t3 != 113LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x34 = INT16_MIN;
	int8_t x35 = -1;
	int64_t x36 = -1LL;

	t4 = (x33/(x34<(x35%x36)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x41 = -119;
	int8_t x42 = -42;
	int32_t x43 = 1006;
	int32_t t5 = 10337;

	t5 = (x41/(x42<(x43%x44)));

	if (t5 != -119) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x49 = 19U;
	static volatile int32_t x51 = INT32_MAX;
	uint64_t x52 = 1375877177323557132LLU;

	t6 = (x49/(x50<(x51%x52)));

	if (t6 != 19) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x54 = 1;
	int16_t x55 = 4;
	volatile int8_t x56 = INT8_MIN;

	t7 = (x53/(x54<(x55%x56)));

	if (t7 != -5296850) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = -660258;
	static uint32_t x58 = 3U;
	static int16_t x59 = -1;
	volatile int32_t x60 = INT32_MIN;

	t8 = (x57/(x58<(x59%x60)));

	if (t8 != -660258) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	int16_t x67 = -5421;
	int16_t x68 = -2;
	volatile int32_t t9 = -188735243;

	t9 = (x65/(x66<(x67%x68)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x69 = 7135U;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = 1;
	int16_t x72 = -51;
	int32_t t10 = -283;

	t10 = (x69/(x70<(x71%x72)));

	if (t10 != 7135) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	static volatile int64_t x76 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x73/(x74<(x75%x76)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = 0;
	volatile int32_t x82 = INT32_MIN;
	static volatile int64_t x83 = -1018817528LL;
	int32_t x84 = INT32_MIN;
	int32_t t12 = -2475233;

	t12 = (x81/(x82<(x83%x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x90 = -1;
	volatile int16_t x91 = 2281;
	int32_t x92 = -114641;
	volatile int32_t t13 = 102;

	t13 = (x89/(x90<(x91%x92)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 12U;
	static int8_t x94 = INT8_MIN;
	static int8_t x95 = 5;
	int32_t x96 = -6;

	t14 = (x93/(x94<(x95%x96)));

	if (t14 != 12) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x97 = -62053231;
	int32_t x98 = -1;
	int32_t t15 = -8;

	t15 = (x97/(x98<(x99%x100)));

	if (t15 != -62053231) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = 1;
	int64_t x106 = -333884527896703LL;
	volatile uint8_t x107 = 41U;
	static uint32_t x108 = 45714U;
	volatile int32_t t16 = -2;

	t16 = (x105/(x106<(x107%x108)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x113 = INT32_MAX;
	static volatile int32_t x116 = INT32_MAX;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x113/(x114<(x115%x116)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x118 = INT16_MIN;
	int32_t x119 = -31;
	int32_t x120 = 204;
	static int32_t t18 = 7190;

	t18 = (x117/(x118<(x119%x120)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x141 = 115318;
	int32_t x142 = -2689;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = -2174781;
	static volatile int32_t t19 = -12;

	t19 = (x141/(x142<(x143%x144)));

	if (t19 != 115318) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = -1;
	int32_t x152 = -1;
	static int32_t t20 = INT32_MIN;

	t20 = (x149/(x150<(x151%x152)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x154 = 13;
	int16_t x156 = INT16_MIN;
	volatile int32_t t21 = -1429102;

	t21 = (x153/(x154<(x155%x156)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x157 = 14215183U;
	int8_t x158 = -38;
	int64_t x159 = -1LL;
	int32_t x160 = -3584483;
	volatile uint32_t t22 = 476U;

	t22 = (x157/(x158<(x159%x160)));

	if (t22 != 14215183U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	int32_t t23 = -613723868;

	t23 = (x161/(x162<(x163%x164)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = -1;
	static volatile int64_t x166 = INT64_MIN;
	uint8_t x167 = 2U;
	int8_t x168 = -1;
	int32_t t24 = -173;

	t24 = (x165/(x166<(x167%x168)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x174 = 1;
	uint8_t x175 = 105U;
	volatile uint16_t x176 = 43U;
	volatile int64_t t25 = 930837529056LL;

	t25 = (x173/(x174<(x175%x176)));

	if (t25 != -1606070LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x181 = INT32_MAX;
	int32_t x182 = 0;
	static int8_t x183 = INT8_MIN;
	uint32_t x184 = 237324U;

	t26 = (x181/(x182<(x183%x184)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x201 = -1;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = -20;
	volatile int32_t t27 = 782423384;

	t27 = (x201/(x202<(x203%x204)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x214 = INT8_MIN;
	int64_t t28 = -1624810324LL;

	t28 = (x213/(x214<(x215%x216)));

	if (t28 != 3967362843512490LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x222 = 0;
	volatile uint64_t x223 = UINT64_MAX;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x221/(x222<(x223%x224)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x238 = -521;
	int16_t x239 = -1;
	static volatile int8_t x240 = -1;
	int32_t t30 = 9;

	t30 = (x237/(x238<(x239%x240)));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = INT32_MIN;
	static int32_t x243 = -54739;
	static volatile int16_t x244 = -1;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x241/(x242<(x243%x244)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x246 = -1;
	static volatile int64_t x247 = 7945LL;
	static int32_t t32 = -5;

	t32 = (x245/(x246<(x247%x248)));

	if (t32 != -6) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x257 = INT16_MIN;
	volatile int8_t x259 = INT8_MAX;
	volatile int64_t x260 = 963623LL;

	t33 = (x257/(x258<(x259%x260)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x269 = 33;
	static int8_t x270 = -20;
	int64_t x271 = 12616031784838613LL;
	uint16_t x272 = 21U;

	t34 = (x269/(x270<(x271%x272)));

	if (t34 != 33) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = 1;
	int8_t x275 = INT8_MAX;
	static int16_t x276 = INT16_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x273/(x274<(x275%x276)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x290 = INT16_MAX;
	uint32_t x291 = UINT32_MAX;
	uint64_t t36 = 2766971987892LLU;

	t36 = (x289/(x290<(x291%x292)));

	if (t36 != 318565992LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x293 = -3;
	int64_t x294 = INT64_MIN;
	volatile int32_t x295 = -1;
	volatile int32_t t37 = -3063422;

	t37 = (x293/(x294<(x295%x296)));

	if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x298 = -61;
	int64_t x299 = INT64_MAX;
	static int32_t x300 = INT32_MAX;
	volatile int32_t t38 = INT32_MIN;

	t38 = (x297/(x298<(x299%x300)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x306 = -47;
	int32_t x307 = INT32_MAX;
	volatile uint16_t x308 = UINT16_MAX;
	int32_t t39 = 12574;

	t39 = (x305/(x306<(x307%x308)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x313 = INT32_MIN;
	int16_t x314 = -448;
	static int16_t x315 = INT16_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x313/(x314<(x315%x316)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x318 = -2;
	static uint16_t x320 = 1871U;
	int32_t t41 = 3347;

	t41 = (x317/(x318<(x319%x320)));

	if (t41 != 113) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x333 = -2;
	int64_t x334 = INT64_MIN;
	static uint8_t x335 = 6U;
	int32_t x336 = INT32_MAX;
	int32_t t42 = 183430962;

	t42 = (x333/(x334<(x335%x336)));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x345 = 111;
	int8_t x346 = INT8_MIN;
	static uint8_t x347 = 91U;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t43 = 3049;

	t43 = (x345/(x346<(x347%x348)));

	if (t43 != 111) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x349 = 1870966800U;
	static volatile int8_t x350 = -18;
	int32_t x351 = -7795;
	static int32_t x352 = -1;
	uint32_t t44 = 51875184U;

	t44 = (x349/(x350<(x351%x352)));

	if (t44 != 1870966800U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	volatile int32_t t45 = 3264520;

	t45 = (x369/(x370<(x371%x372)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x389 = 14538274322LL;
	static volatile int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	static int8_t x392 = INT8_MAX;
	static volatile int64_t t46 = -175596962LL;

	t46 = (x389/(x390<(x391%x392)));

	if (t46 != 14538274322LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x401 = 57;
	int64_t x402 = -1LL;
	int8_t x403 = INT8_MIN;
	int32_t t47 = 3380;

	t47 = (x401/(x402<(x403%x404)));

	if (t47 != 57) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x417 = 97;
	int8_t x418 = INT8_MIN;
	static int8_t x419 = INT8_MIN;
	int32_t t48 = -26878;

	t48 = (x417/(x418<(x419%x420)));

	if (t48 != 97) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x421 = -743435852;
	int32_t x422 = INT32_MIN;
	volatile int64_t x423 = -1LL;
	volatile int32_t t49 = -48895711;

	t49 = (x421/(x422<(x423%x424)));

	if (t49 != -743435852) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x433 = -1;
	uint8_t x434 = 68U;
	static int8_t x436 = INT8_MIN;
	int32_t t50 = 3385;

	t50 = (x433/(x434<(x435%x436)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x449 = INT16_MIN;
	uint32_t x450 = 422284U;
	int64_t x452 = -225492227241136210LL;
	volatile int32_t t51 = -3797;

	t51 = (x449/(x450<(x451%x452)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x457 = -1LL;
	static uint32_t x458 = 97039430U;
	static int32_t x459 = -1;
	volatile int64_t t52 = -3642749067792LL;

	t52 = (x457/(x458<(x459%x460)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x462 = INT64_MIN;
	int32_t x463 = 1147;
	static int16_t x464 = INT16_MIN;

	t53 = (x461/(x462<(x463%x464)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x497 = INT8_MAX;
	static int32_t x498 = INT32_MAX;
	int16_t x499 = INT16_MIN;
	volatile uint64_t x500 = UINT64_MAX;
	volatile int32_t t54 = 104032;

	t54 = (x497/(x498<(x499%x500)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x509 = 938988992235747LLU;
	int8_t x510 = 0;
	volatile uint64_t x511 = 1039983739963LLU;
	static uint64_t t55 = 532406925LLU;

	t55 = (x509/(x510<(x511%x512)));

	if (t55 != 938988992235747LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x517 = UINT8_MAX;
	volatile int16_t x520 = INT16_MAX;

	t56 = (x517/(x518<(x519%x520)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x525 = -3986302053504845085LL;
	int32_t x526 = INT32_MIN;
	volatile int16_t x528 = INT16_MAX;
	int64_t t57 = -66928881451630LL;

	t57 = (x525/(x526<(x527%x528)));

	if (t57 != -3986302053504845085LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x549 = INT64_MIN;
	static int16_t x551 = -1;
	int16_t x552 = -432;

	t58 = (x549/(x550<(x551%x552)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x569 = UINT16_MAX;
	int8_t x570 = INT8_MAX;
	int32_t x571 = INT32_MAX;
	uint16_t x572 = UINT16_MAX;
	int32_t t59 = 385441;

	t59 = (x569/(x570<(x571%x572)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x574 = INT64_MIN;
	int16_t x575 = 21;
	int32_t x576 = INT32_MIN;
	static volatile int32_t t60 = INT32_MIN;

	t60 = (x573/(x574<(x575%x576)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x578 = 86U;
	uint16_t x579 = UINT16_MAX;

	t61 = (x577/(x578<(x579%x580)));

	if (t61 != 54U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x593 = INT8_MAX;
	int64_t x594 = INT64_MIN;
	uint8_t x595 = 30U;
	int64_t x596 = 250835726323497788LL;
	volatile int32_t t62 = -110;

	t62 = (x593/(x594<(x595%x596)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x597 = -2872479170LL;
	static uint16_t x598 = 35U;
	static int8_t x599 = INT8_MAX;
	static int64_t x600 = -1001978194LL;
	int64_t t63 = 4639179LL;

	t63 = (x597/(x598<(x599%x600)));

	if (t63 != -2872479170LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x601 = -56901LL;
	int16_t x602 = INT16_MIN;
	volatile int8_t x603 = 0;
	int16_t x604 = -1;
	static volatile int64_t t64 = -9118077LL;

	t64 = (x601/(x602<(x603%x604)));

	if (t64 != -56901LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x606 = 5;
	uint64_t x607 = 4688792376707266080LLU;
	int32_t x608 = INT32_MIN;
	volatile int32_t t65 = -699241761;

	t65 = (x605/(x606<(x607%x608)));

	if (t65 != 3774) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x609 = -121888;
	static int64_t x610 = -633LL;
	uint8_t x611 = 29U;
	static volatile int8_t x612 = INT8_MIN;
	volatile int32_t t66 = 0;

	t66 = (x609/(x610<(x611%x612)));

	if (t66 != -121888) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x613 = -31;
	int16_t x614 = -1;
	volatile uint8_t x615 = 27U;
	int8_t x616 = -1;
	static volatile int32_t t67 = 30800;

	t67 = (x613/(x614<(x615%x616)));

	if (t67 != -31) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x621 = INT8_MIN;
	static int8_t x622 = 1;
	uint32_t x624 = UINT32_MAX;
	volatile int32_t t68 = -15518;

	t68 = (x621/(x622<(x623%x624)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x625 = 29U;
	volatile int64_t x626 = INT64_MIN;
	uint8_t x627 = 5U;
	int32_t t69 = 466;

	t69 = (x625/(x626<(x627%x628)));

	if (t69 != 29) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x637 = INT64_MAX;
	static uint8_t x638 = 1U;
	int32_t x640 = -1;
	int64_t t70 = INT64_MAX;

	t70 = (x637/(x638<(x639%x640)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x641 = 19;
	volatile int32_t x643 = INT32_MIN;
	uint32_t x644 = 13U;
	volatile int32_t t71 = -549897743;

	t71 = (x641/(x642<(x643%x644)));

	if (t71 != 19) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x654 = -3;
	static int8_t x656 = INT8_MIN;
	volatile int32_t t72 = 56952927;

	t72 = (x653/(x654<(x655%x656)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x685 = 4495U;
	int64_t x686 = INT64_MIN;
	uint16_t x687 = 149U;
	uint32_t t73 = 113598696U;

	t73 = (x685/(x686<(x687%x688)));

	if (t73 != 4495U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x705 = INT16_MAX;
	int8_t x706 = 5;
	int8_t x707 = 6;

	t74 = (x705/(x706<(x707%x708)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x709 = -1;
	static volatile int8_t x710 = INT8_MAX;
	uint64_t x711 = 2298144449346899LLU;
	int16_t x712 = INT16_MIN;

	t75 = (x709/(x710<(x711%x712)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x713 = INT64_MIN;
	int16_t x714 = -17;
	uint8_t x715 = 36U;
	int32_t x716 = INT32_MIN;
	static volatile int64_t t76 = INT64_MIN;

	t76 = (x713/(x714<(x715%x716)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x722 = -9;
	int32_t x723 = INT32_MAX;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t77 = -519749;

	t77 = (x721/(x722<(x723%x724)));

	if (t77 != 239) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x725 = INT32_MAX;
	int8_t x726 = -5;
	int16_t x728 = -1;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x725/(x726<(x727%x728)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x741 = UINT32_MAX;
	static int16_t x743 = INT16_MAX;
	int64_t x744 = INT64_MAX;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (x741/(x742<(x743%x744)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x745 = INT8_MAX;
	int16_t x746 = -1;
	uint16_t x747 = 11U;
	int64_t x748 = 13LL;
	int32_t t80 = -45315185;

	t80 = (x745/(x746<(x747%x748)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x749 = 15652031;
	int32_t x750 = INT32_MIN;
	int32_t x751 = INT32_MAX;
	volatile int64_t x752 = INT64_MIN;
	volatile int32_t t81 = -2;

	t81 = (x749/(x750<(x751%x752)));

	if (t81 != 15652031) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x757 = INT16_MAX;
	int32_t x758 = INT32_MIN;
	int16_t x759 = 58;
	volatile uint16_t x760 = UINT16_MAX;
	volatile int32_t t82 = -85370180;

	t82 = (x757/(x758<(x759%x760)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x770 = INT16_MIN;
	int32_t x771 = -1;
	static int8_t x772 = INT8_MIN;
	uint32_t t83 = UINT32_MAX;

	t83 = (x769/(x770<(x771%x772)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x774 = INT8_MIN;
	int64_t x775 = INT64_MIN;
	volatile int32_t t84 = -28;

	t84 = (x773/(x774<(x775%x776)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x778 = 17LLU;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x777/(x778<(x779%x780)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x781 = 25398156LLU;
	uint32_t x784 = UINT32_MAX;

	t86 = (x781/(x782<(x783%x784)));

	if (t86 != 25398156LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x785 = -42419788LL;
	static int64_t x786 = 138221908LL;
	uint32_t x787 = UINT32_MAX;
	int64_t x788 = INT64_MIN;

	t87 = (x785/(x786<(x787%x788)));

	if (t87 != -42419788LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x789 = INT32_MIN;
	volatile int64_t x790 = -818130949LL;
	int32_t x791 = -13981678;
	volatile int16_t x792 = INT16_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (x789/(x790<(x791%x792)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x797 = INT16_MIN;
	volatile int8_t x798 = INT8_MIN;
	volatile int32_t x799 = -1;
	uint8_t x800 = 2U;
	volatile int32_t t89 = 922;

	t89 = (x797/(x798<(x799%x800)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x801 = UINT8_MAX;
	int8_t x802 = -30;
	int64_t x803 = -1LL;
	static int64_t x804 = INT64_MIN;
	volatile int32_t t90 = 66;

	t90 = (x801/(x802<(x803%x804)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x805 = UINT64_MAX;
	volatile int16_t x807 = -1;
	uint8_t x808 = UINT8_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (x805/(x806<(x807%x808)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x817 = INT32_MAX;
	volatile int16_t x818 = INT16_MIN;
	int64_t x819 = 8735700094LL;
	int64_t x820 = 3LL;

	t92 = (x817/(x818<(x819%x820)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x821 = -1;
	int8_t x822 = 10;
	static uint8_t x823 = 22U;
	int32_t x824 = -712671163;
	volatile int32_t t93 = 288;

	t93 = (x821/(x822<(x823%x824)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x837 = INT8_MIN;
	int16_t x840 = INT16_MIN;
	int32_t t94 = 11524851;

	t94 = (x837/(x838<(x839%x840)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x845 = INT64_MAX;
	uint32_t x847 = 1378217U;
	int8_t x848 = -1;
	int64_t t95 = INT64_MAX;

	t95 = (x845/(x846<(x847%x848)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x854 = -1;
	volatile uint8_t x855 = UINT8_MAX;
	int8_t x856 = INT8_MIN;
	volatile int32_t t96 = -65778556;

	t96 = (x853/(x854<(x855%x856)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x857 = 2;
	static int64_t x858 = INT64_MIN;
	volatile int32_t t97 = -66673096;

	t97 = (x857/(x858<(x859%x860)));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x861 = 3421;
	volatile int8_t x862 = INT8_MIN;
	uint16_t x863 = 5U;
	int8_t x864 = -1;

	t98 = (x861/(x862<(x863%x864)));

	if (t98 != 3421) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x865 = 1;
	static volatile int64_t x866 = INT64_MIN;
	static int16_t x867 = -19;
	int64_t x868 = 3534116222631LL;
	volatile int32_t t99 = 26001;

	t99 = (x865/(x866<(x867%x868)));

	if (t99 != 1) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

