#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 231761090602LLU;
int8_t x3 = INT8_MIN;
int64_t x8 = INT64_MIN;
static int64_t x15 = 313716021754773LL;
int8_t x17 = 0;
uint16_t x19 = 3U;
uint16_t x23 = UINT16_MAX;
volatile int32_t t5 = 7843;
volatile int32_t x25 = -6240;
volatile uint64_t t6 = 8600152LLU;
uint32_t x29 = UINT32_MAX;
uint16_t x32 = 4U;
uint16_t x34 = UINT16_MAX;
static uint64_t t8 = 2150684446927711799LLU;
static int16_t x38 = INT16_MIN;
static int8_t x43 = -1;
static int16_t x44 = 7;
int32_t x47 = 71637597;
volatile int64_t x63 = INT64_MIN;
int64_t x64 = INT64_MIN;
int64_t x75 = INT64_MAX;
uint64_t x77 = 64537989276125122LLU;
volatile uint64_t t18 = 167386125190694069LLU;
int32_t x81 = -452908;
uint64_t x84 = 262245234LLU;
int8_t x90 = -3;
static int64_t t20 = -535557165911876LL;
int16_t x96 = -6;
volatile uint32_t t21 = 30186826U;
static uint16_t x103 = 495U;
int16_t x113 = -25;
uint16_t x117 = 12081U;
static uint64_t t28 = 6922070848640LLU;
int32_t x135 = -1;
int32_t t31 = 7425837;
int8_t x150 = INT8_MAX;
uint16_t x152 = UINT16_MAX;
int32_t x153 = INT32_MAX;
uint64_t t35 = 21405681LLU;
uint64_t x159 = UINT64_MAX;
volatile uint64_t t36 = 295174928LLU;
volatile int64_t t37 = 34998LL;
int16_t x165 = 1;
int16_t x166 = INT16_MAX;
int32_t x169 = INT32_MAX;
uint16_t x170 = 305U;
static int8_t x174 = -1;
uint8_t x178 = UINT8_MAX;
int64_t x180 = -1LL;
int16_t x181 = INT16_MAX;
uint32_t x184 = 352264U;
int16_t x194 = INT16_MIN;
static uint32_t x207 = 908617933U;
int8_t x210 = INT8_MIN;
volatile int64_t x213 = 639655140LL;
volatile int16_t x214 = INT16_MIN;
int8_t x215 = 2;
int8_t x216 = -1;
int8_t x219 = INT8_MAX;
static volatile int32_t x223 = INT32_MIN;
int16_t x227 = INT16_MIN;
uint16_t x231 = 2U;
volatile int32_t x233 = INT32_MAX;
volatile int32_t t53 = INT32_MAX;
int64_t x240 = INT64_MIN;
uint8_t x241 = 1U;
uint32_t x261 = UINT32_MAX;
uint32_t x269 = UINT32_MAX;
static int8_t x278 = INT8_MIN;
static int32_t x280 = INT32_MAX;
int8_t x281 = 0;
volatile uint32_t x292 = 374074U;
uint32_t t67 = 864U;
uint32_t x297 = UINT32_MAX;
int64_t x304 = -48366483208214LL;
static uint64_t t69 = 3LLU;
int8_t x305 = 19;
static int8_t x306 = INT8_MIN;
uint8_t x307 = UINT8_MAX;
static volatile int64_t x314 = INT64_MIN;
uint64_t x316 = 43LLU;
int16_t x319 = INT16_MIN;
uint8_t x321 = UINT8_MAX;
int32_t x335 = INT32_MAX;
int8_t x346 = 1;
int32_t x349 = INT32_MIN;
int32_t x354 = INT32_MIN;
static uint8_t x355 = UINT8_MAX;
int64_t x361 = INT64_MIN;
int8_t x370 = 0;
uint32_t x374 = 14U;
uint32_t x375 = 5U;
volatile uint64_t t86 = 8959012441678402278LLU;
int64_t x377 = -1LL;
int8_t x383 = INT8_MIN;
uint32_t x386 = 34244U;
uint32_t x392 = 1U;
uint32_t t96 = UINT32_MAX;
uint8_t x422 = UINT8_MAX;


void f0(void) {
	static uint16_t x2 = 0U;
	uint16_t x4 = 264U;
	volatile uint64_t t0 = 67577465966385907LLU;

	t0 = (x1|((x2%x3)+x4));

	if (t0 != 231761090858LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int32_t x6 = -13;
	volatile uint64_t x7 = 1LLU;
	uint64_t t1 = 417064062154798LLU;

	t1 = (x5|((x6%x7)+x8));

	if (t1 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = 21120U;
	int16_t x11 = INT16_MAX;
	uint16_t x12 = 62U;
	volatile int32_t t2 = 53131113;

	t2 = (x9|((x10%x11)+x12));

	if (t2 != -66) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = 676559564369LL;
	volatile int8_t x16 = 26;
	static volatile int64_t t3 = 61808334134295060LL;

	t3 = (x13|((x14%x15)+x16));

	if (t3 != 676559564415LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 12U;
	volatile int64_t x20 = -18031225868712235LL;
	int64_t t4 = 42229944LL;

	t4 = (x17|((x18%x19)+x20));

	if (t4 != -18031225868712235LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	int32_t x24 = -166695928;

	t5 = (x21|((x22%x23)+x24));

	if (t5 != -5112) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 1086550041821803650LLU;
	uint64_t x27 = 263141LLU;
	int8_t x28 = INT8_MAX;

	t6 = (x25|((x26%x27)+x28));

	if (t6 != 18446744073709547452LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 347989688390LLU;
	int16_t x31 = 5972;
	static uint64_t t7 = 237587062LLU;

	t7 = (x29|((x30%x31)+x32));

	if (t7 != 4294967295LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static uint64_t x35 = 25877744162723463LLU;
	volatile int32_t x36 = 6386288;

	t8 = (x33|((x34%x35)+x36));

	if (t8 != 6451839LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	uint8_t x39 = 7U;
	uint8_t x40 = UINT8_MAX;
	volatile int64_t t9 = 16833LL;

	t9 = (x37|((x38%x39)+x40));

	if (t9 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint8_t x42 = 83U;
	volatile int32_t t10 = 29779525;

	t10 = (x41|((x42%x43)+x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 7U;
	int32_t x46 = -1;
	int16_t x48 = INT16_MIN;
	static uint32_t t11 = 63579U;

	t11 = (x45|((x46%x47)+x48));

	if (t11 != 4294934527U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -93407;
	uint64_t x50 = 88388LLU;
	int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = 133313973445356LLU;

	t12 = (x49|((x50%x51)+x52));

	if (t12 != 18446744073709476709LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 55257LL;
	uint64_t x54 = 108633768LLU;
	int64_t x55 = INT64_MIN;
	static int32_t x56 = -1;
	volatile uint64_t t13 = 3736099763144488LLU;

	t13 = (x53|((x54%x55)+x56));

	if (t13 != 108650495LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MAX;
	volatile int64_t t14 = -1852615429LL;

	t14 = (x61|((x62%x63)+x64));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = -63;
	volatile int8_t x66 = INT8_MIN;
	uint64_t x67 = 382372604761LLU;
	int32_t x68 = INT32_MAX;
	uint64_t t15 = 36373385995103728LLU;

	t15 = (x65|((x66%x67)+x68));

	if (t15 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MIN;
	int32_t x71 = 25920165;
	int16_t x72 = -1;
	volatile int32_t t16 = 5;

	t16 = (x69|((x70%x71)+x72));

	if (t16 != -22030119) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	uint8_t x74 = 1U;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x73|((x74%x75)+x76));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = -14060;
	int32_t x79 = -1;
	uint32_t x80 = 14U;

	t18 = (x77|((x78%x79)+x80));

	if (t18 != 64537989276125134LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = 1656;
	int8_t x83 = 4;
	uint64_t t19 = 17LLU;

	t19 = (x81|((x82%x83)+x84));

	if (t19 != 18446744073709133814LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -903674785949858LL;
	static uint8_t x91 = 1U;
	static int8_t x92 = -1;

	t20 = (x89|((x90%x91)+x92));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	static uint32_t x94 = UINT32_MAX;
	volatile int16_t x95 = -1;

	t21 = (x93|((x94%x95)+x96));

	if (t21 != 4294967290U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	static volatile int16_t x98 = -1;
	volatile int32_t x99 = INT32_MAX;
	int16_t x100 = -1;
	volatile int32_t t22 = -3;

	t22 = (x97|((x98%x99)+x100));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 811;
	int64_t x102 = 4153875485101891LL;
	int8_t x104 = -5;
	volatile int64_t t23 = -45655564000LL;

	t23 = (x101|((x102%x103)+x104));

	if (t23 != 1007LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 887LLU;
	int32_t x106 = -1;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -271213958;
	volatile uint64_t t24 = 15250902685365688LLU;

	t24 = (x105|((x106%x107)+x108));

	if (t24 != 18446744073438337919LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = 0U;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MAX;
	int8_t x112 = 1;
	int32_t t25 = -3;

	t25 = (x109|((x110%x111)+x112));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x114 = UINT32_MAX;
	int8_t x115 = -28;
	int8_t x116 = -4;
	volatile uint32_t t26 = 230U;

	t26 = (x113|((x114%x115)+x116));

	if (t26 != 4294967287U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = 0;
	volatile int64_t x119 = 1426788748094LL;
	volatile uint64_t x120 = 808818LLU;
	volatile uint64_t t27 = 731553167062LLU;

	t27 = (x117|((x118%x119)+x120));

	if (t27 != 819059LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 471LLU;
	uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = UINT8_MAX;

	t28 = (x121|((x122%x123)+x124));

	if (t28 != 471LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	volatile int8_t x126 = -7;
	int64_t x127 = -3LL;
	volatile int16_t x128 = -1;
	volatile int64_t t29 = 1831107426503449LL;

	t29 = (x125|((x126%x127)+x128));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -6;
	static uint8_t x130 = 103U;
	static volatile int16_t x131 = -1;
	int64_t x132 = INT64_MAX;
	static volatile int64_t t30 = -16814494406511LL;

	t30 = (x129|((x130%x131)+x132));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	int16_t x134 = -1;
	int8_t x136 = INT8_MAX;

	t31 = (x133|((x134%x135)+x136));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -32;
	static int64_t x138 = INT64_MIN;
	static volatile int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MAX;
	volatile int64_t t32 = 115129812342LL;

	t32 = (x137|((x138%x139)+x140));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 58U;
	uint8_t x146 = 2U;
	int64_t x147 = INT64_MIN;
	static int32_t x148 = -202;
	static int64_t t33 = 1339513018LL;

	t33 = (x145|((x146%x147)+x148));

	if (t33 != -198LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x151 = -3137;
	static volatile uint32_t t34 = UINT32_MAX;

	t34 = (x149|((x150%x151)+x152));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x154 = 1;
	uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 55U;

	t35 = (x153|((x154%x155)+x156));

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x157 = 7605;
	int8_t x158 = INT8_MIN;
	volatile int32_t x160 = 7355506;

	t36 = (x157|((x158%x159)+x160));

	if (t36 != 7356407LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x161 = INT8_MIN;
	int64_t x162 = -1LL;
	int64_t x163 = -812LL;
	uint16_t x164 = 86U;

	t37 = (x161|((x162%x163)+x164));

	if (t37 != -43LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x167 = 92U;
	int16_t x168 = 110;
	static int32_t t38 = -1;

	t38 = (x165|((x166%x167)+x168));

	if (t38 != 125) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = -1;
	int32_t t39 = INT32_MAX;

	t39 = (x169|((x170%x171)+x172));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x173 = 1;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x173|((x174%x175)+x176));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = -1;
	static volatile uint16_t x179 = 374U;
	volatile int64_t t41 = -73129440016043LL;

	t41 = (x177|((x178%x179)+x180));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = 63;
	volatile int16_t x183 = INT16_MAX;
	static uint32_t t42 = 153218U;

	t42 = (x181|((x182%x183)+x184));

	if (t42 != 360447U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	volatile int32_t x186 = 15868;
	uint64_t x187 = 20121LLU;
	int32_t x188 = INT32_MIN;
	volatile uint64_t t43 = 5021415LLU;

	t43 = (x185|((x186%x187)+x188));

	if (t43 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x193 = -1;
	static int64_t x195 = 22681LL;
	int32_t x196 = 51468766;
	int64_t t44 = 28588004216637006LL;

	t44 = (x193|((x194%x195)+x196));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = -266;
	volatile int64_t x199 = -1LL;
	int64_t x200 = 880824089469LL;
	static volatile int64_t t45 = -2087628293LL;

	t45 = (x197|((x198%x199)+x200));

	if (t45 != -3LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t46 = 450502857LLU;

	t46 = (x205|((x206%x207)+x208));

	if (t46 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 1U;
	int16_t x211 = INT16_MAX;
	int16_t x212 = -418;
	static uint32_t t47 = 117978795U;

	t47 = (x209|((x210%x211)+x212));

	if (t47 != 4294966751U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t t48 = 5499009898LL;

	t48 = (x213|((x214%x215)+x216));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = INT16_MAX;
	uint16_t x218 = UINT16_MAX;
	static uint16_t x220 = UINT16_MAX;
	int32_t t49 = -7;

	t49 = (x217|((x218%x219)+x220));

	if (t49 != 98303) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MIN;
	uint8_t x224 = 6U;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x221|((x222%x223)+x224));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MAX;
	uint32_t x226 = 6571U;
	volatile int32_t x228 = 42;
	uint32_t t51 = 13484U;

	t51 = (x225|((x226%x227)+x228));

	if (t51 != 32767U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int16_t x230 = INT16_MIN;
	int32_t x232 = -1;
	volatile int32_t t52 = 3323;

	t52 = (x229|((x230%x231)+x232));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x234 = 14U;
	uint16_t x235 = 6U;
	static int16_t x236 = INT16_MAX;

	t53 = (x233|((x234%x235)+x236));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x237 = 1650195120002LL;
	static uint64_t x238 = 1LLU;
	volatile int8_t x239 = INT8_MAX;
	volatile uint64_t t54 = 3590423084359LLU;

	t54 = (x237|((x238%x239)+x240));

	if (t54 != 9223373687049895811LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x242 = 0LL;
	static int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;
	static uint64_t t55 = UINT64_MAX;

	t55 = (x241|((x242%x243)+x244));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = 101792709;
	int64_t x246 = 15663200LL;
	volatile int64_t x247 = INT64_MIN;
	uint16_t x248 = 13461U;
	static int64_t t56 = -2645765888280855LL;

	t56 = (x245|((x246%x247)+x248));

	if (t56 != 117391349LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = -1LL;
	uint16_t x250 = 9U;
	static int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	volatile int64_t t57 = 1045012379498227727LL;

	t57 = (x249|((x250%x251)+x252));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = INT8_MAX;
	int8_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = -697855042;
	volatile uint64_t t58 = 7LLU;

	t58 = (x253|((x254%x255)+x256));

	if (t58 != 18446744073011696639LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int32_t x259 = INT32_MAX;
	uint32_t x260 = 168767U;
	int64_t t59 = 6LL;

	t59 = (x257|((x258%x259)+x260));

	if (t59 != -9223372036854607042LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x262 = UINT16_MAX;
	volatile int8_t x263 = 25;
	static uint32_t x264 = 30040U;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x261|((x262%x263)+x264));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	static int8_t x266 = 0;
	static volatile uint64_t x267 = 26275608308731860LLU;
	static uint16_t x268 = UINT16_MAX;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x265|((x266%x267)+x268));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x270 = 6LL;
	uint16_t x271 = 1U;
	static int32_t x272 = INT32_MIN;
	int64_t t62 = 157750004447795123LL;

	t62 = (x269|((x270%x271)+x272));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = UINT64_MAX;
	static int16_t x279 = -1312;
	uint64_t t63 = UINT64_MAX;

	t63 = (x277|((x278%x279)+x280));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x282 = 4;
	static int64_t x283 = INT64_MAX;
	int64_t x284 = -1LL;
	static volatile int64_t t64 = -199057605878LL;

	t64 = (x281|((x282%x283)+x284));

	if (t64 != 3LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x285 = UINT64_MAX;
	int16_t x286 = 3;
	volatile uint16_t x287 = UINT16_MAX;
	uint8_t x288 = 2U;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x285|((x286%x287)+x288));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x289 = UINT8_MAX;
	static volatile uint16_t x290 = 7223U;
	int32_t x291 = INT32_MAX;
	uint32_t t66 = 1001U;

	t66 = (x289|((x290%x291)+x292));

	if (t66 != 381439U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 1030737U;
	static uint16_t x294 = 9U;
	volatile int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MIN;

	t67 = (x293|((x294%x295)+x296));

	if (t67 != 2148514393U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x298 = -1LL;
	volatile int8_t x299 = INT8_MIN;
	int16_t x300 = -1;
	int64_t t68 = 248136510007725779LL;

	t68 = (x297|((x298%x299)+x300));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x301 = 25U;
	static volatile uint64_t x302 = 156361442LLU;
	uint32_t x303 = 712144U;

	t69 = (x301|((x302%x303)+x304));

	if (t69 != 18446695707226745309LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x308 = -588805755;
	static volatile int32_t t70 = -125233;

	t70 = (x305|((x306%x307)+x308));

	if (t70 != -588805865) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = -1;
	uint8_t x315 = 93U;
	static volatile uint64_t t71 = UINT64_MAX;

	t71 = (x313|((x314%x315)+x316));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x317 = 1955U;
	int8_t x318 = -9;
	int64_t x320 = 19LL;
	int64_t t72 = -504563918740243703LL;

	t72 = (x317|((x318%x319)+x320));

	if (t72 != 1963LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x322 = -24253896;
	int8_t x323 = -3;
	int64_t x324 = INT64_MIN;
	volatile int64_t t73 = -4196265077720071LL;

	t73 = (x321|((x322%x323)+x324));

	if (t73 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MAX;
	static uint8_t x327 = UINT8_MAX;
	volatile int32_t x328 = INT32_MIN;
	static uint64_t t74 = UINT64_MAX;

	t74 = (x325|((x326%x327)+x328));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = INT64_MIN;
	static volatile int32_t x330 = INT32_MAX;
	int8_t x331 = -51;
	static int64_t x332 = 141404LL;
	int64_t t75 = 38855120LL;

	t75 = (x329|((x330%x331)+x332));

	if (t75 != -9223372036854634379LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x333 = 7U;
	volatile uint16_t x334 = 266U;
	volatile uint8_t x336 = 1U;
	volatile int32_t t76 = -151193;

	t76 = (x333|((x334%x335)+x336));

	if (t76 != 271) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 6U;
	uint32_t t77 = 1902U;

	t77 = (x337|((x338%x339)+x340));

	if (t77 != 4294967174U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x341 = INT16_MAX;
	volatile int16_t x342 = -1;
	static int32_t x343 = -1;
	volatile int32_t x344 = INT32_MAX;
	int32_t t78 = INT32_MAX;

	t78 = (x341|((x342%x343)+x344));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = -1;
	uint32_t x347 = 6334083U;
	int64_t x348 = 7774056341LL;
	volatile int64_t t79 = 30LL;

	t79 = (x345|((x346%x347)+x348));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x350 = 241U;
	int32_t x351 = INT32_MIN;
	int64_t x352 = 548107934355LL;
	int64_t t80 = 73311226525119720LL;

	t80 = (x349|((x350%x351)+x352));

	if (t80 != -1647879292LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = 2461LLU;
	uint64_t x356 = 0LLU;
	static volatile uint64_t t81 = 720LLU;

	t81 = (x353|((x354%x355)+x356));

	if (t81 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x357 = 1;
	uint8_t x358 = 46U;
	uint32_t x359 = 31U;
	int8_t x360 = 1;
	uint32_t t82 = 7543313U;

	t82 = (x357|((x358%x359)+x360));

	if (t82 != 17U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x362 = 6538829699LLU;
	volatile uint32_t x363 = 831420166U;
	int16_t x364 = -1;
	uint64_t t83 = 944LLU;

	t83 = (x361|((x362%x363)+x364));

	if (t83 != 9223372037573664344LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x365 = 5;
	int64_t x366 = INT64_MAX;
	static int16_t x367 = INT16_MAX;
	int16_t x368 = INT16_MIN;
	volatile int64_t t84 = 196890534317918LL;

	t84 = (x365|((x366%x367)+x368));

	if (t84 != -32761LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = 830446;
	int8_t x371 = -1;
	int8_t x372 = 1;
	static int32_t t85 = 12099745;

	t85 = (x369|((x370%x371)+x372));

	if (t85 != 830447) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = 940956112768995LLU;
	uint8_t x376 = 2U;

	t86 = (x373|((x374%x375)+x376));

	if (t86 != 940956112768999LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x378 = INT32_MIN;
	int64_t x379 = -842700072654072LL;
	int64_t x380 = INT64_MAX;
	volatile int64_t t87 = -21590LL;

	t87 = (x377|((x378%x379)+x380));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = 123U;
	int32_t x384 = 15843542;
	volatile int32_t t88 = 158;

	t88 = (x381|((x382%x383)+x384));

	if (t88 != 15843711) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = INT64_MIN;
	int16_t x387 = -393;
	int32_t x388 = INT32_MIN;
	static int64_t t89 = -132973342LL;

	t89 = (x385|((x386%x387)+x388));

	if (t89 != -9223372034707257916LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	int32_t x391 = -1;
	volatile int64_t t90 = -3277415343021961208LL;

	t90 = (x389|((x390%x391)+x392));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = INT16_MAX;
	int8_t x394 = -1;
	int32_t x395 = 4867;
	uint64_t x396 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (x393|((x394%x395)+x396));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x397 = 1087U;
	int16_t x398 = -1;
	int64_t x399 = INT64_MAX;
	int16_t x400 = -1;
	volatile int64_t t92 = 882247LL;

	t92 = (x397|((x398%x399)+x400));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x401 = -1;
	static int8_t x402 = 17;
	volatile int64_t x403 = -3902921660638902217LL;
	int16_t x404 = INT16_MIN;
	volatile int64_t t93 = 985899013268LL;

	t93 = (x401|((x402%x403)+x404));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x405 = 5;
	static int64_t x406 = -57LL;
	uint32_t x407 = 740U;
	uint32_t x408 = UINT32_MAX;
	static volatile int64_t t94 = -6178533600346560LL;

	t94 = (x405|((x406%x407)+x408));

	if (t94 != 4294967239LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x413 = 6LL;
	int64_t x414 = -1LL;
	int32_t x415 = 6313114;
	int8_t x416 = INT8_MIN;
	volatile int64_t t95 = 260332LL;

	t95 = (x413|((x414%x415)+x416));

	if (t95 != -129LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x417 = -1;
	uint32_t x418 = 1168896U;
	int32_t x419 = INT32_MIN;
	volatile int32_t x420 = INT32_MAX;

	t96 = (x417|((x418%x419)+x420));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x421 = 1082U;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t97 = 83LLU;

	t97 = (x421|((x422%x423)+x424));

	if (t97 != 1150LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 289U;
	volatile int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	int8_t x428 = INT8_MAX;
	static int64_t t98 = 67257398868471252LL;

	t98 = (x425|((x426%x427)+x428));

	if (t98 != 383LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 383583U;
	static uint32_t x430 = 271122155U;
	uint8_t x431 = UINT8_MAX;
	int32_t x432 = -1;
	uint32_t t99 = 15084157U;

	t99 = (x429|((x430%x431)+x432));

	if (t99 != 383615U) { NG(); } else { ; }
	
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

