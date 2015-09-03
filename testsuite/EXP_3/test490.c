#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 892464;
static int32_t t1 = 1574;
uint16_t x16 = 111U;
static volatile int8_t x18 = 7;
static volatile int64_t x28 = 1814LL;
int32_t x35 = -1;
volatile uint64_t x38 = 578293LLU;
int8_t x39 = -1;
uint16_t x49 = 2690U;
uint8_t x50 = 25U;
uint8_t x51 = UINT8_MAX;
uint16_t x55 = 859U;
int8_t x63 = INT8_MIN;
uint8_t x76 = 27U;
uint8_t x77 = 25U;
static int8_t x79 = INT8_MIN;
volatile uint16_t x93 = UINT16_MAX;
static volatile uint8_t x107 = 98U;
uint16_t x108 = UINT16_MAX;
static uint64_t x110 = UINT64_MAX;
int32_t t22 = -189;
static int16_t x113 = INT16_MAX;
static uint16_t x116 = 9U;
int32_t x123 = INT32_MAX;
volatile int32_t x124 = -1;
int16_t x126 = 2747;
int8_t x131 = INT8_MIN;
uint16_t x143 = 14U;
volatile int32_t t28 = 220838305;
uint16_t x147 = UINT16_MAX;
int32_t t30 = 1546;
uint16_t x153 = 3U;
uint8_t x154 = 10U;
volatile int32_t t34 = 13;
int64_t x173 = -75502438596LL;
uint8_t x177 = 70U;
volatile int32_t t36 = 4534341;
int32_t x182 = 584045;
volatile int16_t x184 = INT16_MIN;
volatile int32_t t37 = -21902228;
volatile uint64_t x186 = UINT64_MAX;
uint64_t x189 = UINT64_MAX;
static int16_t x193 = INT16_MAX;
int8_t x195 = -62;
int32_t t42 = -1;
volatile int32_t t44 = 3615;
uint16_t x224 = UINT16_MAX;
int64_t x234 = -1LL;
static uint32_t x253 = 1650U;
int16_t x254 = INT16_MAX;
uint64_t x256 = 195268430432LLU;
volatile int64_t x276 = -1LL;
volatile uint8_t x288 = 1U;
volatile int32_t t52 = -3;
int16_t x291 = 508;
volatile int32_t x295 = INT32_MAX;
uint8_t x296 = 0U;
volatile uint8_t x297 = 13U;
uint16_t x300 = UINT16_MAX;
int64_t x305 = 6782980723LL;
uint32_t x307 = UINT32_MAX;
uint16_t x315 = 176U;
uint16_t x317 = 7U;
uint8_t x320 = 6U;
int32_t t58 = -55;
int64_t x321 = -10286028283LL;
int64_t x323 = -1LL;
int8_t x334 = 1;
volatile int32_t t61 = -46916;
volatile uint8_t x338 = 125U;
int16_t x339 = INT16_MAX;
int8_t x347 = 27;
static volatile uint64_t x349 = 14836355LLU;
static volatile int32_t t64 = -3501445;
volatile int32_t t67 = 1441;
volatile uint16_t x369 = 36U;
int32_t x411 = -43;
static int32_t t74 = -10535955;
static uint16_t x422 = 3U;
uint32_t x423 = 65U;
uint32_t x428 = 15U;
int32_t t80 = -57;
static int16_t x451 = -16346;
uint64_t x457 = 193773597LLU;
volatile int64_t x459 = 18077910LL;
int32_t t86 = -679365538;
volatile uint32_t x477 = 48U;
int16_t x480 = -6;
static int32_t t89 = 4466;
uint32_t x499 = 474805074U;
int64_t x500 = -127226LL;
static int32_t x507 = 2386;
uint16_t x515 = 86U;
uint16_t x529 = 1U;
uint32_t x532 = 1228087U;
int64_t x536 = -1LL;


void f0(void) {
	static volatile uint32_t x1 = 350033U;
	uint16_t x2 = 28420U;
	uint64_t x3 = 1111994520542508LLU;
	int32_t x4 = INT32_MAX;

	t0 = ((x1|x2)<(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 3;
	static int64_t x6 = INT64_MIN;
	int8_t x7 = -1;
	int8_t x8 = -1;

	t1 = ((x5|x6)<(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -1;
	uint16_t x10 = 104U;
	uint64_t x11 = 423363827416LLU;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -42612;

	t2 = ((x9|x10)<(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile int16_t x14 = -1;
	uint64_t x15 = 1702LLU;
	int32_t t3 = -148;

	t3 = ((x13|x14)<(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -42;
	volatile int64_t x19 = 74834877184LL;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -212623;

	t4 = ((x17|x18)<(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	volatile uint8_t x22 = 2U;
	static int16_t x23 = INT16_MIN;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = -793;

	t5 = ((x21|x22)<(x23*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = 0;
	volatile int16_t x27 = 0;
	volatile int32_t t6 = 4575;

	t6 = ((x25|x26)<(x27*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -113704474094888LL;
	uint8_t x34 = 65U;
	static int32_t x36 = -25155479;
	static volatile int32_t t7 = -125;

	t7 = ((x33|x34)<(x35*x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 4U;
	volatile uint64_t x40 = UINT64_MAX;
	int32_t t8 = 573143594;

	t8 = ((x37|x38)<(x39*x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = 1U;
	volatile int8_t x42 = 1;
	static int32_t x43 = INT32_MAX;
	volatile uint64_t x44 = 7973522918547233744LLU;
	int32_t t9 = -647902744;

	t9 = ((x41|x42)<(x43*x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	static int32_t x47 = INT32_MIN;
	uint32_t x48 = 98071852U;
	static volatile int32_t t10 = 0;

	t10 = ((x45|x46)<(x47*x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x52 = 372203845624034807LLU;
	int32_t t11 = -16843;

	t11 = ((x49|x50)<(x51*x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 74728689U;
	int32_t x54 = 1;
	uint8_t x56 = 7U;
	volatile int32_t t12 = 1;

	t12 = ((x53|x54)<(x55*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -32173;
	volatile uint64_t x62 = 11127LLU;
	uint16_t x64 = 386U;
	int32_t t13 = -124;

	t13 = ((x61|x62)<(x63*x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -8880;
	int16_t x71 = 30;
	volatile uint32_t x72 = 931507U;
	volatile int32_t t14 = 237984021;

	t14 = ((x69|x70)<(x71*x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x73 = 14667U;
	uint8_t x74 = 0U;
	int32_t x75 = 838882;
	int32_t t15 = 2903;

	t15 = ((x73|x74)<(x75*x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x78 = 7U;
	int64_t x80 = 16462705075661LL;
	volatile int32_t t16 = 990863;

	t16 = ((x77|x78)<(x79*x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 33U;
	volatile uint32_t x82 = 37U;
	volatile int32_t x83 = -1;
	int16_t x84 = 696;
	static volatile int32_t t17 = -256952111;

	t17 = ((x81|x82)<(x83*x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = UINT8_MAX;
	volatile uint32_t x90 = 3140U;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 7U;
	static volatile int32_t t18 = -271746;

	t18 = ((x89|x90)<(x91*x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x94 = 21U;
	int32_t x95 = -26;
	uint16_t x96 = UINT16_MAX;
	int32_t t19 = -7992;

	t19 = ((x93|x94)<(x95*x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = 3620523099520LLU;
	int8_t x103 = 2;
	static int64_t x104 = -2484509264752429015LL;
	int32_t t20 = 452024;

	t20 = ((x101|x102)<(x103*x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	volatile int32_t x106 = INT32_MAX;
	volatile int32_t t21 = -108;

	t21 = ((x105|x106)<(x107*x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;

	t22 = ((x109|x110)<(x111*x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 17U;
	volatile int32_t t23 = 1897942;

	t23 = ((x113|x114)<(x115*x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	volatile int32_t x118 = INT32_MIN;
	uint8_t x119 = 32U;
	static int8_t x120 = 0;
	static int32_t t24 = -14825;

	t24 = ((x117|x118)<(x119*x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x121 = 106U;
	volatile uint16_t x122 = UINT16_MAX;
	int32_t t25 = 25351;

	t25 = ((x121|x122)<(x123*x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = -1;
	int16_t x127 = 279;
	static int16_t x128 = -1;
	volatile int32_t t26 = -15;

	t26 = ((x125|x126)<(x127*x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 0U;
	static uint64_t x130 = 17917020184LLU;
	static int64_t x132 = -17609751951LL;
	int32_t t27 = 893473;

	t27 = ((x129|x130)<(x131*x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = UINT32_MAX;
	uint16_t x142 = UINT16_MAX;
	volatile int64_t x144 = -1LL;

	t28 = ((x141|x142)<(x143*x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = -1;
	static uint32_t x146 = 21943U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t29 = 227;

	t29 = ((x145|x146)<(x147*x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = -53;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MIN;

	t30 = ((x149|x150)<(x151*x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MIN;
	int32_t t31 = 403244;

	t31 = ((x153|x154)<(x155*x156));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x157 = INT32_MIN;
	volatile uint8_t x158 = 48U;
	uint16_t x159 = UINT16_MAX;
	volatile int16_t x160 = -1;
	int32_t t32 = 0;

	t32 = ((x157|x158)<(x159*x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -2;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 7LLU;
	int64_t x164 = -1LL;
	static volatile int32_t t33 = -2145;

	t33 = ((x161|x162)<(x163*x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x169 = 1;
	static int8_t x170 = INT8_MIN;
	int16_t x171 = 2305;
	uint16_t x172 = 768U;

	t34 = ((x169|x170)<(x171*x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x174 = INT8_MAX;
	volatile int8_t x175 = INT8_MIN;
	int8_t x176 = 0;
	int32_t t35 = 3399;

	t35 = ((x173|x174)<(x175*x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MAX;
	volatile uint32_t x180 = UINT32_MAX;

	t36 = ((x177|x178)<(x179*x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	static int32_t x183 = -32;

	t37 = ((x181|x182)<(x183*x184));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MAX;
	uint32_t x187 = 13128536U;
	static volatile uint16_t x188 = 104U;
	int32_t t38 = 52;

	t38 = ((x185|x186)<(x187*x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x190 = 0;
	int32_t x191 = -47;
	uint8_t x192 = UINT8_MAX;
	static int32_t t39 = 1;

	t39 = ((x189|x190)<(x191*x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x194 = 48U;
	static uint16_t x196 = 5445U;
	int32_t t40 = -111986414;

	t40 = ((x193|x194)<(x195*x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	int16_t x199 = 0;
	int64_t x200 = 14524580968371LL;
	static int32_t t41 = -100;

	t41 = ((x197|x198)<(x199*x200));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	volatile int64_t x202 = INT64_MIN;
	int32_t x203 = -11902112;
	uint64_t x204 = 39814702LLU;

	t42 = ((x201|x202)<(x203*x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	int32_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	static uint64_t x208 = UINT64_MAX;
	static volatile int32_t t43 = 7;

	t43 = ((x205|x206)<(x207*x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = -11405;
	int8_t x218 = -1;
	static uint8_t x219 = UINT8_MAX;
	volatile int64_t x220 = -1LL;

	t44 = ((x217|x218)<(x219*x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x221 = 1;
	volatile int8_t x222 = INT8_MIN;
	int8_t x223 = 30;
	volatile int32_t t45 = -603130;

	t45 = ((x221|x222)<(x223*x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = INT32_MIN;
	static uint64_t x235 = 1023449774574198LLU;
	uint64_t x236 = UINT64_MAX;
	int32_t t46 = 13995915;

	t46 = ((x233|x234)<(x235*x236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x237 = -4826823LL;
	volatile int8_t x238 = 31;
	int32_t x239 = -184853831;
	uint64_t x240 = 4691752064LLU;
	volatile int32_t t47 = 352;

	t47 = ((x237|x238)<(x239*x240));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x245 = 5;
	volatile int32_t x246 = 1223929;
	int32_t x247 = -1;
	uint64_t x248 = 34676004580LLU;
	int32_t t48 = 32750399;

	t48 = ((x245|x246)<(x247*x248));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x255 = 30795391484488LLU;
	volatile int32_t t49 = -1036267692;

	t49 = ((x253|x254)<(x255*x256));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x261 = -15;
	int8_t x262 = 2;
	uint64_t x263 = 4343103512295LLU;
	uint64_t x264 = UINT64_MAX;
	int32_t t50 = -16;

	t50 = ((x261|x262)<(x263*x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MIN;
	static int8_t x274 = INT8_MIN;
	static int32_t x275 = -1;
	volatile int32_t t51 = 98740;

	t51 = ((x273|x274)<(x275*x276));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = -1;
	int16_t x286 = -705;
	int64_t x287 = INT64_MAX;

	t52 = ((x285|x286)<(x287*x288));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MIN;
	uint64_t x292 = 6900762157127LLU;
	volatile int32_t t53 = -10047;

	t53 = ((x289|x290)<(x291*x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x293 = -1LL;
	static uint8_t x294 = UINT8_MAX;
	int32_t t54 = 131;

	t54 = ((x293|x294)<(x295*x296));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x298 = INT8_MAX;
	volatile uint8_t x299 = 76U;
	volatile int32_t t55 = -59890;

	t55 = ((x297|x298)<(x299*x300));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x306 = -113;
	int32_t x308 = INT32_MIN;
	int32_t t56 = -63;

	t56 = ((x305|x306)<(x307*x308));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = 1090;
	int32_t x314 = -1;
	static volatile int8_t x316 = INT8_MIN;
	static int32_t t57 = -597041438;

	t57 = ((x313|x314)<(x315*x316));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;

	t58 = ((x317|x318)<(x319*x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x322 = INT32_MAX;
	int32_t x324 = -38634486;
	volatile int32_t t59 = -6862007;

	t59 = ((x321|x322)<(x323*x324));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x325 = UINT32_MAX;
	int64_t x326 = 75467245801LL;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	volatile int32_t t60 = 276622;

	t60 = ((x325|x326)<(x327*x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = INT64_MIN;
	uint16_t x335 = 9546U;
	int8_t x336 = INT8_MIN;

	t61 = ((x333|x334)<(x335*x336));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x337 = 1720045LLU;
	uint8_t x340 = UINT8_MAX;
	static int32_t t62 = -17215547;

	t62 = ((x337|x338)<(x339*x340));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = UINT64_MAX;
	static volatile int8_t x346 = INT8_MIN;
	volatile uint16_t x348 = 2U;
	static volatile int32_t t63 = 183;

	t63 = ((x345|x346)<(x347*x348));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = 24;
	uint8_t x352 = 2U;

	t64 = ((x349|x350)<(x351*x352));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x353 = 2U;
	int16_t x354 = INT16_MAX;
	static int64_t x355 = INT64_MAX;
	static int8_t x356 = 1;
	int32_t t65 = 710;

	t65 = ((x353|x354)<(x355*x356));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x357 = 1921U;
	static volatile int32_t x358 = INT32_MIN;
	int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	volatile int32_t t66 = -648;

	t66 = ((x357|x358)<(x359*x360));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x361 = UINT16_MAX;
	volatile int64_t x362 = -1LL;
	uint64_t x363 = 1107697LLU;
	int64_t x364 = INT64_MIN;

	t67 = ((x361|x362)<(x363*x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x370 = INT16_MIN;
	int32_t x371 = 886710;
	static int16_t x372 = 105;
	volatile int32_t t68 = 630;

	t68 = ((x369|x370)<(x371*x372));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x377 = UINT16_MAX;
	uint8_t x378 = 40U;
	static uint16_t x379 = 2U;
	volatile uint16_t x380 = 2U;
	int32_t t69 = -23074101;

	t69 = ((x377|x378)<(x379*x380));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x389 = INT8_MIN;
	int16_t x390 = -7808;
	volatile uint64_t x391 = UINT64_MAX;
	volatile int64_t x392 = INT64_MAX;
	volatile int32_t t70 = -4349;

	t70 = ((x389|x390)<(x391*x392));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x402 = -1;
	static uint16_t x403 = 754U;
	static volatile int8_t x404 = -1;
	static int32_t t71 = -600311052;

	t71 = ((x401|x402)<(x403*x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x405 = -86LL;
	static uint16_t x406 = 18368U;
	uint16_t x407 = UINT16_MAX;
	uint8_t x408 = 25U;
	volatile int32_t t72 = -15;

	t72 = ((x405|x406)<(x407*x408));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x409 = 3458U;
	int16_t x410 = INT16_MIN;
	volatile int8_t x412 = INT8_MIN;
	int32_t t73 = -3544;

	t73 = ((x409|x410)<(x411*x412));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x417 = 35802988LL;
	volatile uint32_t x418 = 423161086U;
	uint32_t x419 = 0U;
	int64_t x420 = -400LL;

	t74 = ((x417|x418)<(x419*x420));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x421 = INT32_MAX;
	volatile uint64_t x424 = 1627384LLU;
	int32_t t75 = -22;

	t75 = ((x421|x422)<(x423*x424));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x425 = 89U;
	int16_t x426 = INT16_MIN;
	volatile uint64_t x427 = 114653LLU;
	static int32_t t76 = -2;

	t76 = ((x425|x426)<(x427*x428));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x429 = -1;
	uint64_t x430 = 7577274629LLU;
	uint8_t x431 = 1U;
	uint8_t x432 = 4U;
	volatile int32_t t77 = 63326;

	t77 = ((x429|x430)<(x431*x432));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x433 = 1;
	static volatile int16_t x434 = 753;
	static int8_t x435 = INT8_MIN;
	uint64_t x436 = UINT64_MAX;
	static int32_t t78 = -1;

	t78 = ((x433|x434)<(x435*x436));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MAX;
	int16_t x443 = 36;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t79 = 510400;

	t79 = ((x441|x442)<(x443*x444));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x445 = -1;
	volatile uint8_t x446 = 4U;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 446449478LLU;

	t80 = ((x445|x446)<(x447*x448));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x449 = 0;
	int64_t x450 = -1LL;
	uint64_t x452 = 282296111LLU;
	volatile int32_t t81 = -1;

	t81 = ((x449|x450)<(x451*x452));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x454 = UINT8_MAX;
	static int16_t x455 = INT16_MAX;
	volatile int32_t x456 = -1;
	static int32_t t82 = 284578615;

	t82 = ((x453|x454)<(x455*x456));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x458 = -2127908LL;
	int16_t x460 = INT16_MIN;
	volatile int32_t t83 = 335;

	t83 = ((x457|x458)<(x459*x460));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x461 = 6;
	int16_t x462 = INT16_MIN;
	volatile uint64_t x463 = 10283521LLU;
	static volatile uint32_t x464 = 52U;
	int32_t t84 = -900501869;

	t84 = ((x461|x462)<(x463*x464));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x469 = 222U;
	uint32_t x470 = UINT32_MAX;
	volatile int16_t x471 = INT16_MAX;
	int32_t x472 = -14;
	volatile int32_t t85 = -93491134;

	t85 = ((x469|x470)<(x471*x472));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = -1;
	volatile int16_t x474 = INT16_MIN;
	volatile uint16_t x475 = 2U;
	volatile uint16_t x476 = 944U;

	t86 = ((x473|x474)<(x475*x476));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x478 = UINT16_MAX;
	uint32_t x479 = UINT32_MAX;
	static volatile int32_t t87 = -24262751;

	t87 = ((x477|x478)<(x479*x480));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x481 = -1;
	static int8_t x482 = -1;
	int32_t x483 = -1;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t88 = -896097876;

	t88 = ((x481|x482)<(x483*x484));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x485 = INT16_MIN;
	static int32_t x486 = INT32_MIN;
	uint32_t x487 = 4157383U;
	int8_t x488 = 28;

	t89 = ((x485|x486)<(x487*x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = INT8_MAX;
	volatile uint64_t x494 = UINT64_MAX;
	uint64_t x495 = 2002444268LLU;
	int32_t x496 = INT32_MIN;
	int32_t t90 = 4030031;

	t90 = ((x493|x494)<(x495*x496));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x497 = -3;
	int32_t x498 = INT32_MIN;
	volatile int32_t t91 = 113573;

	t91 = ((x497|x498)<(x499*x500));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x505 = UINT8_MAX;
	uint64_t x506 = 32LLU;
	static int16_t x508 = -1;
	volatile int32_t t92 = 9967;

	t92 = ((x505|x506)<(x507*x508));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x509 = INT32_MIN;
	int64_t x510 = INT64_MIN;
	uint64_t x511 = UINT64_MAX;
	int64_t x512 = INT64_MAX;
	static volatile int32_t t93 = -528218603;

	t93 = ((x509|x510)<(x511*x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x513 = UINT16_MAX;
	uint8_t x514 = 20U;
	volatile uint32_t x516 = 2U;
	volatile int32_t t94 = -3918650;

	t94 = ((x513|x514)<(x515*x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x517 = -838;
	int32_t x518 = INT32_MIN;
	int8_t x519 = INT8_MIN;
	int16_t x520 = -1483;
	volatile int32_t t95 = 2;

	t95 = ((x517|x518)<(x519*x520));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x521 = INT64_MIN;
	volatile int32_t x522 = INT32_MIN;
	static uint64_t x523 = 929700256249573LLU;
	uint8_t x524 = UINT8_MAX;
	int32_t t96 = -129448;

	t96 = ((x521|x522)<(x523*x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x525 = 1LL;
	uint8_t x526 = 1U;
	int8_t x527 = INT8_MIN;
	static int16_t x528 = 0;
	int32_t t97 = 30780;

	t97 = ((x525|x526)<(x527*x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x530 = -1LL;
	int32_t x531 = INT32_MAX;
	int32_t t98 = -150;

	t98 = ((x529|x530)<(x531*x532));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = INT32_MAX;
	static volatile int32_t x534 = INT32_MIN;
	uint64_t x535 = 3822732135349314LLU;
	static volatile int32_t t99 = -1001080292;

	t99 = ((x533|x534)<(x535*x536));

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

