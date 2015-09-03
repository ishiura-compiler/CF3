#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
volatile int32_t t0 = 186555;
int32_t t1 = INT32_MIN;
static uint32_t x19 = 7U;
int8_t x40 = -1;
int32_t x42 = -187568;
volatile uint32_t x49 = UINT32_MAX;
volatile uint32_t t7 = UINT32_MAX;
int16_t x68 = INT16_MIN;
int64_t x83 = 105826538324737975LL;
volatile uint32_t x84 = UINT32_MAX;
int32_t x88 = -1;
volatile int32_t x114 = INT32_MIN;
int32_t t13 = -314228472;
static uint8_t x122 = 1U;
int16_t x125 = -1;
int8_t x141 = INT8_MAX;
uint32_t x148 = UINT32_MAX;
volatile int8_t x152 = INT8_MIN;
uint64_t x183 = UINT64_MAX;
static volatile uint64_t t20 = 311612776342LLU;
int16_t x192 = INT16_MIN;
uint64_t x194 = 62777143570LLU;
int64_t x195 = INT64_MIN;
static volatile int32_t x196 = -211868;
uint16_t x203 = 9U;
volatile int32_t t23 = -45;
uint16_t x259 = 23U;
int64_t x260 = 1641794207LL;
volatile int8_t x269 = -1;
int16_t x293 = INT16_MIN;
int8_t x294 = -11;
int8_t x295 = INT8_MAX;
int64_t t29 = -6618777809LL;
int16_t x317 = INT16_MIN;
static int32_t t30 = -15;
int64_t x321 = INT64_MAX;
static int16_t x324 = INT16_MIN;
uint64_t x359 = UINT64_MAX;
static volatile int32_t t34 = -47;
uint8_t x373 = 22U;
int16_t x381 = -1;
int8_t x383 = -1;
int16_t x390 = INT16_MIN;
int8_t x413 = INT8_MAX;
static int16_t x416 = INT16_MIN;
volatile int32_t t42 = -451;
int32_t x429 = INT32_MAX;
int32_t x431 = 10376;
volatile uint8_t x440 = 2U;
int32_t t46 = 1;
int16_t x465 = -1;
volatile uint8_t x466 = 57U;
volatile uint64_t x477 = UINT64_MAX;
static uint64_t x479 = UINT64_MAX;
uint64_t t49 = UINT64_MAX;
uint32_t x481 = 191385328U;
static volatile int32_t t51 = -2;
volatile uint64_t t52 = 27777687983712041LLU;
uint16_t x510 = 8019U;
static uint32_t x528 = UINT32_MAX;
int64_t x562 = 1904LL;
uint16_t x564 = UINT16_MAX;
int32_t x571 = 407;
static int8_t x573 = INT8_MIN;
static volatile uint64_t x576 = 457422140032984837LLU;
volatile int32_t t57 = 12365;
uint8_t x580 = UINT8_MAX;
uint16_t x592 = 25908U;
volatile uint64_t x609 = UINT64_MAX;
int8_t x616 = -1;
volatile int32_t t63 = 1163780;
static int16_t x645 = -1;
int32_t x646 = -1;
uint64_t t66 = UINT64_MAX;
int8_t x672 = INT8_MIN;
volatile uint32_t t68 = 422197225U;
int32_t x700 = INT32_MAX;
int32_t t70 = -245;
int8_t x717 = INT8_MIN;
int64_t x720 = INT64_MAX;
static volatile int32_t t71 = -97612118;
uint64_t x759 = UINT64_MAX;
uint32_t x766 = 129U;
static int64_t x767 = 42887262607LL;
uint64_t x771 = UINT64_MAX;
int16_t x773 = -1;
static volatile int64_t x775 = 2057256691LL;
uint16_t x785 = UINT16_MAX;
static uint8_t x786 = 18U;
static int32_t t80 = -1;
static int64_t x798 = -7661251156LL;
uint8_t x799 = 7U;
int8_t x800 = INT8_MIN;
uint8_t x801 = UINT8_MAX;
static volatile uint16_t x804 = 8316U;
volatile int32_t x848 = 784312626;
int16_t x856 = INT16_MIN;
int16_t x863 = INT16_MIN;
volatile int32_t t89 = 167;
static int32_t t91 = 27;
int8_t x919 = INT8_MIN;
static int64_t x920 = 12545LL;
int8_t x928 = 11;
volatile int8_t x932 = INT8_MIN;
volatile int16_t x933 = -149;
volatile int64_t x950 = 4LL;
uint32_t x957 = 245727U;
static int64_t x958 = -1LL;
int32_t x960 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = 0U;
	volatile uint32_t x3 = UINT32_MAX;

	t0 = (x1/((x2-x3)<x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	volatile uint64_t x7 = 42905029091LLU;
	static int32_t x8 = -388;

	t1 = (x5/((x6-x7)<x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = -1LL;
	uint32_t x18 = 51765U;
	int32_t x20 = INT32_MIN;
	volatile int64_t t2 = -1073272350059026439LL;

	t2 = (x17/((x18-x19)<x20));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = 223405144084914670LL;
	int64_t x30 = -1LL;
	uint8_t x31 = 47U;
	volatile int8_t x32 = -1;
	int64_t t3 = -511984940101954LL;

	t3 = (x29/((x30-x31)<x32));

	if (t3 != 223405144084914670LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = -79123LL;
	int16_t x35 = -1;
	static int16_t x36 = 1;
	volatile int32_t t4 = 174004945;

	t4 = (x33/((x34-x35)<x36));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x37 = INT8_MIN;
	uint64_t x38 = 5321286331404848210LLU;
	uint64_t x39 = 33289901169771LLU;
	volatile int32_t t5 = -7900;

	t5 = (x37/((x38-x39)<x40));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x41 = -1;
	int16_t x43 = -681;
	int32_t x44 = -1;
	volatile int32_t t6 = 12;

	t6 = (x41/((x42-x43)<x44));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x50 = 3;
	int8_t x51 = 7;
	int64_t x52 = 852530096655312LL;

	t7 = (x49/((x50-x51)<x52));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -1;
	int64_t x54 = -23151252004614LL;
	int64_t x55 = 9849798622LL;
	uint8_t x56 = 24U;
	int32_t t8 = -99388;

	t8 = (x53/((x54-x55)<x56));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x61 = 80862U;
	static int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	int16_t x64 = -1315;
	volatile uint32_t t9 = 3U;

	t9 = (x61/((x62-x63)<x64));

	if (t9 != 80862U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x65 = 12U;
	uint64_t x66 = 344625095096492LLU;
	int8_t x67 = -1;
	int32_t t10 = -1194;

	t10 = (x65/((x66-x67)<x68));

	if (t10 != 12) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x81 = INT8_MIN;
	uint32_t x82 = 14730633U;
	volatile int32_t t11 = 0;

	t11 = (x81/((x82-x83)<x84));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = INT16_MIN;
	static volatile uint32_t x86 = 58325U;
	int16_t x87 = 658;
	int32_t t12 = -536899738;

	t12 = (x85/((x86-x87)<x88));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x113 = 2U;
	int64_t x115 = 69422075613LL;
	uint8_t x116 = UINT8_MAX;

	t13 = (x113/((x114-x115)<x116));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x121 = 1;
	static int8_t x123 = INT8_MIN;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t14 = -772949110;

	t14 = (x121/((x122-x123)<x124));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x126 = 12U;
	uint64_t x127 = UINT64_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t15 = -44872169;

	t15 = (x125/((x126-x127)<x128));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x137 = 7U;
	uint8_t x138 = 1U;
	static int64_t x139 = INT64_MAX;
	static uint8_t x140 = 0U;
	static volatile int32_t t16 = 13;

	t16 = (x137/((x138-x139)<x140));

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x142 = -1;
	static int16_t x143 = 3450;
	uint16_t x144 = 1264U;
	int32_t t17 = 69;

	t17 = (x141/((x142-x143)<x144));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	volatile int32_t x146 = -488264;
	static volatile int8_t x147 = -15;
	static uint32_t t18 = UINT32_MAX;

	t18 = (x145/((x146-x147)<x148));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x149 = UINT32_MAX;
	static uint32_t x150 = 4605282U;
	int64_t x151 = 7374169841751LL;
	uint32_t t19 = UINT32_MAX;

	t19 = (x149/((x150-x151)<x152));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x181 = 3LLU;
	int32_t x182 = -1;
	static int64_t x184 = INT64_MIN;

	t20 = (x181/((x182-x183)<x184));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x189 = 5LL;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -1;
	volatile int64_t t21 = -1724150609124LL;

	t21 = (x189/((x190-x191)<x192));

	if (t21 != 5LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x193 = 410LL;
	volatile int64_t t22 = 2603323418752LL;

	t22 = (x193/((x194-x195)<x196));

	if (t22 != 410LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x201 = INT8_MIN;
	uint8_t x202 = 0U;
	int8_t x204 = -1;

	t23 = (x201/((x202-x203)<x204));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x237 = 2;
	int16_t x238 = INT16_MAX;
	uint32_t x239 = 223U;
	int64_t x240 = 1864304062LL;
	volatile int32_t t24 = -12512;

	t24 = (x237/((x238-x239)<x240));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x257 = -726754606;
	int16_t x258 = -786;
	volatile int32_t t25 = 2;

	t25 = (x257/((x258-x259)<x260));

	if (t25 != -726754606) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x270 = INT32_MIN;
	int8_t x271 = -6;
	int64_t x272 = INT64_MAX;
	int32_t t26 = -473431960;

	t26 = (x269/((x270-x271)<x272));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MAX;
	uint16_t x288 = 11U;
	int32_t t27 = INT32_MIN;

	t27 = (x285/((x286-x287)<x288));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x296 = 175U;
	volatile int32_t t28 = 99153;

	t28 = (x293/((x294-x295)<x296));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x301 = -1LL;
	uint64_t x302 = 397513012941917193LLU;
	static uint8_t x303 = 50U;
	int64_t x304 = INT64_MIN;

	t29 = (x301/((x302-x303)<x304));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x318 = INT16_MIN;
	uint8_t x319 = 0U;
	static int32_t x320 = INT32_MAX;

	t30 = (x317/((x318-x319)<x320));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x322 = 36U;
	uint64_t x323 = UINT64_MAX;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x321/((x322-x323)<x324));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x345 = 19148167957240719LLU;
	int8_t x346 = INT8_MIN;
	int32_t x347 = 0;
	uint16_t x348 = UINT16_MAX;
	uint64_t t32 = 67682126850LLU;

	t32 = (x345/((x346-x347)<x348));

	if (t32 != 19148167957240719LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x357 = -7;
	uint32_t x358 = 2452U;
	uint16_t x360 = UINT16_MAX;
	int32_t t33 = -91263925;

	t33 = (x357/((x358-x359)<x360));

	if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	volatile int16_t x363 = 0;
	int8_t x364 = -1;

	t34 = (x361/((x362-x363)<x364));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x369 = INT16_MAX;
	uint8_t x370 = 86U;
	volatile int16_t x371 = INT16_MIN;
	static int32_t x372 = INT32_MAX;
	int32_t t35 = 4476;

	t35 = (x369/((x370-x371)<x372));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x374 = INT64_MIN;
	int16_t x375 = -850;
	int8_t x376 = 33;
	int32_t t36 = 3;

	t36 = (x373/((x374-x375)<x376));

	if (t36 != 22) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x382 = 112U;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t37 = 1884759;

	t37 = (x381/((x382-x383)<x384));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 25U;
	int8_t x387 = 0;
	int32_t x388 = INT32_MIN;
	volatile int32_t t38 = -1588;

	t38 = (x385/((x386-x387)<x388));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x389 = INT32_MIN;
	static volatile int16_t x391 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t39 = INT32_MIN;

	t39 = (x389/((x390-x391)<x392));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x397 = -504718373898806589LL;
	uint16_t x398 = UINT16_MAX;
	static int64_t x399 = -1LL;
	static int64_t x400 = INT64_MAX;
	int64_t t40 = 308231314571LL;

	t40 = (x397/((x398-x399)<x400));

	if (t40 != -504718373898806589LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x405 = 279432LLU;
	volatile int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 46U;
	volatile uint64_t t41 = 109LLU;

	t41 = (x405/((x406-x407)<x408));

	if (t41 != 279432LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x414 = INT32_MIN;
	static uint64_t x415 = 248097271645086LLU;

	t42 = (x413/((x414-x415)<x416));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x430 = -1LL;
	static int8_t x432 = -1;
	volatile int32_t t43 = INT32_MAX;

	t43 = (x429/((x430-x431)<x432));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x437 = 59U;
	int32_t x438 = INT32_MIN;
	int64_t x439 = -2332007LL;
	static volatile int32_t t44 = 604200203;

	t44 = (x437/((x438-x439)<x440));

	if (t44 != 59) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x441 = 28;
	uint32_t x442 = UINT32_MAX;
	int16_t x443 = -1;
	int64_t x444 = 2525LL;
	static int32_t t45 = -593325;

	t45 = (x441/((x442-x443)<x444));

	if (t45 != 28) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x449 = UINT16_MAX;
	uint8_t x450 = 1U;
	volatile uint8_t x451 = UINT8_MAX;
	static uint32_t x452 = UINT32_MAX;

	t46 = (x449/((x450-x451)<x452));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x453 = 117U;
	uint64_t x454 = UINT64_MAX;
	int16_t x455 = -1;
	static volatile int32_t x456 = -10;
	static int32_t t47 = -173;

	t47 = (x453/((x454-x455)<x456));

	if (t47 != 117) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x467 = 1U;
	int8_t x468 = 59;
	volatile int32_t t48 = -10432;

	t48 = (x465/((x466-x467)<x468));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x478 = 16U;
	uint64_t x480 = 107837671LLU;

	t49 = (x477/((x478-x479)<x480));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x482 = -1LL;
	uint32_t x483 = UINT32_MAX;
	volatile uint8_t x484 = 1U;
	volatile uint32_t t50 = 2555U;

	t50 = (x481/((x482-x483)<x484));

	if (t50 != 191385328U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x485 = INT16_MIN;
	static int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	int8_t x488 = -36;

	t51 = (x485/((x486-x487)<x488));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x493 = 386467087951454466LLU;
	int16_t x494 = 1;
	static int16_t x495 = 363;
	int8_t x496 = INT8_MIN;

	t52 = (x493/((x494-x495)<x496));

	if (t52 != 386467087951454466LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x509 = -1;
	volatile uint32_t x511 = 367U;
	int16_t x512 = -1;
	int32_t t53 = 174;

	t53 = (x509/((x510-x511)<x512));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x525 = -401802;
	volatile int16_t x526 = INT16_MIN;
	int32_t x527 = 370;
	static volatile int32_t t54 = -121;

	t54 = (x525/((x526-x527)<x528));

	if (t54 != -401802) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x561 = INT32_MIN;
	int8_t x563 = 1;
	static volatile int32_t t55 = INT32_MIN;

	t55 = (x561/((x562-x563)<x564));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x569 = -27;
	static int16_t x570 = -9;
	volatile uint16_t x572 = 118U;
	volatile int32_t t56 = 617;

	t56 = (x569/((x570-x571)<x572));

	if (t56 != -27) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x574 = 60;
	volatile int64_t x575 = -1LL;

	t57 = (x573/((x574-x575)<x576));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x577 = INT32_MAX;
	volatile int64_t x578 = -2112380290331074LL;
	volatile uint8_t x579 = 11U;
	int32_t t58 = INT32_MAX;

	t58 = (x577/((x578-x579)<x580));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x589 = 1732;
	volatile uint8_t x590 = 3U;
	volatile int8_t x591 = INT8_MIN;
	int32_t t59 = -30826;

	t59 = (x589/((x590-x591)<x592));

	if (t59 != 1732) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x601 = 77U;
	uint16_t x602 = 95U;
	volatile uint32_t x603 = 790731184U;
	int16_t x604 = INT16_MIN;
	volatile int32_t t60 = -405165258;

	t60 = (x601/((x602-x603)<x604));

	if (t60 != 77) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x610 = 1597;
	uint64_t x611 = UINT64_MAX;
	int32_t x612 = -61;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x609/((x610-x611)<x612));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x613 = -39;
	static int8_t x614 = INT8_MIN;
	volatile int8_t x615 = INT8_MAX;
	int32_t t62 = -19633142;

	t62 = (x613/((x614-x615)<x616));

	if (t62 != -39) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x621 = 79;
	static int16_t x622 = INT16_MIN;
	int16_t x623 = 9864;
	int16_t x624 = INT16_MAX;

	t63 = (x621/((x622-x623)<x624));

	if (t63 != 79) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x629 = -1;
	int64_t x630 = INT64_MAX;
	uint16_t x631 = 4U;
	int64_t x632 = INT64_MAX;
	static volatile int32_t t64 = -1395403;

	t64 = (x629/((x630-x631)<x632));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MAX;
	volatile int32_t t65 = 2476422;

	t65 = (x645/((x646-x647)<x648));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x653 = UINT64_MAX;
	uint64_t x654 = 2786805021675077LLU;
	uint64_t x655 = UINT64_MAX;
	static int64_t x656 = INT64_MIN;

	t66 = (x653/((x654-x655)<x656));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x669 = INT64_MAX;
	int64_t x670 = -1LL;
	uint64_t x671 = 298392411LLU;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x669/((x670-x671)<x672));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x673 = 8707U;
	int8_t x674 = -1;
	volatile int64_t x675 = INT64_MAX;
	uint16_t x676 = UINT16_MAX;

	t68 = (x673/((x674-x675)<x676));

	if (t68 != 8707U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x689 = 45316U;
	volatile int8_t x690 = -1;
	volatile uint8_t x691 = 27U;
	uint8_t x692 = 1U;
	volatile uint32_t t69 = 4806031U;

	t69 = (x689/((x690-x691)<x692));

	if (t69 != 45316U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x697 = -1;
	int32_t x698 = -12;
	int8_t x699 = -2;

	t70 = (x697/((x698-x699)<x700));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x718 = -323997361521LL;
	static int64_t x719 = INT64_MIN;

	t71 = (x717/((x718-x719)<x720));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = INT32_MIN;
	int16_t x723 = -1;
	volatile int16_t x724 = INT16_MIN;
	uint32_t t72 = UINT32_MAX;

	t72 = (x721/((x722-x723)<x724));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x725 = -1;
	uint32_t x726 = 885098144U;
	uint8_t x727 = 3U;
	int8_t x728 = -1;
	static volatile int32_t t73 = -372434016;

	t73 = (x725/((x726-x727)<x728));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x729 = UINT64_MAX;
	int32_t x730 = -1;
	int16_t x731 = INT16_MIN;
	uint32_t x732 = 41386362U;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x729/((x730-x731)<x732));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x749 = INT16_MAX;
	volatile int16_t x750 = 853;
	uint8_t x751 = 78U;
	int64_t x752 = INT64_MAX;
	volatile int32_t t75 = -15977575;

	t75 = (x749/((x750-x751)<x752));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x757 = INT16_MIN;
	static int32_t x758 = -1;
	int16_t x760 = -78;
	volatile int32_t t76 = 3;

	t76 = (x757/((x758-x759)<x760));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x765 = 95U;
	int8_t x768 = INT8_MIN;
	static volatile int32_t t77 = 28;

	t77 = (x765/((x766-x767)<x768));

	if (t77 != 95) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x769 = 809;
	static int32_t x770 = -95871;
	volatile int8_t x772 = -1;
	volatile int32_t t78 = 8093;

	t78 = (x769/((x770-x771)<x772));

	if (t78 != 809) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x774 = UINT16_MAX;
	uint8_t x776 = UINT8_MAX;
	int32_t t79 = 1;

	t79 = (x773/((x774-x775)<x776));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x787 = UINT8_MAX;
	int8_t x788 = 14;

	t80 = (x785/((x786-x787)<x788));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x797 = INT64_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (x797/((x798-x799)<x800));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x802 = 93U;
	int8_t x803 = 0;
	volatile int32_t t82 = 23338365;

	t82 = (x801/((x802-x803)<x804));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x809 = 16401871LLU;
	int8_t x810 = INT8_MIN;
	int8_t x811 = -8;
	volatile int16_t x812 = 754;
	uint64_t t83 = 1308302675279LLU;

	t83 = (x809/((x810-x811)<x812));

	if (t83 != 16401871LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x817 = 438;
	volatile int32_t x818 = INT32_MIN;
	int32_t x819 = -23499292;
	int8_t x820 = -1;
	volatile int32_t t84 = -3279;

	t84 = (x817/((x818-x819)<x820));

	if (t84 != 438) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x845 = 26652LLU;
	int16_t x846 = 0;
	static int8_t x847 = INT8_MIN;
	volatile uint64_t t85 = 96LLU;

	t85 = (x845/((x846-x847)<x848));

	if (t85 != 26652LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x853 = -222491292327LL;
	int16_t x854 = 883;
	int64_t x855 = 7662257097712LL;
	volatile int64_t t86 = -4172491213042761890LL;

	t86 = (x853/((x854-x855)<x856));

	if (t86 != -222491292327LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x861 = INT16_MIN;
	int64_t x862 = INT64_MIN;
	int8_t x864 = INT8_MIN;
	volatile int32_t t87 = -41758510;

	t87 = (x861/((x862-x863)<x864));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x873 = -1;
	int8_t x874 = INT8_MIN;
	uint8_t x875 = 8U;
	uint8_t x876 = UINT8_MAX;
	volatile int32_t t88 = -269222;

	t88 = (x873/((x874-x875)<x876));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x901 = UINT8_MAX;
	volatile int16_t x902 = INT16_MAX;
	uint64_t x903 = 1642LLU;
	uint32_t x904 = UINT32_MAX;

	t89 = (x901/((x902-x903)<x904));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x905 = INT8_MIN;
	uint16_t x906 = 6U;
	int8_t x907 = INT8_MIN;
	int32_t x908 = INT32_MAX;
	volatile int32_t t90 = -270394534;

	t90 = (x905/((x906-x907)<x908));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x909 = 1U;
	static int64_t x910 = INT64_MIN;
	int16_t x911 = INT16_MIN;
	static int64_t x912 = INT64_MAX;

	t91 = (x909/((x910-x911)<x912));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x913 = INT32_MIN;
	uint8_t x914 = 33U;
	static volatile int16_t x915 = INT16_MIN;
	int32_t x916 = INT32_MAX;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x913/((x914-x915)<x916));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x917 = 414350U;
	int8_t x918 = INT8_MIN;
	uint32_t t93 = 1276075565U;

	t93 = (x917/((x918-x919)<x920));

	if (t93 != 414350U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x925 = INT64_MIN;
	int32_t x926 = INT32_MIN;
	int64_t x927 = 21LL;
	int64_t t94 = INT64_MIN;

	t94 = (x925/((x926-x927)<x928));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x929 = INT64_MIN;
	volatile uint64_t x930 = UINT64_MAX;
	uint16_t x931 = UINT16_MAX;
	int64_t t95 = INT64_MIN;

	t95 = (x929/((x930-x931)<x932));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x934 = 960LL;
	uint32_t x935 = UINT32_MAX;
	static uint64_t x936 = UINT64_MAX;
	volatile int32_t t96 = -143;

	t96 = (x933/((x934-x935)<x936));

	if (t96 != -149) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x949 = INT8_MIN;
	uint8_t x951 = 127U;
	uint8_t x952 = 0U;
	static volatile int32_t t97 = 514;

	t97 = (x949/((x950-x951)<x952));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x953 = INT32_MAX;
	static volatile uint32_t x954 = 230U;
	volatile int32_t x955 = -5893656;
	int16_t x956 = -938;
	static int32_t t98 = INT32_MAX;

	t98 = (x953/((x954-x955)<x956));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x959 = 20713796LL;
	volatile uint32_t t99 = 261323125U;

	t99 = (x957/((x958-x959)<x960));

	if (t99 != 245727U) { NG(); } else { ; }
	
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

