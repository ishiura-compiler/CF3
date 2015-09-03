#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
int16_t x3 = INT16_MAX;
int32_t t0 = 21;
int8_t x6 = 10;
volatile uint64_t t1 = 0LLU;
volatile int8_t x13 = 0;
volatile uint16_t x21 = 307U;
volatile int32_t t4 = 1010;
uint32_t x28 = 1U;
uint32_t t5 = 504U;
int16_t x36 = -1;
int16_t x48 = -3591;
uint8_t x69 = 4U;
uint8_t x72 = 21U;
int32_t x73 = INT32_MAX;
int16_t x82 = INT16_MAX;
static uint8_t x85 = 1U;
volatile int64_t x86 = 55747LL;
volatile uint8_t x97 = 4U;
uint64_t x101 = UINT64_MAX;
static uint64_t x104 = 58784512310512665LLU;
static int64_t x111 = -2790LL;
static int16_t x126 = 1;
volatile uint64_t t25 = 81855298LLU;
int8_t x130 = -8;
volatile int8_t x131 = INT8_MIN;
int16_t x135 = INT16_MIN;
int32_t x144 = 133142476;
int32_t x146 = -1;
uint64_t x147 = 64257890LLU;
static volatile int16_t x150 = -1124;
static int32_t x153 = 627959;
uint64_t x165 = UINT64_MAX;
volatile uint64_t t34 = 33073LLU;
int16_t x191 = INT16_MIN;
volatile uint32_t t35 = 1128055831U;
int32_t x193 = INT32_MAX;
static uint8_t x209 = UINT8_MAX;
int64_t t38 = 1105346938588291LL;
int16_t x220 = -1;
int64_t t39 = -11263879LL;
uint16_t x238 = 3245U;
int16_t x239 = 26;
uint8_t x263 = 114U;
volatile int32_t t46 = 29418;
int16_t x265 = INT16_MIN;
int8_t x266 = INT8_MIN;
volatile int8_t x275 = INT8_MIN;
static uint64_t x280 = 1LLU;
int16_t x282 = INT16_MIN;
uint16_t x288 = 54U;
static uint32_t x299 = 2435U;
int16_t x303 = INT16_MAX;
volatile int64_t t54 = 493LL;
int64_t x317 = 2LL;
uint64_t t58 = 688734077306460LLU;
int8_t x330 = -13;
volatile int16_t x332 = -1;
volatile int32_t t61 = INT32_MIN;
volatile uint32_t x339 = 131U;
int64_t x342 = INT64_MIN;
static uint16_t x343 = UINT16_MAX;
static int32_t x344 = -1;
int32_t x346 = INT32_MIN;
volatile int32_t t65 = 11;
int8_t x361 = INT8_MIN;
int8_t x365 = INT8_MIN;
static int64_t x368 = -31840LL;
volatile uint32_t x371 = UINT32_MAX;
static int16_t x377 = INT16_MIN;
uint64_t x381 = 36LLU;
static uint8_t x385 = 1U;
static volatile int64_t x386 = INT64_MIN;
volatile int8_t x387 = -1;
int64_t t72 = 24146LL;
uint32_t t73 = 1956U;
static volatile uint32_t t74 = 2U;
int64_t x419 = -1LL;
volatile int64_t t78 = 29485182789LL;
int32_t x421 = INT32_MIN;
int8_t x423 = INT8_MIN;
volatile uint64_t t80 = 246715688LLU;
uint8_t x446 = UINT8_MAX;
int16_t x448 = INT16_MIN;
int8_t x451 = 59;
int16_t x452 = INT16_MIN;
static int16_t x453 = -3890;
uint16_t x456 = 236U;
int32_t x457 = INT32_MIN;
uint64_t x458 = UINT64_MAX;
int32_t x469 = INT32_MIN;
static uint8_t x478 = UINT8_MAX;
uint16_t x480 = UINT16_MAX;
int64_t x482 = INT64_MIN;
uint8_t x483 = 49U;
volatile int64_t t88 = 24732054269LL;
volatile int64_t t89 = 13LL;
int16_t x492 = INT16_MIN;
volatile uint16_t x499 = UINT16_MAX;
int16_t x505 = INT16_MIN;
static uint8_t x523 = 3U;
int8_t x524 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x4 = -1;

	t0 = ((x1|x2)+(x3*x4));

	if (t0 != -65535) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	static volatile int8_t x7 = INT8_MAX;
	int8_t x8 = INT8_MIN;

	t1 = ((x5|x6)+(x7*x8));

	if (t1 != 18446744073709535359LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 2062540LLU;

	t2 = ((x13|x14)+(x15*x16));

	if (t2 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = 601223020LL;
	static volatile uint16_t x19 = UINT16_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 80536881082546LLU;

	t3 = ((x17|x18)+(x19*x20));

	if (t3 != 18446744073709481837LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MAX;
	volatile int16_t x23 = -1;
	volatile int8_t x24 = 0;

	t4 = ((x21|x22)+(x23*x24));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 154328U;
	int16_t x26 = INT16_MIN;
	int8_t x27 = -11;

	t5 = ((x25|x26)+(x27*x28));

	if (t5 != 4294957773U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = 336885288577419LL;
	int64_t x31 = 137443335095985LL;
	int64_t x32 = -1LL;
	volatile int64_t t6 = 121460909089LL;

	t6 = ((x29|x30)+(x31*x32));

	if (t6 != -137444543798566LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 116129482LLU;
	int32_t x34 = -1483;
	int32_t x35 = -85;
	uint64_t t7 = 330958224005LLU;

	t7 = ((x33|x34)+(x35*x36));

	if (t7 != 18446744073709551444LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	uint16_t x42 = 237U;
	int64_t x43 = -317962445248114528LL;
	int64_t x44 = -1LL;
	int64_t t8 = 294567LL;

	t8 = ((x41|x42)+(x43*x44));

	if (t8 != 317962445248114527LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 48U;
	volatile uint64_t x46 = 712150LLU;
	uint16_t x47 = 4U;
	uint64_t t9 = 1LLU;

	t9 = ((x45|x46)+(x47*x48));

	if (t9 != 697818LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = 436026U;
	int16_t x50 = 213;
	int32_t x51 = -392407597;
	int8_t x52 = -1;
	volatile uint32_t t10 = 7224U;

	t10 = ((x49|x50)+(x51*x52));

	if (t10 != 392843820U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	static uint8_t x58 = 75U;
	int32_t x59 = -1;
	static int32_t x60 = 71962571;
	int32_t t11 = -862614;

	t11 = ((x57|x58)+(x59*x60));

	if (t11 != -71962624) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x61 = UINT8_MAX;
	volatile int64_t x62 = 71860280325LL;
	uint16_t x63 = 1929U;
	volatile uint16_t x64 = UINT16_MAX;
	int64_t t12 = 205622205LL;

	t12 = ((x61|x62)+(x63*x64));

	if (t12 != 71986697590LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	static int16_t x66 = INT16_MIN;
	int16_t x67 = 29;
	static uint64_t x68 = 0LLU;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x65|x66)+(x67*x68));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = -1;
	int32_t x71 = -93;
	static volatile int32_t t14 = 1385637;

	t14 = ((x69|x70)+(x71*x72));

	if (t14 != -1954) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x74 = INT16_MIN;
	static int64_t x75 = -24669695LL;
	uint8_t x76 = 72U;
	volatile int64_t t15 = 442159LL;

	t15 = ((x73|x74)+(x75*x76));

	if (t15 != -1776218041LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 955U;
	volatile uint8_t x78 = 52U;
	int8_t x79 = INT8_MIN;
	static uint8_t x80 = 42U;
	uint32_t t16 = 920954U;

	t16 = ((x77|x78)+(x79*x80));

	if (t16 != 4294962879U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x83 = 127U;
	static int32_t x84 = 1;
	volatile int64_t t17 = -253215621566914703LL;

	t17 = ((x81|x82)+(x83*x84));

	if (t17 != -9223372036854742914LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x87 = INT16_MIN;
	int16_t x88 = 8;
	int64_t t18 = -1LL;

	t18 = ((x85|x86)+(x87*x88));

	if (t18 != -206397LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = 28LL;
	volatile int8_t x95 = INT8_MIN;
	uint8_t x96 = UINT8_MAX;
	int64_t t19 = 16941779314899LL;

	t19 = ((x93|x94)+(x95*x96));

	if (t19 != 32895LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x98 = INT8_MAX;
	static int16_t x99 = -1;
	int8_t x100 = -2;
	volatile int32_t t20 = 988284794;

	t20 = ((x97|x98)+(x99*x100));

	if (t20 != 129) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x102 = 16091808LLU;
	int64_t x103 = -1LL;
	volatile uint64_t t21 = 803LLU;

	t21 = ((x101|x102)+(x103*x104));

	if (t21 != 18387959561399038950LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 8U;
	static uint32_t x106 = 1666971U;
	uint32_t x107 = 605170U;
	uint8_t x108 = 1U;
	uint32_t t22 = 1521U;

	t22 = ((x105|x106)+(x107*x108));

	if (t22 != 2272141U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -164;
	volatile int8_t x110 = -1;
	static int16_t x112 = -1;
	int64_t t23 = -71015965779342239LL;

	t23 = ((x109|x110)+(x111*x112));

	if (t23 != 2789LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x117 = 247U;
	uint16_t x118 = 266U;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MIN;
	volatile uint32_t t24 = 93037159U;

	t24 = ((x117|x118)+(x119*x120));

	if (t24 != 4286611967U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x125 = INT16_MIN;
	uint64_t x127 = 2829167296183956LLU;
	static int16_t x128 = -21;

	t25 = ((x125|x126)+(x127*x128));

	if (t25 != 18387331560489655773LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = INT64_MIN;
	int32_t x132 = -1;
	int64_t t26 = 4313LL;

	t26 = ((x129|x130)+(x131*x132));

	if (t26 != 120LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int32_t x136 = -1;
	static volatile int32_t t27 = 1;

	t27 = ((x133|x134)+(x135*x136));

	if (t27 != -2147450880) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x137 = 7U;
	volatile uint8_t x138 = 67U;
	int16_t x139 = INT16_MIN;
	int16_t x140 = -1;
	volatile int32_t t28 = 77728;

	t28 = ((x137|x138)+(x139*x140));

	if (t28 != 32839) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = 10;
	static int32_t t29 = -105311419;

	t29 = ((x141|x142)+(x143*x144));

	if (t29 != 1331392247) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = -999362756957041126LL;
	int8_t x148 = INT8_MIN;
	volatile uint64_t t30 = 57754849307636LLU;

	t30 = ((x145|x146)+(x147*x148));

	if (t30 != 18446744065484541695LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	volatile int8_t x151 = -62;
	int8_t x152 = -1;
	volatile int64_t t31 = 4542943074194962633LL;

	t31 = ((x149|x150)+(x151*x152));

	if (t31 != 61LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x154 = 1125985049958LL;
	int32_t x155 = INT32_MAX;
	uint64_t x156 = 1861961568LLU;
	volatile uint64_t t32 = 232444616709173LLU;

	t32 = ((x153|x154)+(x155*x156));

	if (t32 != 3998533144608151191LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 8117LLU;
	int64_t x158 = INT64_MIN;
	int64_t x159 = -300161627484091LL;
	volatile int16_t x160 = 3;
	uint64_t t33 = 0LLU;

	t33 = ((x157|x158)+(x159*x160));

	if (t33 != 9222471551972331652LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x166 = INT8_MAX;
	static volatile uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MIN;

	t34 = ((x165|x166)+(x167*x168));

	if (t34 != 127LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = 2;
	int16_t x190 = -1570;
	volatile uint32_t x192 = 202U;

	t35 = ((x189|x190)+(x191*x192));

	if (t35 != 4288346590U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x194 = -10;
	volatile int16_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	uint64_t t36 = 4426LLU;

	t36 = ((x193|x194)+(x195*x196));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x197 = UINT8_MAX;
	int16_t x198 = INT16_MAX;
	volatile uint16_t x199 = 8U;
	int16_t x200 = -1;
	int32_t t37 = -3917;

	t37 = ((x197|x198)+(x199*x200));

	if (t37 != 32759) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x210 = 385162635851816169LL;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = -150917825;

	t38 = ((x209|x210)+(x211*x212));

	if (t38 != 385162636002734016LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = -1;
	static uint8_t x218 = 57U;
	volatile int64_t x219 = 13438LL;

	t39 = ((x217|x218)+(x219*x220));

	if (t39 != -13439LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = -1LL;
	int16_t x230 = 0;
	uint32_t x231 = 8433U;
	uint16_t x232 = UINT16_MAX;
	volatile int64_t t40 = -6696387LL;

	t40 = ((x229|x230)+(x231*x232));

	if (t40 != 552656654LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x233 = UINT16_MAX;
	static int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	int8_t x236 = 0;
	int32_t t41 = -164971748;

	t41 = ((x233|x234)+(x235*x236));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x237 = INT16_MIN;
	static int8_t x240 = 0;
	int32_t t42 = -26136;

	t42 = ((x237|x238)+(x239*x240));

	if (t42 != -29523) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MIN;
	uint16_t x247 = 19200U;
	volatile uint64_t x248 = 4372471522249044793LLU;
	static volatile uint64_t t43 = 66754451655978746LLU;

	t43 = ((x245|x246)+(x247*x248));

	if (t43 != 9544319766345396992LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MAX;
	static volatile int64_t x252 = -1LL;
	int64_t t44 = INT64_MIN;

	t44 = ((x249|x250)+(x251*x252));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x257 = INT32_MAX;
	static int8_t x258 = INT8_MIN;
	uint16_t x259 = 67U;
	volatile uint16_t x260 = UINT16_MAX;
	int32_t t45 = -2;

	t45 = ((x257|x258)+(x259*x260));

	if (t45 != 4390844) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MAX;
	int8_t x264 = 3;

	t46 = ((x261|x262)+(x263*x264));

	if (t46 != 341) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x267 = 23557534LL;
	uint64_t x268 = 58311613594LLU;
	static uint64_t t47 = 244143483525967415LLU;

	t47 = ((x265|x266)+(x267*x268));

	if (t47 != 1373677819835517068LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x273 = INT64_MIN;
	uint8_t x274 = 53U;
	int64_t x276 = -1LL;
	static int64_t t48 = -765174505552LL;

	t48 = ((x273|x274)+(x275*x276));

	if (t48 != -9223372036854775627LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x277 = 117U;
	uint8_t x278 = 6U;
	volatile int32_t x279 = -1;
	volatile uint64_t t49 = 4697495910622551055LLU;

	t49 = ((x277|x278)+(x279*x280));

	if (t49 != 118LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x281 = 0LL;
	uint64_t x283 = 6570132675790546LLU;
	volatile int8_t x284 = INT8_MAX;
	uint64_t t50 = 2494515LLU;

	t50 = ((x281|x282)+(x283*x284));

	if (t50 != 834406849825366574LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x285 = 0LLU;
	int64_t x286 = INT64_MAX;
	uint64_t x287 = 4495276688616264019LLU;
	static uint64_t t51 = 250807LLU;

	t51 = ((x285|x286)+(x287*x288));

	if (t51 != 12160640263908861825LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x289 = 30U;
	int8_t x290 = INT8_MIN;
	static int32_t x291 = -1;
	uint16_t x292 = 3U;
	volatile uint32_t t52 = 136U;

	t52 = ((x289|x290)+(x291*x292));

	if (t52 != 4294967195U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x297 = -2043;
	static uint32_t x298 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;
	uint64_t t53 = 53LLU;

	t53 = ((x297|x298)+(x299*x300));

	if (t53 != 4294964860LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x301 = INT64_MIN;
	static volatile int8_t x302 = INT8_MIN;
	volatile int16_t x304 = -3;

	t54 = ((x301|x302)+(x303*x304));

	if (t54 != -98429LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x305 = 1;
	int32_t x306 = 732616;
	int16_t x307 = -13;
	int8_t x308 = INT8_MIN;
	volatile int32_t t55 = -389253;

	t55 = ((x305|x306)+(x307*x308));

	if (t55 != 734281) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = -1;
	static volatile uint8_t x310 = 18U;
	uint64_t x311 = UINT64_MAX;
	static uint32_t x312 = UINT32_MAX;
	static uint64_t t56 = 770514554039969381LLU;

	t56 = ((x309|x310)+(x311*x312));

	if (t56 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x313 = -1LL;
	uint8_t x314 = 3U;
	volatile int16_t x315 = 14103;
	volatile int16_t x316 = -211;
	int64_t t57 = -1866556880171303LL;

	t57 = ((x313|x314)+(x315*x316));

	if (t57 != -2975734LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x318 = -107894410;
	int32_t x319 = -1;
	static volatile uint64_t x320 = 193LLU;

	t58 = ((x317|x318)+(x319*x320));

	if (t58 != 18446744073601657013LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x321 = INT32_MIN;
	int8_t x322 = 0;
	static int32_t x323 = 56754;
	volatile int64_t x324 = 0LL;
	volatile int64_t t59 = 43LL;

	t59 = ((x321|x322)+(x323*x324));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x325 = 40U;
	uint64_t x326 = 18783016772253LLU;
	static volatile int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	uint64_t t60 = 73603899982208LLU;

	t60 = ((x325|x326)+(x327*x328));

	if (t60 != 18783016772413LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x329 = 19262;
	int32_t x331 = INT32_MAX;

	t61 = ((x329|x330)+(x331*x332));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x333 = 1U;
	int32_t x334 = -5;
	int8_t x335 = INT8_MIN;
	int8_t x336 = 1;
	static int32_t t62 = 242;

	t62 = ((x333|x334)+(x335*x336));

	if (t62 != -133) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x337 = -55;
	volatile int16_t x338 = -1;
	int16_t x340 = -1;
	volatile uint32_t t63 = 1022U;

	t63 = ((x337|x338)+(x339*x340));

	if (t63 != 4294967164U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x341 = 7745567U;
	volatile int64_t t64 = 3278869176261709LL;

	t64 = ((x341|x342)+(x343*x344));

	if (t64 != -9223372036847095776LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x345 = INT32_MAX;
	static uint8_t x347 = 0U;
	int32_t x348 = -1;

	t65 = ((x345|x346)+(x347*x348));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x353 = UINT32_MAX;
	static uint16_t x354 = 3U;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	static volatile uint64_t t66 = 7LLU;

	t66 = ((x353|x354)+(x355*x356));

	if (t66 != 6442450943LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t67 = 794912971;

	t67 = ((x361|x362)+(x363*x364));

	if (t67 != 4194303) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x366 = INT8_MIN;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t t68 = -41641573491736LL;

	t68 = ((x365|x366)+(x367*x368));

	if (t68 != -2086634528LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x369 = 105117U;
	int32_t x370 = 15199;
	static volatile int64_t x372 = -193793LL;
	volatile int64_t t69 = -494637769399LL;

	t69 = ((x369|x370)+(x371*x372));

	if (t69 != -832334596886304LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 603U;
	uint16_t x380 = 71U;
	volatile int32_t t70 = 1;

	t70 = ((x377|x378)+(x379*x380));

	if (t70 != 10045) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x382 = INT64_MAX;
	int16_t x383 = -1;
	volatile int8_t x384 = INT8_MAX;
	volatile uint64_t t71 = 12281628992127370LLU;

	t71 = ((x381|x382)+(x383*x384));

	if (t71 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x388 = 0U;

	t72 = ((x385|x386)+(x387*x388));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x397 = 341U;
	int8_t x398 = 40;
	uint8_t x399 = 6U;
	uint8_t x400 = 13U;

	t73 = ((x397|x398)+(x399*x400));

	if (t73 != 459U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x401 = 25449U;
	int8_t x402 = -1;
	volatile uint32_t x403 = 145069876U;
	static uint8_t x404 = UINT8_MAX;

	t74 = ((x401|x402)+(x403*x404));

	if (t74 != 2633080011U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x405 = INT32_MIN;
	int32_t x406 = -420239111;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t75 = 19279389;

	t75 = ((x405|x406)+(x407*x408));

	if (t75 != 653502713) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x409 = 154699663089946LLU;
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = -3LL;
	volatile int16_t x412 = INT16_MIN;
	uint64_t t76 = 451LLU;

	t76 = ((x409|x410)+(x411*x412));

	if (t76 != 154699663245311LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x413 = 44984260640LLU;
	uint64_t x414 = UINT64_MAX;
	uint8_t x415 = 59U;
	int16_t x416 = INT16_MIN;
	uint64_t t77 = 13397624082523663LLU;

	t77 = ((x413|x414)+(x415*x416));

	if (t77 != 18446744073707618303LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MIN;
	volatile int32_t x420 = -15158574;

	t78 = ((x417|x418)+(x419*x420));

	if (t78 != 15158573LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x422 = UINT64_MAX;
	static int16_t x424 = -7;
	volatile uint64_t t79 = 80804941908326LLU;

	t79 = ((x421|x422)+(x423*x424));

	if (t79 != 895LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x433 = 8028583LLU;
	int16_t x434 = INT16_MIN;
	int32_t x435 = 511296;
	uint8_t x436 = 7U;

	t80 = ((x433|x434)+(x435*x436));

	if (t80 != 3546727LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = 47352590276LL;
	uint64_t x442 = UINT64_MAX;
	volatile int16_t x443 = INT16_MIN;
	int16_t x444 = -1;
	uint64_t t81 = 58551170LLU;

	t81 = ((x441|x442)+(x443*x444));

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x445 = 13U;
	int8_t x447 = 1;
	int32_t t82 = -525552071;

	t82 = ((x445|x446)+(x447*x448));

	if (t82 != -32513) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x449 = UINT16_MAX;
	int32_t x450 = 4510;
	int32_t t83 = 1408;

	t83 = ((x449|x450)+(x451*x452));

	if (t83 != -1867777) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x454 = INT64_MIN;
	volatile int16_t x455 = -1;
	volatile int64_t t84 = 6LL;

	t84 = ((x453|x454)+(x455*x456));

	if (t84 != -4126LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x459 = 4332;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t85 = 3240724391468834LLU;

	t85 = ((x457|x458)+(x459*x460));

	if (t85 != 18446744073708997119LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x470 = 5U;
	int8_t x471 = -1;
	static int8_t x472 = -1;
	volatile int32_t t86 = 0;

	t86 = ((x469|x470)+(x471*x472));

	if (t86 != -2147483642) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = 2;
	volatile uint8_t x479 = UINT8_MAX;
	static volatile int32_t t87 = -20339;

	t87 = ((x477|x478)+(x479*x480));

	if (t87 != 16711680) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = 6215LL;
	int64_t x484 = -1LL;

	t88 = ((x481|x482)+(x483*x484));

	if (t88 != -9223372036854769642LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x485 = 7;
	int32_t x486 = 89750901;
	int64_t x487 = -90844981LL;
	uint32_t x488 = UINT32_MAX;

	t89 = ((x485|x486)+(x487*x488));

	if (t89 != -390176222220145492LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x489 = -1LL;
	int64_t x490 = INT64_MIN;
	volatile int16_t x491 = 1;
	volatile int64_t t90 = -253212606319204680LL;

	t90 = ((x489|x490)+(x491*x492));

	if (t90 != -32769LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x493 = UINT16_MAX;
	int8_t x494 = 0;
	int64_t x495 = 1544732618LL;
	static int32_t x496 = 0;
	static int64_t t91 = 10330817875323042LL;

	t91 = ((x493|x494)+(x495*x496));

	if (t91 != 65535LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x497 = INT32_MIN;
	int64_t x498 = 678LL;
	uint32_t x500 = 855U;
	static volatile int64_t t92 = 385LL;

	t92 = ((x497|x498)+(x499*x500));

	if (t92 != -2091450545LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	uint64_t x508 = 242099413940586775LLU;
	volatile uint64_t t93 = 84972LLU;

	t93 = ((x505|x506)+(x507*x508));

	if (t93 != 12299881496744936041LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x509 = INT32_MIN;
	uint32_t x510 = 50087379U;
	uint64_t x511 = 82LLU;
	int64_t x512 = 584330035051LL;
	uint64_t t94 = 930380412555178LLU;

	t94 = ((x509|x510)+(x511*x512));

	if (t94 != 47917260445209LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = 44707721;
	volatile uint16_t x514 = UINT16_MAX;
	volatile uint64_t x515 = 1283576332545015541LLU;
	int64_t x516 = 1LL;
	volatile uint64_t t95 = 3LLU;

	t95 = ((x513|x514)+(x515*x516));

	if (t95 != 1283576332589776628LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = INT8_MAX;
	int16_t x518 = INT16_MIN;
	uint16_t x519 = 423U;
	static int8_t x520 = INT8_MAX;
	volatile int32_t t96 = 23;

	t96 = ((x517|x518)+(x519*x520));

	if (t96 != 21080) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x521 = -1834590098LL;
	int64_t x522 = -1LL;
	static int64_t t97 = 3665661569097064520LL;

	t97 = ((x521|x522)+(x523*x524));

	if (t97 != -4LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x525 = 91U;
	int8_t x526 = INT8_MAX;
	int64_t x527 = INT64_MAX;
	static volatile int32_t x528 = -1;
	int64_t t98 = 879593001932884LL;

	t98 = ((x525|x526)+(x527*x528));

	if (t98 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x529 = INT64_MIN;
	uint64_t x530 = UINT64_MAX;
	static volatile uint8_t x531 = UINT8_MAX;
	volatile int16_t x532 = INT16_MIN;
	volatile uint64_t t99 = 57834LLU;

	t99 = ((x529|x530)+(x531*x532));

	if (t99 != 18446744073701195775LLU) { NG(); } else { ; }
	
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

