#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 3LL;
int8_t x29 = INT8_MIN;
uint16_t x34 = 581U;
volatile uint16_t x37 = 16729U;
int32_t t3 = 139889275;
uint16_t x58 = UINT16_MAX;
int16_t x60 = -1;
int16_t x70 = -1;
int16_t x92 = -1;
static int16_t x93 = INT16_MAX;
volatile int64_t t9 = -2255LL;
int16_t x156 = -1;
uint8_t x157 = 4U;
int32_t x158 = INT32_MIN;
static uint16_t x161 = 98U;
volatile int16_t x175 = -1;
int32_t x191 = -1;
int16_t x192 = 16;
int8_t x209 = INT8_MIN;
uint32_t x211 = UINT32_MAX;
static int16_t x212 = INT16_MIN;
static volatile int16_t x217 = INT16_MIN;
int32_t t22 = -751377;
int8_t x231 = -1;
int64_t x253 = INT64_MIN;
static uint16_t x261 = UINT16_MAX;
static int32_t x281 = 10;
int16_t x286 = INT16_MIN;
static uint8_t x287 = UINT8_MAX;
uint64_t x288 = UINT64_MAX;
volatile int8_t x293 = INT8_MAX;
uint16_t x296 = 29761U;
static int32_t t31 = 56542;
int16_t x298 = -1;
uint64_t x300 = UINT64_MAX;
volatile int32_t x357 = -53;
int32_t x359 = -192;
static volatile int32_t t33 = -2;
int64_t x385 = 38842041LL;
int16_t x386 = INT16_MIN;
uint32_t x416 = 133460574U;
static uint64_t x429 = UINT64_MAX;
volatile uint16_t x442 = 17518U;
int64_t x449 = -2840789254397LL;
static int64_t t43 = -21205459765606LL;
static uint8_t x459 = 2U;
volatile int32_t t47 = 486;
int32_t x511 = -427267670;
static volatile uint16_t x528 = UINT16_MAX;
uint8_t x536 = 34U;
int64_t t52 = -17LL;
volatile uint64_t x540 = 365811228LLU;
uint16_t x554 = 0U;
int8_t x559 = -6;
volatile int64_t t55 = 1LL;
int64_t x569 = INT64_MIN;
int16_t x573 = -1;
static uint8_t x575 = 11U;
static int64_t x578 = INT64_MIN;
uint16_t x581 = 11U;
static int32_t t59 = -533689774;
int8_t x591 = -1;
volatile int16_t x612 = INT16_MAX;
static int64_t x618 = INT64_MIN;
volatile int32_t t67 = 1;
static int16_t x658 = 0;
volatile int64_t t69 = 3527LL;
int32_t x673 = INT32_MIN;
int8_t x681 = INT8_MIN;
int64_t x682 = INT64_MIN;
volatile uint32_t x684 = UINT32_MAX;
int8_t x696 = -3;
volatile int32_t t74 = 1484;
uint64_t x700 = UINT64_MAX;
int32_t t76 = -166216;
int16_t x718 = INT16_MIN;
volatile int32_t t78 = 14133117;
static volatile int16_t x736 = -601;
static volatile int32_t t79 = 121768;
uint8_t x746 = 4U;
static int64_t x754 = -3316556078049647LL;
int64_t x755 = -1LL;
int64_t x762 = -7840288067144LL;
static int32_t x769 = INT32_MAX;
int16_t x771 = INT16_MIN;
int32_t t85 = 46422;
int32_t x781 = INT32_MIN;
int32_t t86 = 0;
uint16_t x793 = 17379U;
int16_t x794 = -1;
static uint16_t x797 = 26744U;
static volatile int32_t t90 = -115089;
static int64_t x825 = INT64_MIN;
int8_t x832 = INT8_MIN;
uint32_t x859 = 6818U;
volatile int64_t x872 = 9853034325635LL;
volatile int32_t t97 = -55;
int8_t x877 = -1;
int32_t x884 = 523859493;


void f0(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = -3;
	int8_t x8 = 14;
	volatile int64_t t0 = -494278LL;

	t0 = (x5%((x6-x7)<x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x30 = -1LL;
	volatile int64_t x31 = INT64_MAX;
	static int8_t x32 = INT8_MIN;
	int32_t t1 = -204768984;

	t1 = (x29%((x30-x31)<x32));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x35 = -1;
	uint32_t x36 = UINT32_MAX;
	static int32_t t2 = 241883;

	t2 = (x33%((x34-x35)<x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x38 = -63;
	int8_t x39 = 0;
	uint8_t x40 = 9U;

	t3 = (x37%((x38-x39)<x40));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x57 = -18;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int32_t t4 = 13973968;

	t4 = (x57%((x58-x59)<x60));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x65 = -1;
	uint8_t x66 = 28U;
	int64_t x67 = 241846437LL;
	int16_t x68 = INT16_MIN;
	volatile int32_t t5 = -302327;

	t5 = (x65%((x66-x67)<x68));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x69 = INT32_MAX;
	static volatile int32_t x71 = INT32_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t6 = 291;

	t6 = (x69%((x70-x71)<x72));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x89 = INT16_MAX;
	static uint32_t x90 = UINT32_MAX;
	uint32_t x91 = 742841U;
	int32_t t7 = -943631;

	t7 = (x89%((x90-x91)<x92));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x94 = 41LLU;
	static int16_t x95 = -1;
	int64_t x96 = -26827992LL;
	int32_t t8 = -7;

	t8 = (x93%((x94-x95)<x96));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x101 = 606LL;
	int32_t x102 = INT32_MIN;
	static int16_t x103 = -1;
	volatile uint32_t x104 = UINT32_MAX;

	t9 = (x101%((x102-x103)<x104));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x125 = -1LL;
	int16_t x126 = -1;
	volatile int32_t x127 = 34426;
	int32_t x128 = INT32_MAX;
	volatile int64_t t10 = 277LL;

	t10 = (x125%((x126-x127)<x128));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x133 = 48U;
	static int16_t x134 = INT16_MIN;
	volatile int16_t x135 = 6344;
	static volatile int64_t x136 = INT64_MAX;
	volatile int32_t t11 = -5119326;

	t11 = (x133%((x134-x135)<x136));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x137 = INT64_MAX;
	static uint64_t x138 = 2831392097LLU;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = INT8_MIN;
	volatile int64_t t12 = -240LL;

	t12 = (x137%((x138-x139)<x140));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x141 = UINT16_MAX;
	int8_t x142 = 5;
	static int32_t x143 = INT32_MAX;
	static uint32_t x144 = UINT32_MAX;
	volatile int32_t t13 = 223146902;

	t13 = (x141%((x142-x143)<x144));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x153 = -1LL;
	uint32_t x154 = 24U;
	volatile int16_t x155 = -1;
	int64_t t14 = -3LL;

	t14 = (x153%((x154-x155)<x156));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x159 = UINT64_MAX;
	int64_t x160 = -1LL;
	int32_t t15 = 69891;

	t15 = (x157%((x158-x159)<x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x162 = INT8_MAX;
	static uint8_t x163 = UINT8_MAX;
	int8_t x164 = 3;
	int32_t t16 = 242412;

	t16 = (x161%((x162-x163)<x164));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	int64_t x176 = 724602404744270LL;
	volatile int32_t t17 = 13;

	t17 = (x173%((x174-x175)<x176));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x177 = 15168U;
	volatile uint8_t x178 = UINT8_MAX;
	int32_t x179 = INT32_MAX;
	int64_t x180 = -1LL;
	static uint32_t t18 = 3065U;

	t18 = (x177%((x178-x179)<x180));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x189 = INT32_MIN;
	static int16_t x190 = -1;
	volatile int32_t t19 = -21731;

	t19 = (x189%((x190-x191)<x192));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int64_t x206 = INT64_MIN;
	int32_t x207 = -513;
	static int8_t x208 = INT8_MAX;
	int64_t t20 = 9LL;

	t20 = (x205%((x206-x207)<x208));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x210 = UINT32_MAX;
	int32_t t21 = -58747;

	t21 = (x209%((x210-x211)<x212));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x218 = INT16_MAX;
	uint32_t x219 = UINT32_MAX;
	static int32_t x220 = -1;

	t22 = (x217%((x218-x219)<x220));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x221 = -375542648148855624LL;
	int16_t x222 = -1;
	uint8_t x223 = 96U;
	static int32_t x224 = INT32_MAX;
	int64_t t23 = 2513736675872LL;

	t23 = (x221%((x222-x223)<x224));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x229 = INT16_MIN;
	int16_t x230 = INT16_MAX;
	uint64_t x232 = 43642957450407867LLU;
	int32_t t24 = -38;

	t24 = (x229%((x230-x231)<x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = INT32_MIN;
	static int8_t x243 = -1;
	uint16_t x244 = 12U;
	volatile int32_t t25 = -1;

	t25 = (x241%((x242-x243)<x244));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x254 = UINT64_MAX;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MIN;
	static volatile int64_t t26 = 3629LL;

	t26 = (x253%((x254-x255)<x256));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x257 = -3810;
	static int32_t x258 = INT32_MIN;
	volatile uint32_t x259 = UINT32_MAX;
	volatile int32_t x260 = -1;
	int32_t t27 = -63;

	t27 = (x257%((x258-x259)<x260));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x262 = -19020;
	int16_t x263 = INT16_MAX;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t28 = -393259;

	t28 = (x261%((x262-x263)<x264));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x282 = 4U;
	uint8_t x283 = UINT8_MAX;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t29 = 2;

	t29 = (x281%((x282-x283)<x284));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x285 = -1LL;
	volatile int64_t t30 = 4528LL;

	t30 = (x285%((x286-x287)<x288));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x294 = -428LL;
	uint16_t x295 = UINT16_MAX;

	t31 = (x293%((x294-x295)<x296));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x297 = 8LL;
	volatile int64_t x299 = INT64_MIN;
	volatile int64_t t32 = -13442976053396LL;

	t32 = (x297%((x298-x299)<x300));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x358 = 3U;
	int32_t x360 = INT32_MAX;

	t33 = (x357%((x358-x359)<x360));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x369 = 988U;
	static int32_t x370 = 16893;
	static uint64_t x371 = 154LLU;
	volatile int64_t x372 = -1LL;
	static int32_t t34 = 519641046;

	t34 = (x369%((x370-x371)<x372));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x387 = 11U;
	uint8_t x388 = 14U;
	static volatile int64_t t35 = -258150004376LL;

	t35 = (x385%((x386-x387)<x388));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x393 = -26;
	int64_t x394 = -2LL;
	volatile int32_t x395 = -1;
	uint8_t x396 = 1U;
	volatile int32_t t36 = -87;

	t36 = (x393%((x394-x395)<x396));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = 12;
	static int32_t x403 = INT32_MAX;
	volatile int16_t x404 = -25;
	volatile int32_t t37 = 1979749;

	t37 = (x401%((x402-x403)<x404));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int8_t x414 = -1;
	int64_t x415 = INT64_MAX;
	uint64_t t38 = 147676266LLU;

	t38 = (x413%((x414-x415)<x416));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x430 = INT32_MIN;
	volatile int8_t x431 = -1;
	int16_t x432 = INT16_MAX;
	volatile uint64_t t39 = 101920LLU;

	t39 = (x429%((x430-x431)<x432));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x437 = INT8_MIN;
	uint8_t x438 = 82U;
	int16_t x439 = INT16_MAX;
	int32_t x440 = -1;
	volatile int32_t t40 = 0;

	t40 = (x437%((x438-x439)<x440));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x441 = -1;
	uint64_t x443 = 188838835LLU;
	volatile int8_t x444 = -1;
	volatile int32_t t41 = -44836718;

	t41 = (x441%((x442-x443)<x444));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x445 = 93U;
	uint8_t x446 = UINT8_MAX;
	static volatile int16_t x447 = INT16_MAX;
	volatile uint8_t x448 = 3U;
	int32_t t42 = 3147645;

	t42 = (x445%((x446-x447)<x448));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x450 = INT32_MIN;
	int16_t x451 = -26;
	uint8_t x452 = 0U;

	t43 = (x449%((x450-x451)<x452));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x457 = UINT64_MAX;
	volatile int8_t x458 = INT8_MIN;
	int8_t x460 = INT8_MAX;
	uint64_t t44 = 175897382120016LLU;

	t44 = (x457%((x458-x459)<x460));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x461 = 15640143U;
	static int16_t x462 = -1842;
	uint8_t x463 = 0U;
	volatile int64_t x464 = INT64_MAX;
	uint32_t t45 = 2U;

	t45 = (x461%((x462-x463)<x464));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x473 = INT8_MAX;
	volatile int16_t x474 = -1;
	static int8_t x475 = 10;
	int16_t x476 = 51;
	volatile int32_t t46 = 169004;

	t46 = (x473%((x474-x475)<x476));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x485 = INT16_MIN;
	uint32_t x486 = 756511U;
	uint16_t x487 = 3837U;
	uint32_t x488 = 789364962U;

	t47 = (x485%((x486-x487)<x488));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x501 = INT8_MIN;
	static uint32_t x502 = 5254261U;
	static volatile uint64_t x503 = 60064835LLU;
	int16_t x504 = -22;
	static volatile int32_t t48 = -3827478;

	t48 = (x501%((x502-x503)<x504));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x509 = UINT32_MAX;
	int32_t x510 = -10;
	int32_t x512 = 534907856;
	volatile uint32_t t49 = 388536U;

	t49 = (x509%((x510-x511)<x512));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x517 = INT16_MIN;
	int64_t x518 = INT64_MIN;
	int8_t x519 = INT8_MIN;
	static uint64_t x520 = UINT64_MAX;
	int32_t t50 = -145748;

	t50 = (x517%((x518-x519)<x520));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x525 = INT32_MIN;
	uint8_t x526 = 1U;
	int64_t x527 = INT64_MAX;
	volatile int32_t t51 = -30659;

	t51 = (x525%((x526-x527)<x528));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x533 = INT64_MIN;
	static uint8_t x534 = 11U;
	int64_t x535 = 757760LL;

	t52 = (x533%((x534-x535)<x536));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x537 = 0LLU;
	uint16_t x538 = 382U;
	volatile uint16_t x539 = 4U;
	uint64_t t53 = 827576325344611447LLU;

	t53 = (x537%((x538-x539)<x540));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x553 = INT64_MIN;
	uint32_t x555 = 923232767U;
	int32_t x556 = -1;
	static volatile int64_t t54 = 17627035980816LL;

	t54 = (x553%((x554-x555)<x556));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x557 = 777877745085264LL;
	int8_t x558 = INT8_MAX;
	int16_t x560 = INT16_MAX;

	t55 = (x557%((x558-x559)<x560));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x570 = -1;
	static volatile uint8_t x571 = UINT8_MAX;
	uint64_t x572 = UINT64_MAX;
	volatile int64_t t56 = 929917LL;

	t56 = (x569%((x570-x571)<x572));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x574 = 57018993LLU;
	uint64_t x576 = UINT64_MAX;
	volatile int32_t t57 = 102400;

	t57 = (x573%((x574-x575)<x576));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x577 = 1003U;
	int64_t x579 = -1LL;
	uint16_t x580 = UINT16_MAX;
	static int32_t t58 = 205;

	t58 = (x577%((x578-x579)<x580));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x582 = 1847U;
	static int64_t x583 = -1LL;
	static int16_t x584 = INT16_MAX;

	t59 = (x581%((x582-x583)<x584));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x589 = INT64_MIN;
	static uint8_t x590 = 2U;
	uint16_t x592 = UINT16_MAX;
	int64_t t60 = 6220876693610348LL;

	t60 = (x589%((x590-x591)<x592));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x597 = 55552349LLU;
	uint16_t x598 = 49U;
	int8_t x599 = -1;
	int64_t x600 = INT64_MAX;
	uint64_t t61 = 5259606788746295LLU;

	t61 = (x597%((x598-x599)<x600));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x609 = INT8_MIN;
	uint16_t x610 = 3U;
	static uint8_t x611 = 31U;
	int32_t t62 = 248284;

	t62 = (x609%((x610-x611)<x612));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x617 = INT32_MAX;
	int32_t x619 = INT32_MIN;
	int8_t x620 = 0;
	volatile int32_t t63 = -11;

	t63 = (x617%((x618-x619)<x620));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x621 = INT8_MIN;
	volatile int32_t x622 = INT32_MIN;
	int16_t x623 = INT16_MIN;
	volatile int8_t x624 = -44;
	volatile int32_t t64 = -745518;

	t64 = (x621%((x622-x623)<x624));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x625 = 1U;
	int16_t x626 = 7;
	int8_t x627 = 2;
	static volatile int8_t x628 = 10;
	volatile int32_t t65 = 141407;

	t65 = (x625%((x626-x627)<x628));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x633 = -1013;
	static int8_t x634 = INT8_MIN;
	int32_t x635 = INT32_MIN;
	static volatile uint64_t x636 = 1029037804715253LLU;
	int32_t t66 = 31;

	t66 = (x633%((x634-x635)<x636));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x641 = INT32_MAX;
	uint8_t x642 = 4U;
	int16_t x643 = INT16_MIN;
	uint64_t x644 = 10776858016284LLU;

	t67 = (x641%((x642-x643)<x644));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x649 = UINT8_MAX;
	volatile int32_t x650 = 2166;
	uint32_t x651 = UINT32_MAX;
	static int8_t x652 = INT8_MIN;
	volatile int32_t t68 = 1576896;

	t68 = (x649%((x650-x651)<x652));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x657 = -112495438077866008LL;
	uint32_t x659 = UINT32_MAX;
	int8_t x660 = INT8_MIN;

	t69 = (x657%((x658-x659)<x660));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x661 = INT32_MIN;
	volatile int32_t x662 = INT32_MAX;
	uint32_t x663 = UINT32_MAX;
	int8_t x664 = -1;
	static volatile int32_t t70 = 850;

	t70 = (x661%((x662-x663)<x664));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x665 = 11;
	volatile int16_t x666 = 76;
	int16_t x667 = 16056;
	int8_t x668 = -1;
	static volatile int32_t t71 = -84042;

	t71 = (x665%((x666-x667)<x668));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x674 = -1LL;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = UINT64_MAX;
	int32_t t72 = -179962;

	t72 = (x673%((x674-x675)<x676));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x683 = -5167125LL;
	volatile int32_t t73 = -64193;

	t73 = (x681%((x682-x683)<x684));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x693 = 14;
	int16_t x694 = INT16_MIN;
	int16_t x695 = 57;

	t74 = (x693%((x694-x695)<x696));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x697 = INT64_MIN;
	int16_t x698 = INT16_MIN;
	uint32_t x699 = 116860145U;
	volatile int64_t t75 = 1LL;

	t75 = (x697%((x698-x699)<x700));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x701 = INT8_MIN;
	static uint64_t x702 = 10613024872927164LLU;
	uint8_t x703 = 95U;
	int64_t x704 = -3267LL;

	t76 = (x701%((x702-x703)<x704));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x709 = 103U;
	int8_t x710 = INT8_MIN;
	int8_t x711 = -1;
	uint64_t x712 = UINT64_MAX;
	static volatile int32_t t77 = -535984417;

	t77 = (x709%((x710-x711)<x712));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x717 = 1740;
	int32_t x719 = 1758;
	int16_t x720 = INT16_MIN;

	t78 = (x717%((x718-x719)<x720));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x733 = INT32_MAX;
	int64_t x734 = INT64_MIN;
	int8_t x735 = -1;

	t79 = (x733%((x734-x735)<x736));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x741 = -1;
	int16_t x742 = -1;
	static uint8_t x743 = 4U;
	static int64_t x744 = -1LL;
	int32_t t80 = 13;

	t80 = (x741%((x742-x743)<x744));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x745 = -20862;
	int16_t x747 = -1;
	uint16_t x748 = 223U;
	int32_t t81 = -7;

	t81 = (x745%((x746-x747)<x748));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x753 = -9243;
	volatile int16_t x756 = INT16_MAX;
	volatile int32_t t82 = 43955419;

	t82 = (x753%((x754-x755)<x756));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x761 = 12334078;
	int32_t x763 = INT32_MIN;
	int32_t x764 = 1;
	volatile int32_t t83 = -19339;

	t83 = (x761%((x762-x763)<x764));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x765 = 22;
	volatile uint64_t x766 = UINT64_MAX;
	volatile int8_t x767 = INT8_MIN;
	static int32_t x768 = -1;
	volatile int32_t t84 = 2878848;

	t84 = (x765%((x766-x767)<x768));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x770 = INT32_MIN;
	static uint8_t x772 = UINT8_MAX;

	t85 = (x769%((x770-x771)<x772));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x782 = INT32_MIN;
	int32_t x783 = -415;
	static int64_t x784 = INT64_MAX;

	t86 = (x781%((x782-x783)<x784));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x795 = INT64_MIN;
	static uint64_t x796 = UINT64_MAX;
	int32_t t87 = -792364;

	t87 = (x793%((x794-x795)<x796));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x798 = UINT32_MAX;
	static int32_t x799 = INT32_MIN;
	int64_t x800 = INT64_MAX;
	int32_t t88 = 5050725;

	t88 = (x797%((x798-x799)<x800));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x805 = INT32_MIN;
	int32_t x806 = INT32_MIN;
	volatile int32_t x807 = -1;
	static int16_t x808 = 7841;
	volatile int32_t t89 = 285430;

	t89 = (x805%((x806-x807)<x808));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x813 = 3;
	int8_t x814 = INT8_MIN;
	int16_t x815 = 5;
	uint32_t x816 = UINT32_MAX;

	t90 = (x813%((x814-x815)<x816));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x817 = INT16_MIN;
	static volatile int64_t x818 = -1220661817381LL;
	volatile int32_t x819 = INT32_MIN;
	int64_t x820 = -1LL;
	int32_t t91 = 401425;

	t91 = (x817%((x818-x819)<x820));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x826 = INT16_MIN;
	volatile uint32_t x827 = 3262088U;
	int64_t x828 = INT64_MAX;
	int64_t t92 = -393469273755LL;

	t92 = (x825%((x826-x827)<x828));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x829 = -4;
	uint64_t x830 = 7962029697380665LLU;
	static uint8_t x831 = 2U;
	int32_t t93 = -3513;

	t93 = (x829%((x830-x831)<x832));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x857 = INT16_MIN;
	static uint64_t x858 = 0LLU;
	int16_t x860 = -1923;
	volatile int32_t t94 = -67;

	t94 = (x857%((x858-x859)<x860));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x865 = 5287586U;
	uint64_t x866 = 2137LLU;
	int64_t x867 = -3084288438865389LL;
	static int8_t x868 = -1;
	uint32_t t95 = 540U;

	t95 = (x865%((x866-x867)<x868));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x869 = 39U;
	int16_t x870 = 1;
	static int64_t x871 = -554295179661LL;
	volatile int32_t t96 = -2;

	t96 = (x869%((x870-x871)<x872));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x873 = -2;
	int16_t x874 = -1;
	int8_t x875 = INT8_MAX;
	int16_t x876 = -1;

	t97 = (x873%((x874-x875)<x876));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x878 = -1LL;
	uint8_t x879 = UINT8_MAX;
	int8_t x880 = 3;
	int32_t t98 = 108744;

	t98 = (x877%((x878-x879)<x880));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x881 = UINT64_MAX;
	int64_t x882 = -1LL;
	volatile int8_t x883 = INT8_MAX;
	volatile uint64_t t99 = 707755951LLU;

	t99 = (x881%((x882-x883)<x884));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

