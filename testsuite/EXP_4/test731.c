#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 1342211950713LLU;
int8_t x7 = 9;
int32_t t1 = 27568;
static int8_t x10 = INT8_MIN;
int64_t x17 = -22649694544454217LL;
static volatile int64_t x18 = INT64_MIN;
int16_t x25 = INT16_MAX;
int64_t x40 = INT64_MIN;
int8_t x41 = INT8_MIN;
volatile int16_t x47 = INT16_MAX;
int8_t x56 = INT8_MAX;
int8_t x63 = INT8_MAX;
uint32_t x68 = 6803969U;
uint64_t t14 = 447345465961399582LLU;
static int64_t x86 = -66003344674642LL;
volatile int32_t x87 = 150921803;
uint64_t t17 = 1599026098LLU;
int8_t x96 = 14;
int32_t x98 = -1;
int8_t x100 = -3;
volatile int64_t x115 = 20158931009057LL;
int16_t x118 = INT16_MIN;
int8_t x125 = INT8_MAX;
static int32_t x128 = INT32_MAX;
volatile uint64_t t30 = 103779LLU;
uint64_t t31 = 129676693769737343LLU;
int8_t x169 = 0;
uint64_t x172 = 23222027184610452LLU;
static int8_t x173 = INT8_MIN;
volatile int16_t x175 = INT16_MAX;
volatile uint64_t t35 = 4321936348034703LLU;
static volatile int16_t x182 = 3709;
volatile int64_t x183 = INT64_MIN;
int16_t x189 = 0;
uint32_t x196 = 43U;
static uint32_t x231 = 317242U;
uint64_t x232 = 490LLU;
static int64_t x233 = -213175LL;
int64_t t45 = 1LL;
uint64_t x265 = 6447305256096322LLU;
static int32_t x266 = INT32_MAX;
static volatile uint64_t t49 = 4070540146LLU;
int8_t x293 = INT8_MAX;
volatile uint32_t x295 = UINT32_MAX;
static uint64_t t56 = 3190145730268LLU;
static uint16_t x323 = UINT16_MAX;
static int32_t x334 = -1;
int64_t t60 = 30493629432LL;
uint64_t x337 = 116719940LLU;
int32_t x340 = INT32_MIN;
volatile int8_t x342 = INT8_MIN;
static uint64_t x347 = 180LLU;
volatile int16_t x353 = INT16_MAX;
uint32_t x354 = UINT32_MAX;
volatile uint64_t t65 = 5585LLU;
int32_t x363 = 5364097;
uint16_t x366 = 1077U;
int64_t x384 = INT64_MIN;
uint64_t x404 = 1075846899973350652LLU;
int64_t x419 = -30885853111924LL;
volatile int64_t t76 = 160495965LL;
int32_t x421 = INT32_MIN;
static volatile int16_t x422 = 147;
static volatile uint16_t x429 = 438U;
int64_t x462 = 123492LL;
int32_t x469 = -3;
int16_t x471 = -1;
static int64_t x476 = INT64_MAX;
uint32_t x483 = UINT32_MAX;
uint64_t x488 = UINT64_MAX;
int32_t x498 = 279937;
static int16_t x505 = -1;
int16_t x510 = 9;
static int8_t x511 = INT8_MIN;
uint8_t x513 = 44U;
int8_t x525 = INT8_MIN;
int8_t x526 = -25;
uint8_t x527 = 6U;
volatile int16_t x528 = 5;
volatile int32_t t95 = 4360750;
int32_t x537 = INT32_MIN;
uint16_t x539 = 19902U;
int64_t x540 = 28882LL;
static uint8_t x541 = 3U;
volatile int64_t x544 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static uint16_t x2 = 999U;
	static int16_t x3 = -1;
	volatile uint64_t t0 = 1LLU;

	t0 = (x1*(x2%(x3%x4)));

	if (t0 != 2145336163353LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = 39;
	int16_t x8 = INT16_MIN;

	t1 = (x5*(x6%(x7%x8)));

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int16_t x11 = INT16_MAX;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = 0;

	t2 = (x9*(x10%(x11%x12)));

	if (t2 != -4194176) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	int32_t x15 = 43;
	uint64_t x16 = 163LLU;
	volatile uint64_t t3 = 42733141LLU;

	t3 = (x13*(x14%(x15%x16)));

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = INT16_MIN;
	volatile int64_t t4 = -4312062164LL;

	t4 = (x17*(x18%(x19%x20)));

	if (t4 != 181197556355633736LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = -189963937789LL;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;
	static volatile int64_t t5 = 967946LL;

	t5 = (x25*(x26%(x27%x28)));

	if (t5 != -4095875LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -767;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	int64_t t6 = -91670LL;

	t6 = (x29*(x30%(x31%x32)));

	if (t6 != 98176LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 17U;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	uint32_t x36 = 1316204026U;
	uint32_t t7 = 64663U;

	t7 = (x33*(x34%(x35%x36)));

	if (t7 != 1179002836U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int32_t x38 = -1;
	int8_t x39 = -1;
	volatile int64_t t8 = -1735LL;

	t8 = (x37*(x38%(x39%x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x42 = UINT16_MAX;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = 7;

	t9 = (x41*(x42%(x43%x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 262250244U;
	volatile uint8_t x46 = 1U;
	static volatile int16_t x48 = -11;
	volatile uint32_t t10 = 0U;

	t10 = (x45*(x46%(x47%x48)));

	if (t10 != 262250244U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 3LLU;
	uint32_t x54 = 1U;
	volatile int16_t x55 = INT16_MIN;
	uint64_t t11 = 565LLU;

	t11 = (x53*(x54%(x55%x56)));

	if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	static volatile int16_t x62 = INT16_MIN;
	static uint8_t x64 = UINT8_MAX;
	int32_t t12 = 52488103;

	t12 = (x61*(x62%(x63%x64)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = 8439U;
	int32_t x66 = -34184;
	uint16_t x67 = UINT16_MAX;
	volatile uint32_t t13 = 13132U;

	t13 = (x65*(x66%(x67%x68)));

	if (t13 != 264579528U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	volatile uint64_t x70 = UINT64_MAX;
	uint32_t x71 = 558U;
	uint64_t x72 = 419481802884LLU;

	t14 = (x69*(x70%(x71%x72)));

	if (t14 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 15LLU;
	static int16_t x78 = INT16_MIN;
	static volatile int64_t x79 = -1LL;
	int64_t x80 = INT64_MAX;
	uint64_t t15 = 418LLU;

	t15 = (x77*(x78%(x79%x80)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MIN;
	static int8_t x83 = -1;
	int16_t x84 = -16;
	volatile int32_t t16 = -780;

	t16 = (x81*(x82%(x83%x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 149206LLU;
	int64_t x88 = -357LL;

	t17 = (x85*(x86%(x87%x88)));

	if (t17 != 18446744073704478612LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 12274LLU;
	int16_t x94 = -1;
	uint16_t x95 = 2U;
	uint64_t t18 = 1020LLU;

	t18 = (x93*(x94%(x95%x96)));

	if (t18 != 18446744073709539342LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x97 = -1;
	int32_t x99 = INT32_MAX;
	volatile int32_t t19 = 1;

	t19 = (x97*(x98%(x99%x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = INT16_MAX;
	static int32_t x102 = INT32_MIN;
	static volatile int32_t x103 = 4024;
	int32_t x104 = 362;
	volatile int32_t t20 = 13;

	t20 = (x101*(x102%(x103%x104)));

	if (t20 != -65534) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = 729U;
	static uint16_t x106 = 5419U;
	int16_t x107 = -1;
	uint16_t x108 = 95U;
	int32_t t21 = 1;

	t21 = (x105*(x106%(x107%x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x109 = INT32_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t22 = 139163LL;

	t22 = (x109*(x110%(x111%x112)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 37166427659020LL;
	int32_t x114 = INT32_MIN;
	static uint32_t x116 = 11854U;
	int64_t t23 = 16163258LL;

	t23 = (x113*(x114%(x115%x116)));

	if (t23 != -202445531458681940LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x117 = -1LL;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MAX;
	volatile int64_t t24 = -56145897LL;

	t24 = (x117*(x118%(x119%x120)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x126 = -1;
	volatile int16_t x127 = -1;
	volatile int32_t t25 = 1194056;

	t25 = (x125*(x126%(x127%x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MAX;
	uint32_t x131 = 240U;
	int16_t x132 = INT16_MIN;
	volatile uint32_t t26 = 991464435U;

	t26 = (x129*(x130%(x131%x132)));

	if (t26 != 4161409U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -8876;
	volatile uint8_t x134 = 0U;
	int16_t x135 = -5;
	int64_t x136 = INT64_MAX;
	int64_t t27 = -118371127805LL;

	t27 = (x133*(x134%(x135%x136)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = 2U;
	int32_t x146 = INT32_MIN;
	int32_t x147 = -1;
	volatile int64_t x148 = INT64_MIN;
	volatile int64_t t28 = -56413056077542LL;

	t28 = (x145*(x146%(x147%x148)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = INT64_MIN;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = 1;
	int16_t x152 = INT16_MAX;
	int64_t t29 = -3176786355395LL;

	t29 = (x149*(x150%(x151%x152)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = -52603108946690281LL;
	int64_t x154 = INT64_MIN;
	static uint8_t x155 = 108U;
	uint64_t x156 = 58543363492997710LLU;

	t30 = (x153*(x154%(x155%x156)));

	if (t30 != 14238495357974329136LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = -510778867;
	volatile uint64_t x159 = 58423LLU;
	int16_t x160 = INT16_MIN;

	t31 = (x157*(x158%(x159%x160)));

	if (t31 != 2723241390LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = -28;
	int64_t x166 = INT64_MAX;
	int8_t x167 = -3;
	int16_t x168 = INT16_MAX;
	int64_t t32 = 84382LL;

	t32 = (x165*(x166%(x167%x168)));

	if (t32 != -28LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MAX;
	uint64_t t33 = 45473873192277LLU;

	t33 = (x169*(x170%(x171%x172)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x174 = -13;
	uint8_t x176 = 84U;
	int32_t t34 = 330;

	t34 = (x173*(x174%(x175%x176)));

	if (t34 != 768) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int64_t x178 = INT64_MAX;
	uint16_t x179 = 496U;
	int32_t x180 = INT32_MAX;

	t35 = (x177*(x178%(x179%x180)));

	if (t35 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x181 = 6U;
	uint8_t x184 = 20U;
	static volatile int64_t t36 = -51LL;

	t36 = (x181*(x182%(x183%x184)));

	if (t36 != 30LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x190 = 315U;
	uint32_t x191 = 50020U;
	uint8_t x192 = UINT8_MAX;
	volatile uint32_t t37 = 6U;

	t37 = (x189*(x190%(x191%x192)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 13688491U;
	uint32_t x194 = UINT32_MAX;
	int8_t x195 = -11;
	uint32_t t38 = 14317211U;

	t38 = (x193*(x194%(x195%x196)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = UINT8_MAX;
	uint8_t x202 = UINT8_MAX;
	uint32_t x203 = 18U;
	static uint16_t x204 = 53U;
	static uint32_t t39 = 420864U;

	t39 = (x201*(x202%(x203%x204)));

	if (t39 != 765U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 1U;
	int64_t x206 = 0LL;
	uint32_t x207 = 3966U;
	int32_t x208 = -165;
	volatile int64_t t40 = -4485393LL;

	t40 = (x205*(x206%(x207%x208)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 7244098LLU;
	static int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;
	int64_t x212 = -5847727366LL;
	uint64_t t41 = 0LLU;

	t41 = (x209*(x210%(x211%x212)));

	if (t41 != 920000446LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = -313077563435LL;
	static uint64_t t42 = 199136LLU;

	t42 = (x229*(x230%(x231%x232)));

	if (t42 != 18446743745144553472LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x234 = 107U;
	int32_t x235 = INT32_MIN;
	static uint16_t x236 = 9128U;
	int64_t t43 = -2172308418712LL;

	t43 = (x233*(x234%(x235%x236)));

	if (t43 != -22809725LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x237 = 97431939U;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -1LL;
	int64_t x240 = INT64_MAX;
	static int64_t t44 = 251166320328966LL;

	t44 = (x237*(x238%(x239%x240)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x241 = 0U;
	static int16_t x242 = -949;
	int64_t x243 = 6979227767LL;
	int8_t x244 = INT8_MIN;

	t45 = (x241*(x242%(x243%x244)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = UINT64_MAX;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = 1092283;
	volatile int16_t x248 = INT16_MIN;
	static uint64_t t46 = 10LLU;

	t46 = (x245*(x246%(x247%x248)));

	if (t46 != 10523LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 185838LL;
	uint16_t x251 = 489U;
	static int64_t x252 = -363215356LL;
	volatile int64_t t47 = 27850769LL;

	t47 = (x249*(x250%(x251%x252)));

	if (t47 != 1179630LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = -1;
	uint64_t x254 = 2340947LLU;
	int16_t x255 = -24;
	int8_t x256 = -43;
	static volatile uint64_t t48 = 1396062LLU;

	t48 = (x253*(x254%(x255%x256)));

	if (t48 != 18446744073707210669LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x267 = 19292938LLU;
	int16_t x268 = -1;

	t49 = (x265*(x266%(x267%x268)));

	if (t49 != 13019693922813208978LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x269 = -1LL;
	int16_t x270 = INT16_MIN;
	int32_t x271 = -5218398;
	int16_t x272 = -8010;
	int64_t t50 = 2024LL;

	t50 = (x269*(x270%(x271%x272)));

	if (t50 != 1664LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x273 = INT8_MIN;
	volatile uint32_t x274 = 5519U;
	int32_t x275 = 386552898;
	int32_t x276 = INT32_MIN;
	uint32_t t51 = 37U;

	t51 = (x273*(x274%(x275%x276)));

	if (t51 != 4294260864U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = -1;
	uint8_t x280 = UINT8_MAX;
	static int32_t t52 = 393;

	t52 = (x277*(x278%(x279%x280)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x285 = INT16_MAX;
	uint32_t x286 = 157299014U;
	volatile int16_t x287 = INT16_MIN;
	static int32_t x288 = INT32_MIN;
	volatile uint32_t t53 = 123U;

	t53 = (x285*(x286%(x287%x288)));

	if (t53 != 256036538U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x289 = 1LL;
	static int16_t x290 = INT16_MAX;
	static volatile int64_t x291 = -1LL;
	static volatile int32_t x292 = INT32_MIN;
	static int64_t t54 = -310003LL;

	t54 = (x289*(x290%(x291%x292)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x294 = -1;
	uint64_t x296 = 45570391LLU;
	volatile uint64_t t55 = 58468494532755LLU;

	t55 = (x293*(x294%(x295%x296)));

	if (t55 != 1277297928LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = -1LL;
	uint64_t x298 = 37993LLU;
	int32_t x299 = INT32_MIN;
	uint32_t x300 = 1370774U;

	t56 = (x297*(x298%(x299%x300)));

	if (t56 != 18446744073709513623LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 1LL;
	int8_t x319 = -1;
	uint8_t x320 = 66U;
	static volatile int64_t t57 = 1037976981146635LL;

	t57 = (x317*(x318%(x319%x320)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x321 = 1;
	volatile uint16_t x322 = UINT16_MAX;
	static uint64_t x324 = UINT64_MAX;
	volatile uint64_t t58 = 126976674409825156LLU;

	t58 = (x321*(x322%(x323%x324)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	volatile int64_t x327 = INT64_MAX;
	uint8_t x328 = 2U;
	int64_t t59 = -146244723951LL;

	t59 = (x325*(x326%(x327%x328)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x333 = -1;
	static int8_t x335 = -1;
	int64_t x336 = INT64_MIN;

	t60 = (x333*(x334%(x335%x336)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x338 = 229002000U;
	int16_t x339 = INT16_MAX;
	static volatile uint64_t t61 = 3266793LLU;

	t61 = (x337*(x338%(x339%x340)));

	if (t61 != 3058529307760LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x341 = 726U;
	uint64_t x343 = UINT64_MAX;
	static volatile int8_t x344 = INT8_MIN;
	volatile uint64_t t62 = 9106796240058LLU;

	t62 = (x341*(x342%(x343%x344)));

	if (t62 != 726LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x345 = 29U;
	int16_t x346 = INT16_MIN;
	static uint64_t x348 = 145254LLU;
	uint64_t t63 = 4077320656035457LLU;

	t63 = (x345*(x346%(x347%x348)));

	if (t63 != 232LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x355 = 1076U;
	volatile uint8_t x356 = UINT8_MAX;
	volatile uint32_t t64 = 1U;

	t64 = (x353*(x354%(x355%x356)));

	if (t64 != 1015777U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x357 = INT8_MIN;
	uint64_t x358 = 223251LLU;
	volatile uint16_t x359 = 59U;
	uint32_t x360 = 1816432078U;

	t65 = (x357*(x358%(x359%x360)));

	if (t65 != 18446744073709544704LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x361 = 2489906508113690829LLU;
	int16_t x362 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	static volatile uint64_t t66 = 3081453515679264529LLU;

	t66 = (x361*(x362%(x363%x364)));

	if (t66 != 14587724646990081101LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x365 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;
	static int32_t t67 = -162253;

	t67 = (x365*(x366%(x367%x368)));

	if (t67 != -137856) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x373 = 252;
	uint64_t x374 = 15305LLU;
	int8_t x375 = -28;
	uint64_t x376 = 42090822LLU;
	static volatile uint64_t t68 = 95027LLU;

	t68 = (x373*(x374%(x375%x376)));

	if (t68 != 3856860LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x377 = 185397290996471680LLU;
	volatile int32_t x378 = INT32_MAX;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 6543145062586967957LLU;
	uint64_t t69 = 18LLU;

	t69 = (x377*(x378%(x379%x380)));

	if (t69 != 5296903749658601600LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x381 = INT32_MIN;
	volatile int64_t x382 = INT64_MIN;
	int64_t x383 = -1LL;
	static volatile int64_t t70 = -1680LL;

	t70 = (x381*(x382%(x383%x384)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x385 = INT8_MIN;
	volatile int16_t x386 = INT16_MIN;
	int64_t x387 = 2LL;
	uint32_t x388 = UINT32_MAX;
	int64_t t71 = -26753426471513132LL;

	t71 = (x385*(x386%(x387%x388)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x393 = 916;
	int64_t x394 = INT64_MAX;
	static volatile int64_t x395 = INT64_MAX;
	static int32_t x396 = -3886591;
	volatile int64_t t72 = 23228LL;

	t72 = (x393*(x394%(x395%x396)));

	if (t72 != 1084374540LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x397 = -1;
	int64_t x398 = INT64_MIN;
	static int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t73 = 18468092586883LL;

	t73 = (x397*(x398%(x399%x400)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x401 = INT8_MIN;
	volatile uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MAX;
	uint64_t t74 = 438283778740LLU;

	t74 = (x401*(x402%(x403%x404)));

	if (t74 != 18446744073709549696LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 39LLU;
	int16_t x412 = -1;
	volatile uint64_t t75 = 1048159802782LLU;

	t75 = (x409*(x410%(x411%x412)));

	if (t75 != 18446744062972133376LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x417 = 49;
	uint32_t x418 = 842195U;
	int32_t x420 = -5360390;

	t76 = (x417*(x418%(x419%x420)));

	if (t76 != 41267555LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x423 = -1LL;
	uint64_t x424 = 2LLU;
	uint64_t t77 = 48750009LLU;

	t77 = (x421*(x422%(x423%x424)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x430 = 22420U;
	volatile uint16_t x431 = UINT16_MAX;
	uint32_t x432 = 52U;
	static volatile uint32_t t78 = 3U;

	t78 = (x429*(x430%(x431%x432)));

	if (t78 != 4380U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x433 = UINT8_MAX;
	static uint64_t x434 = 3414LLU;
	uint64_t x435 = UINT64_MAX;
	static int8_t x436 = 14;
	uint64_t t79 = 4LLU;

	t79 = (x433*(x434%(x435%x436)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x441 = INT8_MAX;
	int32_t x442 = INT32_MIN;
	volatile int16_t x443 = INT16_MAX;
	int8_t x444 = INT8_MIN;
	static volatile int32_t t80 = -2337;

	t80 = (x441*(x442%(x443%x444)));

	if (t80 != -1016) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x449 = UINT16_MAX;
	int64_t x450 = 47156022LL;
	uint32_t x451 = 153524401U;
	int32_t x452 = -1;
	int64_t t81 = -83601892688593LL;

	t81 = (x449*(x450%(x451%x452)));

	if (t81 != 3090369901770LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x453 = 697953357U;
	uint8_t x454 = 11U;
	int16_t x455 = -6;
	int32_t x456 = INT32_MAX;
	volatile uint32_t t82 = 93845U;

	t82 = (x453*(x454%(x455%x456)));

	if (t82 != 3489766785U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x457 = -1;
	int64_t x458 = -8041734508LL;
	volatile int8_t x459 = INT8_MAX;
	uint16_t x460 = UINT16_MAX;
	static volatile int64_t t83 = 845360145LL;

	t83 = (x457*(x458%(x459%x460)));

	if (t83 != 20LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x461 = 1;
	int64_t x463 = -1LL;
	static int16_t x464 = INT16_MIN;
	static int64_t t84 = -52364476911047516LL;

	t84 = (x461*(x462%(x463%x464)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x465 = 0;
	volatile int16_t x466 = INT16_MAX;
	int16_t x467 = -1;
	int16_t x468 = 2;
	static int32_t t85 = -252592;

	t85 = (x465*(x466%(x467%x468)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x470 = UINT64_MAX;
	volatile int64_t x472 = 32774641130LL;
	static volatile uint64_t t86 = 524842041571678LLU;

	t86 = (x469*(x470%(x471%x472)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x473 = INT16_MAX;
	int16_t x474 = INT16_MIN;
	int8_t x475 = -1;
	static int64_t t87 = 34165LL;

	t87 = (x473*(x474%(x475%x476)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x481 = -1;
	int32_t x482 = INT32_MIN;
	int64_t x484 = INT64_MIN;
	int64_t t88 = 309642894551076888LL;

	t88 = (x481*(x482%(x483%x484)));

	if (t88 != 2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x485 = INT64_MIN;
	int8_t x486 = 40;
	static uint8_t x487 = 6U;
	uint64_t t89 = 9716LLU;

	t89 = (x485*(x486%(x487%x488)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x497 = -3676380703397LL;
	int64_t x499 = -1LL;
	static int32_t x500 = INT32_MIN;
	int64_t t90 = 33002262697660LL;

	t90 = (x497*(x498%(x499%x500)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x506 = -1;
	int32_t x507 = -1;
	uint16_t x508 = 3232U;
	int32_t t91 = 23130;

	t91 = (x505*(x506%(x507%x508)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x509 = 183307U;
	int8_t x512 = INT8_MAX;
	static uint32_t t92 = 187U;

	t92 = (x509*(x510%(x511%x512)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x514 = -14;
	int32_t x515 = -1;
	volatile int64_t x516 = INT64_MIN;
	static volatile int64_t t93 = 73034667586258LL;

	t93 = (x513*(x514%(x515%x516)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x521 = INT32_MIN;
	static uint64_t x522 = 17058LLU;
	uint64_t x523 = 15530644239273LLU;
	int16_t x524 = -15433;
	volatile uint64_t t94 = 6626716LLU;

	t94 = (x521*(x522%(x523%x524)));

	if (t94 != 18446707441933484032LLU) { NG(); } else { ; }
	
}

void f95(void) {


	t95 = (x525*(x526%(x527%x528)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x529 = INT16_MIN;
	uint32_t x530 = UINT32_MAX;
	int64_t x531 = INT64_MIN;
	uint16_t x532 = UINT16_MAX;
	int64_t t96 = 979061383218163LL;

	t96 = (x529*(x530%(x531%x532)));

	if (t96 != -1073709056LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x533 = INT32_MIN;
	int64_t x534 = INT64_MIN;
	int8_t x535 = INT8_MAX;
	static volatile uint16_t x536 = 13032U;
	static volatile int64_t t97 = 0LL;

	t97 = (x533*(x534%(x535%x536)));

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x538 = -2;
	volatile int64_t t98 = -368126LL;

	t98 = (x537*(x538%(x539%x540)));

	if (t98 != 4294967296LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x542 = INT32_MAX;
	int16_t x543 = INT16_MIN;
	volatile int64_t t99 = -203LL;

	t99 = (x541*(x542%(x543%x544)));

	if (t99 != 98301LL) { NG(); } else { ; }
	
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

