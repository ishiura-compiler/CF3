#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x18 = UINT16_MAX;
static volatile int64_t x19 = INT64_MIN;
uint16_t x24 = UINT16_MAX;
volatile int64_t t2 = -1128879LL;
volatile uint64_t t4 = 27982LLU;
int8_t x34 = INT8_MAX;
volatile int16_t x37 = 0;
int8_t x38 = INT8_MIN;
int8_t x40 = INT8_MIN;
int32_t t6 = -2175;
int8_t x41 = 1;
int16_t x47 = INT16_MIN;
volatile int16_t x74 = 0;
volatile uint16_t x81 = UINT16_MAX;
int64_t x82 = 158282706LL;
volatile int32_t x84 = -18720372;
int16_t x85 = INT16_MIN;
uint64_t x88 = 259801820141LLU;
static uint64_t x89 = UINT64_MAX;
volatile uint16_t x90 = 658U;
int8_t x94 = INT8_MIN;
int64_t x98 = 297534082164666LL;
int8_t x105 = INT8_MIN;
volatile int64_t x110 = 6599323432124325LL;
volatile uint32_t x113 = UINT32_MAX;
volatile int64_t t20 = 52963LL;
static uint8_t x123 = 72U;
uint32_t x126 = 1828449U;
int8_t x128 = INT8_MAX;
uint16_t x134 = 1U;
volatile int16_t x139 = INT16_MIN;
int32_t x151 = 58;
volatile int8_t x158 = -1;
int64_t x159 = INT64_MAX;
int64_t x160 = INT64_MIN;
volatile uint32_t t28 = 2671521U;
static uint64_t x171 = 819446LLU;
uint32_t x172 = 63U;
int8_t x202 = -19;
int64_t x203 = -1LL;
int64_t t31 = -79778997810054LL;
int8_t x218 = 4;
static volatile int32_t x220 = INT32_MIN;
uint64_t x235 = 15806LLU;
static uint8_t x236 = UINT8_MAX;
static volatile int64_t t36 = 5776913865089754LL;
int16_t x254 = INT16_MIN;
static volatile uint32_t t38 = UINT32_MAX;
volatile uint8_t x257 = 1U;
uint64_t x260 = 1509LLU;
uint64_t t39 = 3945936LLU;
volatile uint8_t x273 = 123U;
volatile int64_t t41 = -11156444290LL;
int64_t x277 = -1LL;
volatile int64_t t42 = -26010082353444808LL;
static int64_t x293 = -1682223288499LL;
static volatile uint32_t x294 = UINT32_MAX;
int8_t x296 = INT8_MIN;
static uint32_t t45 = 12749U;
static int16_t x307 = -3;
int32_t x314 = INT32_MAX;
int8_t x321 = INT8_MAX;
int64_t x322 = INT64_MAX;
volatile int64_t x338 = INT64_MIN;
int32_t x342 = 27;
uint8_t x344 = 42U;
static volatile int64_t t55 = 564856664235LL;
int64_t x360 = -2721337LL;
uint64_t t57 = 3300LLU;
static uint16_t x366 = 1U;
uint16_t x369 = 0U;
uint64_t x373 = 1329641LLU;
int64_t x374 = INT64_MIN;
uint64_t t61 = 125014LLU;
int16_t x381 = INT16_MIN;
uint32_t x382 = 72077U;
volatile uint32_t t63 = 136244573U;
int64_t t65 = 17903598256184169LL;
volatile int32_t x407 = INT32_MIN;
volatile uint8_t x408 = 13U;
static int8_t x437 = 12;
uint64_t x447 = UINT64_MAX;
uint16_t x449 = 6658U;
uint8_t x452 = 5U;
uint64_t x455 = 15LLU;
uint64_t t73 = 713LLU;
static int64_t x462 = INT64_MAX;
int32_t x467 = INT32_MAX;
volatile uint32_t x482 = 1562U;
static int32_t x484 = 5;
volatile int64_t x494 = 12486736LL;
uint64_t x497 = UINT64_MAX;
uint16_t x505 = UINT16_MAX;
uint32_t x506 = 597077853U;
int64_t x507 = -65954148229916281LL;
volatile uint64_t t81 = 909324LLU;
int8_t x518 = INT8_MIN;
int8_t x519 = -36;
volatile int16_t x531 = -1;
uint16_t x532 = UINT16_MAX;
static volatile int8_t x554 = 60;
static uint8_t x556 = 53U;
volatile uint64_t x564 = UINT64_MAX;
int16_t x570 = INT16_MAX;
int64_t x572 = -4940569632LL;
int16_t x574 = INT16_MIN;
static int16_t x576 = INT16_MAX;
int32_t x579 = 1;
int16_t x582 = 15;
int32_t x585 = INT32_MAX;
static uint8_t x586 = UINT8_MAX;
int32_t t95 = INT32_MAX;
int8_t x614 = INT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = INT64_MIN;
	static volatile uint64_t x3 = 6324303LLU;
	static int64_t x4 = -1LL;
	volatile uint64_t t0 = 2157685LLU;

	t0 = (x1+(x2%(x3%x4)));

	if (t0 != 2148033231LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = -1;
	int16_t x20 = 135;
	volatile int64_t t1 = 4920467982212LL;

	t1 = (x17+(x18%(x19%x20)));

	if (t1 != 26LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x21 = -722;
	int8_t x22 = 10;
	int64_t x23 = 63550975LL;

	t2 = (x21+(x22%(x23%x24)));

	if (t2 != -712LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -1LL;
	int64_t x26 = INT64_MIN;
	static int32_t x27 = 682926392;
	int64_t x28 = INT64_MIN;
	static volatile int64_t t3 = -44028351658070807LL;

	t3 = (x25+(x26%(x27%x28)));

	if (t3 != -403129073LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MAX;
	static int16_t x30 = 14;
	int8_t x31 = INT8_MAX;
	uint64_t x32 = 4357064180966084829LLU;

	t4 = (x29+(x30%(x31%x32)));

	if (t4 != 32781LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 455;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t5 = -173614781263404018LL;

	t5 = (x33+(x34%(x35%x36)));

	if (t5 != 455LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x39 = -28;

	t6 = (x37+(x38%(x39%x40)));

	if (t6 != -16) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = INT8_MIN;
	int32_t x43 = -225796529;
	int16_t x44 = -5956;
	static int32_t t7 = -1;

	t7 = (x41+(x42%(x43%x44)));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -45;
	volatile uint16_t x46 = 97U;
	volatile int64_t x48 = INT64_MIN;
	volatile int64_t t8 = -347LL;

	t8 = (x45+(x46%(x47%x48)));

	if (t8 != 52LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = -1;
	int32_t x62 = -98056;
	int64_t x63 = INT64_MIN;
	int32_t x64 = -54;
	int64_t t9 = 0LL;

	t9 = (x61+(x62%(x63%x64)));

	if (t9 != -11LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MIN;
	static int32_t x66 = -1;
	static volatile int64_t x67 = INT64_MAX;
	static uint32_t x68 = 2647U;
	int64_t t10 = -20795556LL;

	t10 = (x65+(x66%(x67%x68)));

	if (t10 != -2147483649LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = INT32_MAX;
	volatile int32_t x75 = INT32_MAX;
	static int16_t x76 = 10;
	int32_t t11 = INT32_MAX;

	t11 = (x73+(x74%(x75%x76)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x83 = UINT16_MAX;
	int64_t t12 = 24700LL;

	t12 = (x81+(x82%(x83%x84)));

	if (t12 != 81216LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = -1;
	uint64_t t13 = 281317746241LLU;

	t13 = (x85+(x86%(x87%x88)));

	if (t13 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x91 = -1;
	int32_t x92 = 541;
	static uint64_t t14 = UINT64_MAX;

	t14 = (x89+(x90%(x91%x92)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x93 = -1130278449088LL;
	volatile int8_t x95 = INT8_MAX;
	int64_t x96 = INT64_MAX;
	volatile int64_t t15 = 1LL;

	t15 = (x93+(x94%(x95%x96)));

	if (t15 != -1130278449089LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = INT8_MAX;
	static volatile int32_t x99 = -1;
	int16_t x100 = INT16_MIN;
	int64_t t16 = 903027794LL;

	t16 = (x97+(x98%(x99%x100)));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = -4429251299166537LL;
	uint16_t x103 = 1U;
	static int8_t x104 = INT8_MIN;
	volatile int64_t t17 = -26396938539547309LL;

	t17 = (x101+(x102%(x103%x104)));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x106 = 2U;
	uint16_t x107 = 1095U;
	uint8_t x108 = UINT8_MAX;
	int32_t t18 = -22;

	t18 = (x105+(x106%(x107%x108)));

	if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x109 = 9302037664742LLU;
	uint64_t x111 = 3057LLU;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t19 = 176188908858099LLU;

	t19 = (x109+(x110%(x111%x112)));

	if (t19 != 9302037665834LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -14;
	static int64_t x116 = -73309LL;

	t20 = (x113+(x114%(x115%x116)));

	if (t20 != 4294967296LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = INT64_MIN;
	uint32_t x124 = 51U;
	int64_t t21 = 231985593LL;

	t21 = (x121+(x122%(x123%x124)));

	if (t21 != 119LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = UINT32_MAX;
	static int32_t x127 = -1;
	static volatile uint32_t t22 = 91U;

	t22 = (x125+(x126%(x127%x128)));

	if (t22 != 1828448U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = 1670803U;
	int16_t x135 = 80;
	int64_t x136 = -20318LL;
	int64_t t23 = 4201141607122998LL;

	t23 = (x133+(x134%(x135%x136)));

	if (t23 != 1670804LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x137 = 23993U;
	int16_t x138 = INT16_MIN;
	int16_t x140 = -30;
	static int32_t t24 = 1541;

	t24 = (x137+(x138%(x139%x140)));

	if (t24 != 23993) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = -1LL;
	volatile int16_t x142 = INT16_MAX;
	volatile int8_t x143 = INT8_MIN;
	uint8_t x144 = 31U;
	int64_t t25 = -1564771118LL;

	t25 = (x141+(x142%(x143%x144)));

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x149 = 3601947;
	int16_t x150 = -476;
	uint32_t x152 = 8U;
	uint32_t t26 = 219U;

	t26 = (x149+(x150%(x151%x152)));

	if (t26 != 3601947U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x157 = -2154LL;
	volatile int64_t t27 = 3370LL;

	t27 = (x157+(x158%(x159%x160)));

	if (t27 != -2155LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = -1;
	volatile int16_t x167 = 1456;
	uint32_t x168 = 4013618U;

	t28 = (x165+(x166%(x167%x168)));

	if (t28 != 2147483903U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = UINT64_MAX;
	int64_t x170 = INT64_MAX;
	volatile uint64_t t29 = 364548592LLU;

	t29 = (x169+(x170%(x171%x172)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = -59;
	int16_t x186 = -9123;
	int32_t x187 = -1;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t30 = 6;

	t30 = (x185+(x186%(x187%x188)));

	if (t30 != -59) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x201 = 32297U;
	int64_t x204 = 99473LL;

	t31 = (x201+(x202%(x203%x204)));

	if (t31 != 32297LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x213 = INT32_MIN;
	uint16_t x214 = 0U;
	int64_t x215 = 247045728304169LL;
	int32_t x216 = 1919;
	static volatile int64_t t32 = 257209975246LL;

	t32 = (x213+(x214%(x215%x216)));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x217 = INT64_MIN;
	int64_t x219 = 30218794845LL;
	int64_t t33 = -3659783262LL;

	t33 = (x217+(x218%(x219%x220)));

	if (t33 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = 1636865216U;
	int8_t x226 = INT8_MIN;
	volatile int64_t x227 = -1LL;
	int8_t x228 = INT8_MAX;
	int64_t t34 = -37882567690807503LL;

	t34 = (x225+(x226%(x227%x228)));

	if (t34 != 1636865216LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x233 = INT32_MAX;
	uint64_t x234 = 836053LLU;
	static uint64_t t35 = 261154225LLU;

	t35 = (x233+(x234%(x235%x236)));

	if (t35 != 2147483870LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x237 = UINT16_MAX;
	int8_t x238 = 1;
	int64_t x239 = INT64_MAX;
	static volatile int32_t x240 = -291;

	t36 = (x237+(x238%(x239%x240)));

	if (t36 != 65536LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x241 = 0U;
	static uint32_t x242 = 11227U;
	int16_t x243 = -1;
	int8_t x244 = INT8_MAX;
	uint32_t t37 = 153U;

	t37 = (x241+(x242%(x243%x244)));

	if (t37 != 11227U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x253 = UINT32_MAX;
	int32_t x255 = INT32_MAX;
	uint16_t x256 = 33U;

	t38 = (x253+(x254%(x255%x256)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x258 = 100LLU;
	volatile uint64_t x259 = 29164533001LLU;

	t39 = (x257+(x258%(x259%x260)));

	if (t39 != 101LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x265 = INT8_MAX;
	uint8_t x266 = UINT8_MAX;
	volatile int16_t x267 = 16;
	uint32_t x268 = 342601545U;
	volatile uint32_t t40 = 6669U;

	t40 = (x265+(x266%(x267%x268)));

	if (t40 != 142U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x274 = -1LL;
	static int16_t x275 = 3;
	uint32_t x276 = 45U;

	t41 = (x273+(x274%(x275%x276)));

	if (t41 != 122LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x278 = INT8_MIN;
	int16_t x279 = -1;
	static volatile uint16_t x280 = 1213U;

	t42 = (x277+(x278%(x279%x280)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x281 = INT8_MIN;
	static int8_t x282 = -1;
	int16_t x283 = -1;
	int16_t x284 = 28;
	static volatile int32_t t43 = -229240;

	t43 = (x281+(x282%(x283%x284)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x295 = INT64_MAX;
	int64_t t44 = 622LL;

	t44 = (x293+(x294%(x295%x296)));

	if (t44 != -1682223288484LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x297 = 16523709U;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 31U;
	uint32_t x300 = 4U;

	t45 = (x297+(x298%(x299%x300)));

	if (t45 != 16523711U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x301 = 1U;
	volatile int32_t x302 = INT32_MAX;
	static int16_t x303 = -5182;
	volatile uint32_t x304 = 366774U;
	volatile uint32_t t46 = 549615U;

	t46 = (x301+(x302%(x303%x304)));

	if (t46 != 30494U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x305 = 26U;
	volatile int64_t x306 = -112535337128970604LL;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t47 = 11209LLU;

	t47 = (x305+(x306%(x307%x308)));

	if (t47 != 18334208736580581038LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x309 = 9405LL;
	uint8_t x310 = 60U;
	int8_t x311 = INT8_MAX;
	static int16_t x312 = INT16_MIN;
	int64_t t48 = 1950460480839429LL;

	t48 = (x309+(x310%(x311%x312)));

	if (t48 != 9465LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x313 = 29586U;
	int16_t x315 = 2;
	int8_t x316 = INT8_MIN;
	volatile int32_t t49 = -1;

	t49 = (x313+(x314%(x315%x316)));

	if (t49 != 29587) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x317 = 1689293381LLU;
	uint8_t x318 = 28U;
	uint64_t x319 = 30237939399122622LLU;
	int8_t x320 = INT8_MIN;
	uint64_t t50 = 286879835895712LLU;

	t50 = (x317+(x318%(x319%x320)));

	if (t50 != 1689293409LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x323 = INT8_MIN;
	static uint32_t x324 = 11852374U;
	volatile int64_t t51 = -63385446831772379LL;

	t51 = (x321+(x322%(x323%x324)));

	if (t51 != 1957154LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x333 = -813642169LL;
	int8_t x334 = INT8_MIN;
	volatile int16_t x335 = -1;
	uint16_t x336 = 88U;
	volatile int64_t t52 = -816609970888LL;

	t52 = (x333+(x334%(x335%x336)));

	if (t52 != -813642169LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x337 = INT8_MIN;
	int64_t x339 = -1LL;
	int64_t x340 = INT64_MIN;
	volatile int64_t t53 = -918148448711486461LL;

	t53 = (x337+(x338%(x339%x340)));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x341 = -1;
	int32_t x343 = -1;
	volatile int32_t t54 = 24607;

	t54 = (x341+(x342%(x343%x344)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x345 = INT64_MIN;
	uint8_t x346 = 69U;
	int64_t x347 = -6806820LL;
	static int32_t x348 = 6859;

	t55 = (x345+(x346%(x347%x348)));

	if (t55 != -9223372036854775739LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x349 = UINT8_MAX;
	int32_t x350 = -1;
	int8_t x351 = -14;
	int64_t x352 = INT64_MAX;
	volatile int64_t t56 = 4735167049548LL;

	t56 = (x349+(x350%(x351%x352)));

	if (t56 != 254LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x357 = -293767500LL;
	uint64_t x358 = 373323478LLU;
	volatile uint64_t x359 = 1577313049601LLU;

	t57 = (x357+(x358%(x359%x360)));

	if (t57 != 79555978LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x362 = 1U;
	uint64_t x363 = 17850711712LLU;
	int16_t x364 = INT16_MAX;
	static uint64_t t58 = 472792262LLU;

	t58 = (x361+(x362%(x363%x364)));

	if (t58 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x365 = 0U;
	uint64_t x367 = 439001393787LLU;
	volatile int32_t x368 = 360;
	volatile uint64_t t59 = 524LLU;

	t59 = (x365+(x366%(x367%x368)));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x370 = INT32_MIN;
	uint8_t x371 = 15U;
	int32_t x372 = INT32_MIN;
	volatile int32_t t60 = -343079166;

	t60 = (x369+(x370%(x371%x372)));

	if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x375 = -1;
	uint8_t x376 = UINT8_MAX;

	t61 = (x373+(x374%(x375%x376)));

	if (t61 != 1329641LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x383 = 37500855269850LL;
	uint64_t x384 = 350183637LLU;
	uint64_t t62 = 97852307631906LLU;

	t62 = (x381+(x382%(x383%x384)));

	if (t62 != 39309LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x385 = -63;
	uint32_t x386 = 0U;
	int8_t x387 = INT8_MIN;
	volatile uint16_t x388 = UINT16_MAX;

	t63 = (x385+(x386%(x387%x388)));

	if (t63 != 4294967233U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x389 = 13503LLU;
	uint16_t x390 = 17565U;
	static int32_t x391 = -1;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t64 = 7LLU;

	t64 = (x389+(x390%(x391%x392)));

	if (t64 != 13503LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x393 = UINT32_MAX;
	static int64_t x394 = -6LL;
	int16_t x395 = INT16_MAX;
	volatile int64_t x396 = -25122071207645LL;

	t65 = (x393+(x394%(x395%x396)));

	if (t65 != 4294967289LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x405 = UINT16_MAX;
	volatile int16_t x406 = -838;
	volatile int32_t t66 = 627;

	t66 = (x405+(x406%(x407%x408)));

	if (t66 != 65533) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x409 = INT64_MIN;
	uint16_t x410 = UINT16_MAX;
	volatile uint8_t x411 = 1U;
	volatile uint32_t x412 = 22685343U;
	int64_t t67 = INT64_MIN;

	t67 = (x409+(x410%(x411%x412)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x413 = INT32_MAX;
	static volatile int64_t x414 = INT64_MIN;
	static int16_t x415 = INT16_MIN;
	volatile uint64_t x416 = 32569075368396558LLU;
	uint64_t t68 = 4157273185LLU;

	t68 = (x413+(x414%(x415%x416)));

	if (t68 != 3406360340401875LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	static int64_t x431 = -1LL;
	int32_t x432 = INT32_MAX;
	static int64_t t69 = -9388035LL;

	t69 = (x429+(x430%(x431%x432)));

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x438 = 52713U;
	int16_t x439 = 26;
	int32_t x440 = INT32_MIN;
	uint32_t t70 = 296U;

	t70 = (x437+(x438%(x439%x440)));

	if (t70 != 23U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x445 = -1;
	static int64_t x446 = INT64_MIN;
	volatile int64_t x448 = -1110LL;
	static uint64_t t71 = 489875268549540930LLU;

	t71 = (x445+(x446%(x447%x448)));

	if (t71 != 448LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MAX;
	int64_t t72 = 92267090445944534LL;

	t72 = (x449+(x450%(x451%x452)));

	if (t72 != 6658LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x453 = 0;
	int8_t x454 = -1;
	static int64_t x456 = 22564LL;

	t73 = (x453+(x454%(x455%x456)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x461 = INT16_MIN;
	uint8_t x463 = 13U;
	int64_t x464 = -3341931LL;
	volatile int64_t t74 = 31773675385644649LL;

	t74 = (x461+(x462%(x463%x464)));

	if (t74 != -32761LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x465 = 4LLU;
	int64_t x466 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	uint64_t t75 = 0LLU;

	t75 = (x465+(x466%(x467%x468)));

	if (t75 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x473 = 0LL;
	int8_t x474 = INT8_MAX;
	static volatile uint32_t x475 = 13466163U;
	static int16_t x476 = INT16_MIN;
	int64_t t76 = -176220268213165217LL;

	t76 = (x473+(x474%(x475%x476)));

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x481 = INT16_MIN;
	uint64_t x483 = 8070656472331141LLU;
	uint64_t t77 = 460868821850LLU;

	t77 = (x481+(x482%(x483%x484)));

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x489 = INT16_MIN;
	volatile int32_t x490 = INT32_MAX;
	int16_t x491 = INT16_MAX;
	static int8_t x492 = -62;
	int32_t t78 = 14663;

	t78 = (x489+(x490%(x491%x492)));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x493 = 28U;
	int16_t x495 = INT16_MIN;
	uint32_t x496 = 92676181U;
	volatile int64_t t79 = -1656387673689375782LL;

	t79 = (x493+(x494%(x495%x496)));

	if (t79 != 12486764LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x498 = -380861367088266325LL;
	int64_t x499 = INT64_MIN;
	volatile uint64_t x500 = 10857LLU;
	volatile uint64_t t80 = 59LLU;

	t80 = (x497+(x498%(x499%x500)));

	if (t80 != 4394LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x508 = UINT64_MAX;

	t81 = (x505+(x506%(x507%x508)));

	if (t81 != 597143388LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x517 = UINT8_MAX;
	int16_t x520 = -32;
	volatile int32_t t82 = -56681;

	t82 = (x517+(x518%(x519%x520)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x521 = INT8_MIN;
	uint32_t x522 = 14393989U;
	static uint16_t x523 = UINT16_MAX;
	uint64_t x524 = UINT64_MAX;
	uint64_t t83 = 29222002212155636LLU;

	t83 = (x521+(x522%(x523%x524)));

	if (t83 != 41696LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x525 = UINT64_MAX;
	int8_t x526 = -21;
	static int64_t x527 = 776266141310LL;
	uint32_t x528 = UINT32_MAX;
	static volatile uint64_t t84 = 289LLU;

	t84 = (x525+(x526%(x527%x528)));

	if (t84 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x529 = INT64_MIN;
	int32_t x530 = -1;
	int64_t t85 = INT64_MIN;

	t85 = (x529+(x530%(x531%x532)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x537 = 245550110271LLU;
	uint8_t x538 = 0U;
	int16_t x539 = INT16_MAX;
	static int64_t x540 = INT64_MIN;
	uint64_t t86 = 55LLU;

	t86 = (x537+(x538%(x539%x540)));

	if (t86 != 245550110271LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x541 = UINT8_MAX;
	static volatile int64_t x542 = -7687LL;
	int32_t x543 = INT32_MIN;
	int64_t x544 = -2723024LL;
	static int64_t t87 = 16785611038LL;

	t87 = (x541+(x542%(x543%x544)));

	if (t87 != -7432LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x553 = -170880539203451LL;
	uint8_t x555 = UINT8_MAX;
	int64_t t88 = -30104929LL;

	t88 = (x553+(x554%(x555%x556)));

	if (t88 != -170880539203434LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x557 = 300714U;
	volatile int16_t x558 = -1;
	uint32_t x559 = 175143U;
	int8_t x560 = 7;
	volatile uint32_t t89 = 1U;

	t89 = (x557+(x558%(x559%x560)));

	if (t89 != 300714U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x561 = INT32_MAX;
	uint64_t x562 = 67613733577228LLU;
	int8_t x563 = INT8_MIN;
	volatile uint64_t t90 = 85787717107LLU;

	t90 = (x561+(x562%(x563%x564)));

	if (t90 != 67615881060875LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x569 = 8U;
	static uint16_t x571 = UINT16_MAX;
	static volatile int64_t t91 = -34623609951967547LL;

	t91 = (x569+(x570%(x571%x572)));

	if (t91 != 32775LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x573 = 36U;
	int8_t x575 = -1;
	volatile int32_t t92 = -2224422;

	t92 = (x573+(x574%(x575%x576)));

	if (t92 != 36) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x577 = -1;
	int16_t x578 = INT16_MIN;
	int8_t x580 = INT8_MIN;
	volatile int32_t t93 = -40842721;

	t93 = (x577+(x578%(x579%x580)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x581 = 99U;
	int32_t x583 = INT32_MAX;
	volatile int16_t x584 = INT16_MIN;
	static volatile int32_t t94 = -219820;

	t94 = (x581+(x582%(x583%x584)));

	if (t94 != 114) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x587 = 7675;
	uint16_t x588 = 7U;

	t95 = (x585+(x586%(x587%x588)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x597 = 1U;
	int8_t x598 = -1;
	uint64_t x599 = 1LLU;
	static volatile int16_t x600 = INT16_MIN;
	static volatile uint64_t t96 = 15LLU;

	t96 = (x597+(x598%(x599%x600)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x605 = INT16_MAX;
	static uint16_t x606 = UINT16_MAX;
	uint64_t x607 = UINT64_MAX;
	int32_t x608 = INT32_MIN;
	uint64_t t97 = 15522333LLU;

	t97 = (x605+(x606%(x607%x608)));

	if (t97 != 98302LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x609 = INT16_MIN;
	static int8_t x610 = INT8_MAX;
	static int8_t x611 = INT8_MIN;
	int16_t x612 = INT16_MIN;
	volatile int32_t t98 = -3494320;

	t98 = (x609+(x610%(x611%x612)));

	if (t98 != -32641) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x613 = INT32_MIN;
	volatile int64_t x615 = 685060003904748990LL;
	int64_t x616 = INT64_MIN;
	int64_t t99 = -976LL;

	t99 = (x613+(x614%(x615%x616)));

	if (t99 != -2147483521LL) { NG(); } else { ; }
	
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

