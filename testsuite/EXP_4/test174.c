#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint16_t x16 = UINT16_MAX;
int32_t t3 = 28;
static uint16_t x18 = 1U;
static uint64_t x22 = UINT64_MAX;
int64_t x39 = -265350773913LL;
static int64_t t8 = -12900110975LL;
uint64_t x47 = UINT64_MAX;
int8_t x49 = INT8_MAX;
uint8_t x63 = 1U;
volatile int64_t x67 = INT64_MAX;
uint64_t t15 = 4LLU;
volatile int64_t t16 = 78642734630696LL;
int8_t x77 = 1;
volatile int32_t t19 = -484;
int16_t x91 = 1;
int16_t x92 = INT16_MIN;
static uint64_t t21 = 25768267739LLU;
int16_t x99 = -58;
int8_t x102 = -1;
volatile int64_t t23 = 76LL;
static int8_t x108 = INT8_MIN;
volatile int32_t t24 = -54963142;
int16_t x122 = INT16_MAX;
volatile uint64_t t28 = 3321485655860499LLU;
uint32_t x139 = 426U;
int16_t x140 = INT16_MIN;
volatile uint16_t x153 = 14U;
volatile int16_t x156 = INT16_MAX;
int64_t x163 = -133803052LL;
int16_t x171 = 8;
static int64_t x173 = -1LL;
int32_t x178 = 6351619;
int32_t x180 = -995;
int16_t x197 = INT16_MIN;
int64_t x198 = -1LL;
uint8_t x200 = 4U;
uint32_t x203 = UINT32_MAX;
uint64_t x217 = 382287780LLU;
int16_t x218 = INT16_MAX;
uint8_t x219 = 93U;
volatile uint64_t x229 = UINT64_MAX;
volatile uint8_t x233 = UINT8_MAX;
static volatile uint32_t t46 = 157038U;
int32_t x249 = -3554;
uint16_t x253 = 1U;
int16_t x261 = INT16_MIN;
static uint64_t t50 = 547749379295976114LLU;
volatile uint16_t x268 = 222U;
static volatile int64_t x270 = -1LL;
static volatile uint32_t x271 = 161130U;
int32_t x272 = INT32_MIN;
static volatile int32_t x273 = INT32_MIN;
uint32_t x275 = 0U;
static volatile uint64_t t53 = 5882011873LLU;
uint64_t x281 = 6809453805071129LLU;
uint8_t x286 = UINT8_MAX;
uint64_t x289 = UINT64_MAX;
uint8_t x293 = UINT8_MAX;
int32_t x303 = 60643573;
int16_t x304 = 3098;
int32_t x306 = INT32_MIN;
uint64_t x308 = UINT64_MAX;
static uint64_t t61 = 211907079225094LLU;
int64_t x314 = INT64_MAX;
static uint64_t x316 = UINT64_MAX;
uint16_t x317 = 34U;
uint32_t x331 = 961U;
uint64_t t65 = 862166502684LLU;
static int64_t x347 = -1LL;
volatile int64_t t69 = 784826260197986591LL;
int32_t x355 = -1;
int32_t t71 = 25356;
uint8_t x365 = 54U;
volatile int64_t x383 = 108977513254159LL;
uint16_t x385 = 1U;
int64_t x405 = INT64_MIN;
int8_t x406 = 7;
volatile uint64_t x410 = 22531LLU;
int16_t x411 = INT16_MIN;
volatile uint64_t t81 = 29042142664183LLU;
int32_t x415 = -251167;
static volatile int8_t x418 = INT8_MIN;
int32_t x422 = 116589153;
volatile uint64_t t84 = 196892957240LLU;
volatile int16_t x426 = 12785;
int64_t x427 = -1LL;
static uint16_t x430 = 2362U;
static volatile int64_t t88 = -85363LL;
volatile int64_t x450 = 47290528947516015LL;
int8_t x451 = INT8_MIN;
int64_t t90 = 2800605871LL;
int32_t x453 = 0;
int64_t x454 = INT64_MIN;
int32_t x457 = -1;
int32_t t93 = 2413866;
int8_t x465 = INT8_MIN;
uint8_t x467 = 8U;
int32_t t94 = 451;
static int32_t x469 = INT32_MIN;
static int16_t x484 = -1;
static int8_t x488 = -1;
volatile uint64_t t99 = 7994545373381312430LLU;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	int64_t x3 = 8064555047LL;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 151389236768958LL;

	t0 = (x1%(x2+(x3-x4)));

	if (t0 != -12359522343LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = -12701;
	uint32_t x7 = 46352U;
	volatile uint8_t x8 = UINT8_MAX;
	volatile uint32_t t1 = 59354454U;

	t1 = (x5%(x6+(x7-x8)));

	if (t1 != 7923U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = -129416438107545LL;
	static uint32_t x11 = 23087U;
	int32_t x12 = -1826;
	volatile int64_t t2 = -1LL;

	t2 = (x9%(x10+(x11-x12)));

	if (t2 != 121327581758431LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	int16_t x15 = -1;

	t3 = (x13%(x14+(x15-x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	static volatile uint64_t x19 = 25LLU;
	volatile uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 9027114604278509695LLU;

	t4 = (x17%(x18+(x19-x20)));

	if (t4 != 26LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1860330774U;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	static uint64_t t5 = 3788642428050LLU;

	t5 = (x21%(x22+(x23-x24)));

	if (t5 != 1860330774LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = 12488986LL;
	static int8_t x26 = INT8_MAX;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 326U;
	volatile int64_t t6 = 951629289842LL;

	t6 = (x25%(x26+(x27-x28)));

	if (t6 != 12488986LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = -22LL;
	int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	volatile int64_t t7 = 27564LL;

	t7 = (x29%(x30+(x31-x32)));

	if (t7 != 881LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -2;
	int16_t x38 = -444;
	int8_t x40 = INT8_MAX;

	t8 = (x37%(x38+(x39-x40)));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	int32_t x43 = -856;
	volatile uint32_t x44 = 1U;
	int64_t t9 = -611377528755LL;

	t9 = (x41%(x42+(x43-x44)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 0;
	uint32_t x46 = 1483U;
	uint64_t x48 = 178208LLU;
	static uint64_t t10 = 56505100696456676LLU;

	t10 = (x45%(x46+(x47-x48)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 58U;
	static volatile int32_t t11 = -25273329;

	t11 = (x49%(x50+(x51-x52)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -36;
	volatile int32_t x54 = -5618517;
	uint64_t x55 = 142LLU;
	int8_t x56 = -1;
	uint64_t t12 = 25364161523LLU;

	t12 = (x53%(x54+(x55-x56)));

	if (t12 != 5618338LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 17893253;
	int16_t x58 = INT16_MAX;
	int8_t x59 = INT8_MAX;
	int32_t x60 = -1;
	volatile int32_t t13 = 3;

	t13 = (x57%(x58+(x59-x60)));

	if (t13 != 31268) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = 474;
	uint8_t x62 = 0U;
	uint8_t x64 = 46U;
	int32_t t14 = -1781780;

	t14 = (x61%(x62+(x63-x64)));

	if (t14 != 24) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 20;
	int32_t x66 = -11;
	uint64_t x68 = 72LLU;

	t15 = (x65%(x66+(x67-x68)));

	if (t15 != 20LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int64_t x70 = -227371565LL;
	int16_t x71 = 2;
	static int32_t x72 = -137;

	t16 = (x69%(x70+(x71-x72)));

	if (t16 != 65535LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	static int8_t x80 = INT8_MIN;
	volatile uint64_t t17 = 220856LLU;

	t17 = (x77%(x78+(x79-x80)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = 4U;
	int16_t x82 = INT16_MAX;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = -1;
	static uint64_t t18 = 104572781052744368LLU;

	t18 = (x81%(x82+(x83-x84)));

	if (t18 != 4LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = -1;
	int32_t x86 = -1;
	int32_t x87 = -1;
	uint8_t x88 = 36U;

	t19 = (x85%(x86+(x87-x88)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 10797U;
	volatile uint32_t t20 = 11744264U;

	t20 = (x89%(x90+(x91-x92)));

	if (t20 != 28376U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;

	t21 = (x93%(x94+(x95-x96)));

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = -4073696LL;
	uint64_t x98 = UINT64_MAX;
	uint64_t x100 = 18995995209326LLU;
	uint64_t t22 = 4480302557577825826LLU;

	t22 = (x97%(x98+(x99-x100)));

	if (t22 != 18995991135689LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -431259315769378LL;
	uint8_t x103 = 1U;
	int32_t x104 = INT32_MAX;

	t23 = (x101%(x102+(x103-x104)));

	if (t23 != -1649778838LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = INT32_MAX;
	volatile int16_t x106 = INT16_MAX;
	int8_t x107 = INT8_MIN;

	t24 = (x105%(x106+(x107-x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = UINT8_MAX;
	uint64_t x123 = 113LLU;
	volatile uint64_t x124 = 8804635656646LLU;
	static uint64_t t25 = 3149204220216694LLU;

	t25 = (x121%(x122+(x123-x124)));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = 1;
	volatile int16_t x126 = INT16_MIN;
	uint64_t x127 = 72LLU;
	volatile int32_t x128 = -1;
	volatile uint64_t t26 = 12154336705815LLU;

	t26 = (x125%(x126+(x127-x128)));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = UINT8_MAX;
	static volatile uint32_t x130 = 999398U;
	static int16_t x131 = 0;
	static uint32_t x132 = 11035U;
	uint32_t t27 = 1837091U;

	t27 = (x129%(x130+(x131-x132)));

	if (t27 != 255U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x133 = 5977532234195LLU;
	int16_t x134 = -1;
	static volatile int16_t x135 = -5;
	uint32_t x136 = 147U;

	t28 = (x133%(x134+(x135-x136)));

	if (t28 != 3232938282LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 0;
	volatile int8_t x138 = -1;
	uint32_t t29 = 536088892U;

	t29 = (x137%(x138+(x139-x140)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MIN;
	static volatile int16_t x150 = -2783;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t30 = -32404;

	t30 = (x149%(x150+(x151-x152)));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x154 = INT16_MAX;
	volatile uint8_t x155 = 38U;
	volatile int32_t t31 = 9806046;

	t31 = (x153%(x154+(x155-x156)));

	if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MAX;
	int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MIN;
	volatile int16_t x160 = -251;
	int32_t t32 = -60045965;

	t32 = (x157%(x158+(x159-x160)));

	if (t32 != 29767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 7065846299258062LLU;
	uint32_t x162 = UINT32_MAX;
	volatile uint32_t x164 = 156089U;
	uint64_t t33 = 2226318859019043106LLU;

	t33 = (x161%(x162+(x163-x164)));

	if (t33 != 903877276LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x169 = -1LL;
	volatile int64_t x170 = INT64_MAX;
	static uint8_t x172 = UINT8_MAX;
	volatile int64_t t34 = -3079104907244LL;

	t34 = (x169%(x170+(x171-x172)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x174 = UINT32_MAX;
	int64_t x175 = 1LL;
	int64_t x176 = -1LL;
	static volatile int64_t t35 = 64646297269245LL;

	t35 = (x173%(x174+(x175-x176)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = 15498597086163LL;
	static int8_t x179 = INT8_MAX;
	static int64_t t36 = 82749458480641LL;

	t36 = (x177%(x178+(x179-x180)));

	if (t36 != 5450693LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = -41;
	static int8_t x183 = -7;
	int16_t x184 = INT16_MIN;
	int32_t t37 = 116315151;

	t37 = (x181%(x182+(x183-x184)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x185 = -1;
	static int8_t x186 = -1;
	static volatile uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 24114U;
	uint64_t t38 = 496765120026LLU;

	t38 = (x185%(x186+(x187-x188)));

	if (t38 != 24115LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x199 = 0U;
	volatile int64_t t39 = 12LL;

	t39 = (x197%(x198+(x199-x200)));

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MAX;
	int32_t x202 = INT32_MIN;
	int16_t x204 = 0;
	static uint32_t t40 = 50754815U;

	t40 = (x201%(x202+(x203-x204)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x205 = 12U;
	int16_t x206 = 831;
	int32_t x207 = 266;
	static int64_t x208 = 13051670LL;
	int64_t t41 = 575126LL;

	t41 = (x205%(x206+(x207-x208)));

	if (t41 != 12LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x220 = INT8_MIN;
	static volatile uint64_t t42 = 208018714LLU;

	t42 = (x217%(x218+(x219-x220)));

	if (t42 != 22836LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x225 = 7537184;
	static uint16_t x226 = 2U;
	int8_t x227 = INT8_MAX;
	static int8_t x228 = INT8_MIN;
	static int32_t t43 = -5240864;

	t43 = (x225%(x226+(x227-x228)));

	if (t43 != 145) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x230 = INT32_MIN;
	volatile int8_t x231 = -1;
	int8_t x232 = -15;
	static volatile uint64_t t44 = 12052410490341LLU;

	t44 = (x229%(x230+(x231-x232)));

	if (t44 != 2147483633LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x234 = 522436LLU;
	static volatile int16_t x235 = INT16_MIN;
	int8_t x236 = -1;
	uint64_t t45 = 1910342694LLU;

	t45 = (x233%(x234+(x235-x236)));

	if (t45 != 255LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 3U;
	static int8_t x243 = -1;
	static int16_t x244 = INT16_MIN;

	t46 = (x241%(x242+(x243-x244)));

	if (t46 != 15U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x250 = -1;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = -1;
	volatile int32_t t47 = 1;

	t47 = (x249%(x250+(x251-x252)));

	if (t47 != -3554) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x254 = -1;
	volatile int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t48 = -3;

	t48 = (x253%(x254+(x255-x256)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	static int8_t x258 = -1;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 766U;
	uint64_t t49 = 306550497118298765LLU;

	t49 = (x257%(x258+(x259-x260)));

	if (t49 != 33534LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x262 = 2847U;
	uint64_t x263 = UINT64_MAX;
	static int8_t x264 = INT8_MIN;

	t50 = (x261%(x262+(x263-x264)));

	if (t50 != 238LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	int32_t x267 = -1;
	int64_t t51 = -381265010633767LL;

	t51 = (x265%(x266+(x267-x268)));

	if (t51 != -64LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x269 = 3U;
	int64_t t52 = 5257866159LL;

	t52 = (x269%(x270+(x271-x272)));

	if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x274 = 123U;
	static volatile uint64_t x276 = 252738884472720872LLU;

	t53 = (x273%(x274+(x275-x276)));

	if (t53 != 252738882325237101LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x277 = 4U;
	volatile int8_t x278 = INT8_MIN;
	uint16_t x279 = 1585U;
	int8_t x280 = -1;
	int32_t t54 = 42188134;

	t54 = (x277%(x278+(x279-x280)));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x282 = 4U;
	uint64_t x283 = UINT64_MAX;
	uint64_t x284 = 9482393160781463LLU;
	volatile uint64_t t55 = 153570LLU;

	t55 = (x281%(x282+(x283-x284)));

	if (t55 != 6809453805071129LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x285 = INT8_MIN;
	static int64_t x287 = 6276304512784617LL;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t56 = -366149245855466914LL;

	t56 = (x285%(x286+(x287-x288)));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x290 = 33003131LLU;
	uint8_t x291 = 1U;
	int8_t x292 = INT8_MIN;
	static uint64_t t57 = 28031226818954417LLU;

	t57 = (x289%(x290+(x291-x292)));

	if (t57 != 14791575LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x294 = -1;
	volatile int64_t x295 = 6911763936810LL;
	int32_t x296 = INT32_MIN;
	int64_t t58 = 1080541994456169LL;

	t58 = (x293%(x294+(x295-x296)));

	if (t58 != 255LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = -1276LL;
	static int32_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	int64_t t59 = -202352218LL;

	t59 = (x297%(x298+(x299-x300)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = 7;
	uint64_t x302 = 1937742081LLU;
	volatile uint64_t t60 = 11048LLU;

	t60 = (x301%(x302+(x303-x304)));

	if (t60 != 7LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x305 = INT32_MIN;
	int8_t x307 = INT8_MIN;

	t61 = (x305%(x306+(x307-x308)));

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = -259490975068628LL;
	static uint64_t x315 = UINT64_MAX;
	volatile uint64_t t62 = 3LLU;

	t62 = (x313%(x314+(x315-x316)));

	if (t62 != 9223112545879707181LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x318 = INT8_MIN;
	int64_t x319 = -27338LL;
	int16_t x320 = INT16_MIN;
	static volatile int64_t t63 = 574184502LL;

	t63 = (x317%(x318+(x319-x320)));

	if (t63 != 34LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MIN;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MAX;
	uint64_t t64 = 9957800466196LLU;

	t64 = (x321%(x322+(x323-x324)));

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x329 = 17624LLU;
	int64_t x330 = -1LL;
	int16_t x332 = INT16_MIN;

	t65 = (x329%(x330+(x331-x332)));

	if (t65 != 17624LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = 1353;
	int8_t x334 = -4;
	int64_t x335 = -1LL;
	int16_t x336 = -1;
	static int64_t t66 = 17460476193262843LL;

	t66 = (x333%(x334+(x335-x336)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x337 = UINT16_MAX;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = INT64_MAX;
	uint32_t x340 = 393221U;
	int64_t t67 = -5233091982445LL;

	t67 = (x337%(x338+(x339-x340)));

	if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int32_t x343 = -192918;
	uint8_t x344 = UINT8_MAX;
	static int32_t t68 = 5;

	t68 = (x341%(x342+(x343-x344)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = -91;
	static uint32_t x346 = 629194U;
	volatile int8_t x348 = INT8_MIN;

	t69 = (x345%(x346+(x347-x348)));

	if (t69 != -91LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x350 = 3003960622945872LLU;
	uint16_t x351 = 0U;
	int16_t x352 = INT16_MIN;
	volatile uint64_t t70 = 6465364781963034LLU;

	t70 = (x349%(x350+(x351-x352)));

	if (t70 != 2425848620701888LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = UINT8_MAX;
	int8_t x356 = INT8_MIN;

	t71 = (x353%(x354+(x355-x356)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 1283994U;
	volatile uint32_t t72 = 367716818U;

	t72 = (x365%(x366+(x367-x368)));

	if (t72 != 54U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x369 = 178U;
	static uint8_t x370 = 0U;
	uint16_t x371 = 11516U;
	volatile int64_t x372 = -32LL;
	int64_t t73 = 1056754LL;

	t73 = (x369%(x370+(x371-x372)));

	if (t73 != 178LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x373 = 62U;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	int64_t t74 = -659537119751161LL;

	t74 = (x373%(x374+(x375-x376)));

	if (t74 != 62LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x381 = -7;
	int32_t x382 = 94;
	uint16_t x384 = 3U;
	volatile int64_t t75 = 184268773568894LL;

	t75 = (x381%(x382+(x383-x384)));

	if (t75 != -7LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x386 = -1LL;
	int16_t x387 = -1;
	static int8_t x388 = -1;
	static int64_t t76 = 21342392229695LL;

	t76 = (x385%(x386+(x387-x388)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x389 = -17927378LL;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 0U;
	static volatile int16_t x392 = INT16_MAX;
	static volatile uint64_t t77 = 326240494LLU;

	t77 = (x389%(x390+(x391-x392)));

	if (t77 != 18446744073691624238LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x393 = INT16_MAX;
	static uint16_t x394 = 101U;
	int16_t x395 = 2434;
	int64_t x396 = -4LL;
	int64_t t78 = -1943448745814873LL;

	t78 = (x393%(x394+(x395-x396)));

	if (t78 != 2299LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x401 = -7789;
	int64_t x402 = -119880725795LL;
	static volatile int32_t x403 = -1;
	int8_t x404 = -1;
	int64_t t79 = 642877026635869LL;

	t79 = (x401%(x402+(x403-x404)));

	if (t79 != -7789LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x407 = 9U;
	volatile int64_t x408 = 65766LL;
	static int64_t t80 = 2380741LL;

	t80 = (x405%(x406+(x407-x408)));

	if (t80 != -55808LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = -5;
	int8_t x412 = -25;

	t81 = (x409%(x410+(x411-x412)));

	if (t81 != 10207LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x413 = UINT32_MAX;
	int8_t x414 = INT8_MAX;
	int32_t x416 = INT32_MIN;
	volatile uint32_t t82 = 7U;

	t82 = (x413%(x414+(x415-x416)));

	if (t82 != 502079U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x417 = INT16_MAX;
	static uint32_t x419 = 8163711U;
	static uint8_t x420 = 3U;
	volatile uint32_t t83 = 66U;

	t83 = (x417%(x418+(x419-x420)));

	if (t83 != 32767U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x421 = INT8_MAX;
	int8_t x423 = INT8_MIN;
	static uint64_t x424 = 680675LLU;

	t84 = (x421%(x422+(x423-x424)));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x425 = 1U;
	int8_t x428 = INT8_MAX;
	volatile int64_t t85 = -1082LL;

	t85 = (x425%(x426+(x427-x428)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x429 = INT8_MIN;
	volatile int32_t x431 = INT32_MIN;
	volatile uint32_t x432 = UINT32_MAX;
	uint32_t t86 = 1U;

	t86 = (x429%(x430+(x431-x432)));

	if (t86 != 2147481157U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x433 = 2396496LLU;
	int64_t x434 = 0LL;
	int8_t x435 = -4;
	int16_t x436 = 0;
	static volatile uint64_t t87 = 1647910955971809LLU;

	t87 = (x433%(x434+(x435-x436)));

	if (t87 != 2396496LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x441 = -12;
	int32_t x442 = INT32_MAX;
	int64_t x443 = -1LL;
	int64_t x444 = -1LL;

	t88 = (x441%(x442+(x443-x444)));

	if (t88 != -12LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x445 = 4681U;
	int64_t x446 = INT64_MIN;
	uint64_t x447 = 2LLU;
	int8_t x448 = -1;
	volatile uint64_t t89 = 83604664860626476LLU;

	t89 = (x445%(x446+(x447-x448)));

	if (t89 != 4681LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x449 = 19;
	uint32_t x452 = UINT32_MAX;

	t90 = (x449%(x450+(x451-x452)));

	if (t90 != 19LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x455 = 254451152107LLU;
	uint64_t x456 = 9777534LLU;
	volatile uint64_t t91 = 197249074644LLU;

	t91 = (x453%(x454+(x455-x456)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x458 = 342U;
	static volatile int32_t x459 = -1000;
	uint64_t x460 = 5004873452500LLU;
	volatile uint64_t t92 = 154164LLU;

	t92 = (x457%(x458+(x459-x460)));

	if (t92 != 5004873453157LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x461 = 328;
	uint8_t x462 = 0U;
	uint8_t x463 = UINT8_MAX;
	int32_t x464 = -62451;

	t93 = (x461%(x462+(x463-x464)));

	if (t93 != 328) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x466 = -1473;
	volatile int8_t x468 = INT8_MAX;

	t94 = (x465%(x466+(x467-x468)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x470 = -1;
	static volatile uint64_t x471 = 179375030069LLU;
	int32_t x472 = -1;
	uint64_t t95 = 58105LLU;

	t95 = (x469%(x470+(x471-x472)));

	if (t95 != 18046958762LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x473 = 44348445074124LLU;
	uint16_t x474 = 7U;
	int32_t x475 = -1;
	int16_t x476 = 0;
	static uint64_t t96 = 1767234LLU;

	t96 = (x473%(x474+(x475-x476)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x477 = -4;
	int8_t x478 = -1;
	int16_t x479 = -2;
	int8_t x480 = INT8_MIN;
	static int32_t t97 = -25548;

	t97 = (x477%(x478+(x479-x480)));

	if (t97 != -4) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x481 = UINT16_MAX;
	uint8_t x482 = 34U;
	uint64_t x483 = 10109777500303LLU;
	volatile uint64_t t98 = 791415793106175866LLU;

	t98 = (x481%(x482+(x483-x484)));

	if (t98 != 65535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x485 = -43;
	uint64_t x486 = 531377002683LLU;
	volatile int32_t x487 = -1;

	t99 = (x485%(x486+(x487-x488)));

	if (t99 != 458978252184LLU) { NG(); } else { ; }
	
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

