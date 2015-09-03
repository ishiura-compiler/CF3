#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
uint8_t x25 = UINT8_MAX;
static uint64_t x29 = 485259315149LLU;
int8_t x43 = INT8_MAX;
int32_t t6 = -1;
uint16_t x47 = 119U;
volatile int64_t x48 = INT64_MAX;
uint64_t t9 = 2070259422LLU;
int64_t x61 = 10949291LL;
int64_t t11 = -77535375031852443LL;
uint8_t x74 = UINT8_MAX;
int16_t x75 = INT16_MIN;
static volatile int8_t x76 = INT8_MAX;
int32_t x97 = -5041;
int8_t x114 = INT8_MIN;
int32_t x117 = INT32_MAX;
static int32_t t20 = 89;
int16_t x141 = -1;
int64_t x143 = 961802444597LL;
int16_t x144 = 1755;
int32_t t26 = 254;
static int64_t x150 = 19613580LL;
uint32_t x151 = 8082U;
uint64_t x172 = UINT64_MAX;
static volatile int32_t t29 = -659458532;
volatile int16_t x181 = INT16_MIN;
int32_t t30 = 25777;
int64_t x185 = -1LL;
uint64_t x188 = UINT64_MAX;
volatile uint8_t x195 = 72U;
int64_t x196 = INT64_MAX;
volatile int32_t t34 = 5237;
uint16_t x205 = 88U;
uint64_t x206 = 36867272821342LLU;
int16_t x208 = INT16_MAX;
int16_t x229 = INT16_MIN;
int32_t x253 = INT32_MIN;
int32_t x256 = 36745;
int32_t t41 = -235402502;
volatile uint32_t x266 = 3649U;
uint16_t x304 = 12U;
uint64_t t45 = 2287407210635525720LLU;
static int32_t x320 = 1;
static uint32_t x343 = 232716865U;
int64_t x344 = 997646443179150LL;
int64_t x354 = 213718LL;
volatile uint64_t x356 = 3843527416LLU;
int8_t x359 = INT8_MIN;
volatile int32_t x360 = 1868;
volatile int32_t t51 = -8822;
int32_t x373 = INT32_MIN;
static volatile int64_t x374 = INT64_MAX;
uint64_t x376 = 55906LLU;
int32_t t53 = -41916838;
static int64_t x389 = INT64_MIN;
volatile uint64_t x390 = 15190133LLU;
static volatile uint16_t x402 = UINT16_MAX;
int32_t x410 = INT32_MAX;
int16_t x411 = -15119;
int16_t x430 = -51;
static uint16_t x431 = 337U;
volatile uint64_t x448 = 9306385971LLU;
volatile int32_t t64 = 1157533;
volatile int32_t x476 = INT32_MAX;
volatile int32_t x479 = -1;
int32_t t66 = 0;
int32_t x481 = INT32_MAX;
int16_t x483 = -1;
volatile int32_t t68 = -1;
volatile uint8_t x497 = UINT8_MAX;
uint16_t x500 = 363U;
int32_t t69 = 5329202;
int32_t x515 = INT32_MIN;
int64_t x516 = INT64_MAX;
uint32_t x517 = UINT32_MAX;
volatile int32_t x521 = -17552;
uint32_t x523 = 150U;
int32_t t73 = -279;
uint8_t x526 = 3U;
uint8_t x530 = 2U;
volatile int64_t x537 = INT64_MIN;
static int16_t x546 = -1;
volatile int32_t t78 = 107070292;
int16_t x549 = 193;
int8_t x550 = -10;
volatile uint8_t x560 = 14U;
volatile uint16_t x568 = UINT16_MAX;
static uint16_t x581 = 126U;
volatile int64_t x610 = INT64_MIN;
static volatile uint32_t x611 = UINT32_MAX;
uint32_t x619 = UINT32_MAX;
static int16_t x634 = 1;
uint16_t x635 = 8905U;
int64_t x649 = -906LL;
int64_t x651 = INT64_MAX;
volatile int64_t t91 = -185514024LL;
static volatile int32_t t92 = 117;
int64_t x671 = INT64_MIN;
volatile int16_t x672 = INT16_MAX;
uint32_t x688 = 62U;
int32_t x690 = INT32_MIN;
volatile uint16_t x693 = UINT16_MAX;
int8_t x694 = 1;


void f0(void) {
	int8_t x5 = -1;
	volatile int64_t x6 = -1LL;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t0 = 29;

	t0 = (x5%((x6<x7)<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = 8397LLU;
	volatile int64_t x14 = INT64_MAX;
	volatile int64_t x15 = -1LL;
	uint32_t x16 = UINT32_MAX;
	volatile uint64_t t1 = 2961152891705982527LLU;

	t1 = (x13%((x14<x15)<x16));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = 5;
	int64_t x19 = 3850604258LL;
	uint16_t x20 = UINT16_MAX;
	int64_t t2 = 352LL;

	t2 = (x17%((x18<x19)<x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x26 = 94581;
	int16_t x27 = -32;
	volatile int8_t x28 = INT8_MAX;
	volatile int32_t t3 = 1;

	t3 = (x25%((x26<x27)<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x30 = 189LLU;
	int32_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	uint64_t t4 = 804392LLU;

	t4 = (x29%((x30<x31)<x32));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 70U;
	uint16_t x34 = 1U;
	static int8_t x35 = 12;
	uint32_t x36 = 457497U;
	volatile int32_t t5 = -1101;

	t5 = (x33%((x34<x35)<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MAX;
	static int32_t x44 = 15575;

	t6 = (x41%((x42<x43)<x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = -1;
	uint32_t x46 = 22146555U;
	int32_t t7 = -6679258;

	t7 = (x45%((x46<x47)<x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = 31U;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = 6361979190431002LLU;
	static int32_t t8 = -2;

	t8 = (x49%((x50<x51)<x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 89113398047225565LLU;
	static int64_t x54 = -1085382581210LL;
	int16_t x55 = INT16_MIN;
	volatile int16_t x56 = INT16_MAX;

	t9 = (x53%((x54<x55)<x56));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 24U;
	volatile int8_t x58 = 0;
	int16_t x59 = INT16_MIN;
	volatile int16_t x60 = 13168;
	static volatile int32_t t10 = 1615;

	t10 = (x57%((x58<x59)<x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x62 = -932;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 114U;

	t11 = (x61%((x62<x63)<x64));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	int64_t x71 = -1LL;
	uint8_t x72 = UINT8_MAX;
	int32_t t12 = -283;

	t12 = (x69%((x70<x71)<x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = -1LL;
	volatile int64_t t13 = -235358LL;

	t13 = (x73%((x74<x75)<x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x77 = 1;
	static uint32_t x78 = 1138000075U;
	static uint8_t x79 = 0U;
	uint16_t x80 = UINT16_MAX;
	static volatile int32_t t14 = 28057;

	t14 = (x77%((x78<x79)<x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = 0U;
	int8_t x87 = INT8_MAX;
	uint16_t x88 = 29684U;
	int32_t t15 = -42254;

	t15 = (x85%((x86<x87)<x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = -1;
	static int8_t x94 = -1;
	uint16_t x95 = 204U;
	volatile int16_t x96 = INT16_MAX;
	int32_t t16 = -108762;

	t16 = (x93%((x94<x95)<x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x98 = 1;
	uint16_t x99 = 3097U;
	uint32_t x100 = 5954534U;
	int32_t t17 = -818771233;

	t17 = (x97%((x98<x99)<x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 88U;
	volatile int32_t x103 = INT32_MIN;
	volatile uint16_t x104 = 23U;
	static volatile int32_t t18 = -56;

	t18 = (x101%((x102<x103)<x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x113 = INT64_MAX;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = 15;
	volatile int64_t t19 = 348579704490LL;

	t19 = (x113%((x114<x115)<x116));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x118 = INT64_MIN;
	volatile int16_t x119 = -1633;
	volatile uint32_t x120 = UINT32_MAX;

	t20 = (x117%((x118<x119)<x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 3292297LLU;
	uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 10LLU;
	uint16_t x124 = 1U;
	uint64_t t21 = 2851306LLU;

	t21 = (x121%((x122<x123)<x124));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile uint64_t x126 = 10775314LLU;
	int32_t x127 = INT32_MIN;
	volatile uint64_t x128 = 176909332LLU;
	volatile int32_t t22 = 219;

	t22 = (x125%((x126<x127)<x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = 683700;
	volatile uint16_t x130 = UINT16_MAX;
	int8_t x131 = 3;
	int64_t x132 = INT64_MAX;
	static volatile int32_t t23 = -23829;

	t23 = (x129%((x130<x131)<x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 243U;
	volatile uint32_t x136 = 56160U;
	static int32_t t24 = -2;

	t24 = (x133%((x134<x135)<x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x142 = INT8_MIN;
	int32_t t25 = -3;

	t25 = (x141%((x142<x143)<x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MIN;
	static int16_t x147 = -10444;
	uint32_t x148 = UINT32_MAX;

	t26 = (x145%((x146<x147)<x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = -1;
	static int64_t x152 = INT64_MAX;
	volatile int32_t t27 = 282119;

	t27 = (x149%((x150<x151)<x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x157 = 455212743U;
	volatile int8_t x158 = INT8_MAX;
	uint32_t x159 = 34959U;
	static volatile int16_t x160 = 7;
	static uint32_t t28 = 119U;

	t28 = (x157%((x158<x159)<x160));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = 741;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = INT32_MAX;

	t29 = (x169%((x170<x171)<x172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile int8_t x184 = INT8_MAX;

	t30 = (x181%((x182<x183)<x184));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x186 = INT8_MIN;
	int32_t x187 = -1;
	static volatile int64_t t31 = -1038218982003448283LL;

	t31 = (x185%((x186<x187)<x188));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	static uint32_t x191 = 3U;
	uint64_t x192 = 422LLU;
	static int32_t t32 = 10682251;

	t32 = (x189%((x190<x191)<x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 6U;
	uint8_t x194 = 86U;
	int32_t t33 = 2;

	t33 = (x193%((x194<x195)<x196));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MAX;

	t34 = (x197%((x198<x199)<x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = 31;
	static int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;
	int32_t t35 = 1012729;

	t35 = (x201%((x202<x203)<x204));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x207 = -1LL;
	static volatile int32_t t36 = -16036914;

	t36 = (x205%((x206<x207)<x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = UINT16_MAX;
	uint32_t t37 = 31U;

	t37 = (x225%((x226<x227)<x228));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x230 = 3;
	int16_t x231 = 9;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t38 = -930;

	t38 = (x229%((x230<x231)<x232));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x241 = 4U;
	uint8_t x242 = 119U;
	uint32_t x243 = 0U;
	uint16_t x244 = 911U;
	volatile uint32_t t39 = 14U;

	t39 = (x241%((x242<x243)<x244));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x254 = UINT64_MAX;
	volatile int8_t x255 = -1;
	int32_t t40 = 438729674;

	t40 = (x253%((x254<x255)<x256));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x257 = 2;
	int8_t x258 = INT8_MIN;
	volatile int8_t x259 = INT8_MAX;
	int32_t x260 = 23;

	t41 = (x257%((x258<x259)<x260));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x265 = -1LL;
	volatile int64_t x267 = INT64_MIN;
	uint32_t x268 = 23U;
	volatile int64_t t42 = -167961831116686LL;

	t42 = (x265%((x266<x267)<x268));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = 17U;
	volatile uint16_t x287 = 1899U;
	uint8_t x288 = 10U;
	uint64_t t43 = 29991439954LLU;

	t43 = (x285%((x286<x287)<x288));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x293 = -1;
	int32_t x294 = INT32_MIN;
	volatile int16_t x295 = INT16_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t44 = -161;

	t44 = (x293%((x294<x295)<x296));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x301 = UINT64_MAX;
	volatile int8_t x302 = INT8_MIN;
	uint16_t x303 = 139U;

	t45 = (x301%((x302<x303)<x304));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x317 = 5565;
	int16_t x318 = 70;
	static int16_t x319 = -2;
	static volatile int32_t t46 = 380532;

	t46 = (x317%((x318<x319)<x320));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 8994U;
	uint32_t x328 = 1904579793U;
	static volatile int64_t t47 = 6629LL;

	t47 = (x325%((x326<x327)<x328));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x341 = 1;
	volatile int32_t x342 = INT32_MIN;
	static int32_t t48 = -67;

	t48 = (x341%((x342<x343)<x344));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x353 = 110U;
	int16_t x355 = -4089;
	int32_t t49 = -1;

	t49 = (x353%((x354<x355)<x356));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x357 = 10329632855LL;
	volatile int32_t x358 = 883253355;
	int64_t t50 = 3312134963503978LL;

	t50 = (x357%((x358<x359)<x360));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x361 = 6718;
	volatile int32_t x362 = INT32_MIN;
	int16_t x363 = 0;
	int64_t x364 = 481396337541556382LL;

	t51 = (x361%((x362<x363)<x364));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x375 = INT32_MAX;
	static volatile int32_t t52 = -3095;

	t52 = (x373%((x374<x375)<x376));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x377 = -28;
	int32_t x378 = -2;
	volatile uint16_t x379 = 14167U;
	static uint16_t x380 = 5701U;

	t53 = (x377%((x378<x379)<x380));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x381 = 43U;
	volatile int64_t x382 = -141188066780LL;
	static int8_t x383 = -24;
	volatile uint8_t x384 = 84U;
	static int32_t t54 = 5907292;

	t54 = (x381%((x382<x383)<x384));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x391 = INT32_MAX;
	static uint16_t x392 = 7U;
	volatile int64_t t55 = -2692418076308471940LL;

	t55 = (x389%((x390<x391)<x392));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x397 = 30852528156291172LLU;
	int16_t x398 = -1;
	uint64_t x399 = 64211778LLU;
	int32_t x400 = 9;
	volatile uint64_t t56 = 437359LLU;

	t56 = (x397%((x398<x399)<x400));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x401 = INT32_MIN;
	volatile int8_t x403 = INT8_MAX;
	uint32_t x404 = 15690691U;
	volatile int32_t t57 = -1;

	t57 = (x401%((x402<x403)<x404));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x409 = 38LL;
	volatile uint32_t x412 = 5U;
	volatile int64_t t58 = 36712694LL;

	t58 = (x409%((x410<x411)<x412));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x421 = -1;
	uint64_t x422 = 9LLU;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = 2358U;
	volatile int32_t t59 = -1449;

	t59 = (x421%((x422<x423)<x424));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x429 = -1;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t60 = -11339;

	t60 = (x429%((x430<x431)<x432));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x437 = INT64_MAX;
	volatile int32_t x438 = INT32_MAX;
	uint16_t x439 = 29325U;
	uint8_t x440 = UINT8_MAX;
	static int64_t t61 = -108295150609831496LL;

	t61 = (x437%((x438<x439)<x440));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x441 = UINT32_MAX;
	int16_t x442 = INT16_MIN;
	static int32_t x443 = INT32_MIN;
	static uint64_t x444 = 133001LLU;
	uint32_t t62 = 2273567U;

	t62 = (x441%((x442<x443)<x444));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x445 = -1LL;
	uint32_t x446 = 769029U;
	int64_t x447 = INT64_MIN;
	volatile int64_t t63 = 63400LL;

	t63 = (x445%((x446<x447)<x448));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x469 = INT32_MIN;
	int64_t x470 = -8876LL;
	uint64_t x471 = UINT64_MAX;
	uint8_t x472 = UINT8_MAX;

	t64 = (x469%((x470<x471)<x472));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x473 = 63184LL;
	uint64_t x474 = UINT64_MAX;
	int8_t x475 = 0;
	static volatile int64_t t65 = 0LL;

	t65 = (x473%((x474<x475)<x476));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MIN;
	int8_t x480 = INT8_MAX;

	t66 = (x477%((x478<x479)<x480));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x482 = 23U;
	int16_t x484 = INT16_MAX;
	int32_t t67 = 114737278;

	t67 = (x481%((x482<x483)<x484));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x493 = INT32_MAX;
	uint32_t x494 = UINT32_MAX;
	uint8_t x495 = UINT8_MAX;
	uint32_t x496 = 91U;

	t68 = (x493%((x494<x495)<x496));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x498 = INT64_MAX;
	int32_t x499 = INT32_MIN;

	t69 = (x497%((x498<x499)<x500));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x509 = -150000222;
	int8_t x510 = INT8_MIN;
	int64_t x511 = INT64_MAX;
	uint64_t x512 = UINT64_MAX;
	int32_t t70 = -11112;

	t70 = (x509%((x510<x511)<x512));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x513 = -1;
	int8_t x514 = INT8_MIN;
	int32_t t71 = 174131579;

	t71 = (x513%((x514<x515)<x516));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x518 = 7979308026035LLU;
	int8_t x519 = INT8_MAX;
	int16_t x520 = 1;
	uint32_t t72 = 23416U;

	t72 = (x517%((x518<x519)<x520));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x522 = 12916561U;
	int32_t x524 = 3;

	t73 = (x521%((x522<x523)<x524));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x525 = 1135353;
	uint16_t x527 = UINT16_MAX;
	int8_t x528 = INT8_MAX;
	int32_t t74 = -1;

	t74 = (x525%((x526<x527)<x528));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x529 = -8;
	int8_t x531 = INT8_MIN;
	static uint8_t x532 = UINT8_MAX;
	int32_t t75 = -953828989;

	t75 = (x529%((x530<x531)<x532));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x533 = -1LL;
	int32_t x534 = -1;
	int32_t x535 = INT32_MAX;
	uint64_t x536 = 213107231164110LLU;
	volatile int64_t t76 = 113332203542138LL;

	t76 = (x533%((x534<x535)<x536));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x538 = -1;
	volatile uint8_t x539 = UINT8_MAX;
	uint32_t x540 = 19U;
	int64_t t77 = -30LL;

	t77 = (x537%((x538<x539)<x540));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x545 = 8;
	int16_t x547 = -87;
	static volatile uint8_t x548 = 1U;

	t78 = (x545%((x546<x547)<x548));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = 6295;
	volatile int32_t t79 = 2;

	t79 = (x549%((x550<x551)<x552));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x557 = -1;
	uint32_t x558 = 36U;
	volatile int32_t x559 = -314;
	volatile int32_t t80 = 257542641;

	t80 = (x557%((x558<x559)<x560));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x565 = 6176044730280587722LLU;
	volatile uint8_t x566 = UINT8_MAX;
	volatile uint16_t x567 = 17U;
	uint64_t t81 = 7818735082LLU;

	t81 = (x565%((x566<x567)<x568));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x573 = 449811570U;
	int32_t x574 = 10336857;
	static uint8_t x575 = 2U;
	uint64_t x576 = 2141832191LLU;
	uint32_t t82 = 1048160U;

	t82 = (x573%((x574<x575)<x576));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x577 = 28676U;
	int8_t x578 = -1;
	int8_t x579 = INT8_MIN;
	int32_t x580 = 7684;
	int32_t t83 = -1;

	t83 = (x577%((x578<x579)<x580));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x582 = UINT16_MAX;
	volatile int16_t x583 = -1;
	int16_t x584 = INT16_MAX;
	static volatile int32_t t84 = 58662061;

	t84 = (x581%((x582<x583)<x584));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x609 = INT16_MAX;
	int64_t x612 = INT64_MAX;
	int32_t t85 = 3;

	t85 = (x609%((x610<x611)<x612));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x613 = 990U;
	uint16_t x614 = 222U;
	volatile int8_t x615 = -6;
	int32_t x616 = INT32_MAX;
	static volatile int32_t t86 = -26741;

	t86 = (x613%((x614<x615)<x616));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x617 = 4483516974LL;
	static uint32_t x618 = 46732U;
	int32_t x620 = INT32_MAX;
	volatile int64_t t87 = -107170121383LL;

	t87 = (x617%((x618<x619)<x620));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x629 = 0;
	uint32_t x630 = UINT32_MAX;
	static volatile int8_t x631 = -16;
	uint16_t x632 = 49U;
	int32_t t88 = 16668;

	t88 = (x629%((x630<x631)<x632));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x633 = INT8_MIN;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t89 = 1534423;

	t89 = (x633%((x634<x635)<x636));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x645 = 35853U;
	volatile int8_t x646 = -1;
	static uint16_t x647 = 186U;
	static volatile uint32_t x648 = UINT32_MAX;
	static uint32_t t90 = 39005U;

	t90 = (x645%((x646<x647)<x648));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x650 = INT8_MIN;
	int64_t x652 = INT64_MAX;

	t91 = (x649%((x650<x651)<x652));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x653 = INT16_MIN;
	int8_t x654 = INT8_MIN;
	int64_t x655 = INT64_MIN;
	int16_t x656 = 93;

	t92 = (x653%((x654<x655)<x656));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x657 = 37U;
	uint8_t x658 = 123U;
	uint64_t x659 = 9344414679LLU;
	int8_t x660 = INT8_MAX;
	volatile int32_t t93 = 15220;

	t93 = (x657%((x658<x659)<x660));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x669 = 4740U;
	volatile int32_t x670 = INT32_MAX;
	volatile int32_t t94 = -7523764;

	t94 = (x669%((x670<x671)<x672));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x673 = 56578LLU;
	uint32_t x674 = 7U;
	static int32_t x675 = -6776;
	int64_t x676 = 4553811076448LL;
	static volatile uint64_t t95 = 8870079775589742LLU;

	t95 = (x673%((x674<x675)<x676));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x677 = 3U;
	int16_t x678 = INT16_MIN;
	static volatile int32_t x679 = 0;
	uint64_t x680 = 8988LLU;
	volatile int32_t t96 = 0;

	t96 = (x677%((x678<x679)<x680));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x685 = 19U;
	int32_t x686 = -1;
	uint16_t x687 = UINT16_MAX;
	int32_t t97 = -853;

	t97 = (x685%((x686<x687)<x688));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x689 = 0;
	int8_t x691 = -1;
	uint32_t x692 = 371U;
	int32_t t98 = -436655;

	t98 = (x689%((x690<x691)<x692));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x695 = 2303U;
	int16_t x696 = 4004;
	volatile int32_t t99 = 28;

	t99 = (x693%((x694<x695)<x696));

	if (t99 != 0) { NG(); } else { ; }
	
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

