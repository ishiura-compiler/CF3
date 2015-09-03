#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
volatile int32_t x4 = INT32_MAX;
int16_t x5 = 1;
volatile int32_t x7 = INT32_MIN;
int64_t x8 = INT64_MAX;
static int8_t x13 = 0;
static int8_t x23 = -1;
static int64_t x24 = INT64_MAX;
uint8_t x28 = UINT8_MAX;
int16_t x33 = INT16_MIN;
static int32_t t8 = -1757206;
int64_t x48 = INT64_MIN;
static volatile int64_t t11 = INT64_MIN;
int16_t x50 = 10188;
uint8_t x53 = 17U;
int8_t x54 = INT8_MIN;
uint32_t x61 = UINT32_MAX;
static uint32_t x65 = 3711U;
int64_t x68 = -2829797361965LL;
uint64_t x72 = 5494116319992LLU;
int8_t x73 = INT8_MIN;
int32_t x78 = INT32_MIN;
int64_t t19 = -11657124570547261LL;
int32_t t20 = 10;
static int64_t x89 = -1LL;
uint8_t x92 = 7U;
static int8_t x100 = -1;
volatile int32_t t23 = 1;
static volatile int64_t t25 = INT64_MIN;
int32_t x115 = INT32_MAX;
int8_t x117 = -1;
uint16_t x121 = 10U;
uint64_t x124 = 859318165130710LLU;
volatile int16_t x138 = -1;
static uint16_t x139 = UINT16_MAX;
static int8_t x140 = INT8_MIN;
volatile int64_t x141 = INT64_MAX;
int64_t x143 = -981LL;
int8_t x149 = INT8_MIN;
static int64_t x150 = INT64_MIN;
static volatile int16_t x153 = INT16_MAX;
int8_t x157 = INT8_MIN;
int8_t x159 = INT8_MIN;
static int64_t x161 = -1LL;
static int64_t x162 = -1LL;
uint32_t x165 = 29405U;
int16_t x167 = -28;
int8_t x174 = INT8_MIN;
volatile int32_t t42 = -3;
static int64_t x177 = -1LL;
int64_t x185 = INT64_MIN;
static volatile int16_t x187 = INT16_MIN;
uint32_t t45 = 0U;
int64_t x192 = -902LL;
static uint64_t x194 = 4394LLU;
int16_t x197 = INT16_MIN;
uint64_t x198 = 2501318118LLU;
int16_t x199 = -1;
int64_t t50 = INT64_MIN;
volatile int8_t x210 = INT8_MAX;
int16_t x214 = INT16_MAX;
int8_t x215 = 37;
int64_t x218 = INT64_MIN;
int8_t x219 = INT8_MIN;
int64_t x225 = -1LL;
int32_t x228 = 22520;
int8_t x232 = -1;
uint32_t x241 = UINT32_MAX;
static uint16_t x245 = UINT16_MAX;
int64_t x253 = INT64_MIN;
volatile uint64_t x256 = 7565594384LLU;
int64_t x264 = INT64_MAX;
int16_t x266 = 7;
static uint32_t x268 = 4U;
static volatile uint16_t x273 = 170U;
volatile uint32_t x276 = 13U;
uint32_t x277 = 556734U;
int32_t x279 = -1;
int8_t x282 = -1;
volatile int64_t t69 = 6429036227912435LL;
int32_t x285 = INT32_MIN;
volatile uint64_t x286 = UINT64_MAX;
static int64_t x297 = -1LL;
int32_t x299 = -1;
int32_t t74 = -605433;
static volatile int64_t x310 = -1LL;
static int8_t x312 = INT8_MIN;
int64_t x314 = INT64_MIN;
static int8_t x316 = INT8_MIN;
static volatile int32_t t78 = -1072;
static int64_t x323 = 1204650546552LL;
static volatile uint8_t x325 = 19U;
static volatile int64_t x328 = -56LL;
volatile int64_t t80 = 143107986486LL;
int32_t x332 = -1;
int8_t x336 = -7;
static int32_t x337 = INT32_MIN;
int16_t x339 = 0;
uint8_t x340 = 0U;
static int32_t t84 = -46;
int32_t x348 = 62627042;
uint8_t x350 = UINT8_MAX;
volatile uint8_t x351 = 5U;
volatile int32_t x359 = -8228507;
int32_t t89 = -1061064501;
uint64_t x366 = 187763065944916591LLU;
static int16_t x367 = INT16_MIN;
uint64_t x370 = 1442559982205LLU;
int32_t x371 = 1862704;
static uint16_t x373 = UINT16_MAX;
int16_t x374 = INT16_MIN;
int32_t x381 = 15;
int8_t x385 = 7;
static volatile int32_t t97 = 1;
int16_t x397 = INT16_MIN;
int16_t x404 = INT16_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int32_t x2 = INT32_MIN;
	volatile int32_t t0 = INT32_MAX;

	t0 = (((x1==x2)<x3)+x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -1;
	volatile int64_t t1 = INT64_MAX;

	t1 = (((x5==x6)<x7)+x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 97LLU;
	int64_t x10 = 173590948067654990LL;
	uint64_t x11 = 9093867494618861LLU;
	uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = 166U;

	t2 = (((x9==x10)<x11)+x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 8U;
	int64_t x15 = -1LL;
	int32_t x16 = -1;
	int32_t t3 = 69600119;

	t3 = (((x13==x14)<x15)+x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 22U;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = INT32_MIN;

	t4 = (((x17==x18)<x19)+x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -2;
	int64_t x22 = 317574LL;
	static int64_t t5 = INT64_MAX;

	t5 = (((x21==x22)<x23)+x24);

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	int64_t x26 = 1237305531367LL;
	static int16_t x27 = -243;
	volatile int32_t t6 = -4847040;

	t6 = (((x25==x26)<x27)+x28);

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	static uint8_t x31 = 0U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 4923;

	t7 = (((x29==x30)<x31)+x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -183889762;
	int32_t x35 = 13903;
	static volatile uint8_t x36 = 24U;

	t8 = (((x33==x34)<x35)+x36);

	if (t8 != 25) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 29U;
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = 68788549LL;
	int64_t x40 = -1LL;
	volatile int64_t t9 = 7353057623494LL;

	t9 = (((x37==x38)<x39)+x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 0;
	static int8_t x42 = 10;
	int8_t x43 = 3;
	volatile int64_t x44 = -1LL;
	int64_t t10 = -5974LL;

	t10 = (((x41==x42)<x43)+x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static volatile int8_t x46 = INT8_MAX;
	int8_t x47 = -1;

	t11 = (((x45==x46)<x47)+x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2915496LL;
	static uint32_t x51 = UINT32_MAX;
	int16_t x52 = 131;
	volatile int32_t t12 = -1943;

	t12 = (((x49==x50)<x51)+x52);

	if (t12 != 132) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x55 = 121LLU;
	volatile int16_t x56 = -160;
	volatile int32_t t13 = -651;

	t13 = (((x53==x54)<x55)+x56);

	if (t13 != -159) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 3U;
	int8_t x58 = -1;
	int32_t x59 = INT32_MIN;
	static uint64_t x60 = 1075100LLU;
	uint64_t t14 = 326LLU;

	t14 = (((x57==x58)<x59)+x60);

	if (t14 != 1075100LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MIN;
	int32_t x63 = -2689896;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 18;

	t15 = (((x61==x62)<x63)+x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = -1;
	uint8_t x67 = 31U;
	int64_t t16 = 31631LL;

	t16 = (((x65==x66)<x67)+x68);

	if (t16 != -2829797361964LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 7849U;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 16U;
	static volatile uint64_t t17 = 8136561097371103226LLU;

	t17 = (((x69==x70)<x71)+x72);

	if (t17 != 5494116319993LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -1;
	uint64_t x75 = 10781LLU;
	static uint8_t x76 = 46U;
	int32_t t18 = -8159812;

	t18 = (((x73==x74)<x75)+x76);

	if (t18 != 47) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x79 = INT8_MIN;
	static int64_t x80 = -2726309LL;

	t19 = (((x77==x78)<x79)+x80);

	if (t19 != -2726309LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	static uint16_t x86 = UINT16_MAX;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = 3045375;

	t20 = (((x85==x86)<x87)+x88);

	if (t20 != 3045376) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t21 = -1531453;

	t21 = (((x89==x90)<x91)+x92);

	if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 0U;
	uint64_t x94 = 5837967337971647537LLU;
	volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 79598;

	t22 = (((x93==x94)<x95)+x96);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x97 = 322LLU;
	int32_t x98 = -1;
	int8_t x99 = INT8_MAX;

	t23 = (((x97==x98)<x99)+x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 6020U;
	uint32_t x102 = 438407711U;
	uint8_t x103 = 10U;
	int64_t x104 = -2304054744562162LL;
	static int64_t t24 = 55463276958196LL;

	t24 = (((x101==x102)<x103)+x104);

	if (t24 != -2304054744562161LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 1410LL;
	int64_t x106 = INT64_MIN;
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t25 = (((x105==x106)<x107)+x108);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 3;
	uint16_t x110 = 102U;
	int64_t x111 = -13LL;
	static int32_t x112 = INT32_MIN;
	int32_t t26 = INT32_MIN;

	t26 = (((x109==x110)<x111)+x112);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = 87U;
	static int32_t x114 = 10095740;
	int8_t x116 = -23;
	int32_t t27 = 3218089;

	t27 = (((x113==x114)<x115)+x116);

	if (t27 != -22) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -7;
	int64_t x119 = -10078916770LL;
	int32_t x120 = -1;
	int32_t t28 = -3686081;

	t28 = (((x117==x118)<x119)+x120);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = -1LL;
	uint64_t t29 = 3979436608407LLU;

	t29 = (((x121==x122)<x123)+x124);

	if (t29 != 859318165130710LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 7U;
	static volatile uint8_t x126 = UINT8_MAX;
	static int32_t x127 = INT32_MIN;
	int16_t x128 = 1;
	volatile int32_t t30 = 10554651;

	t30 = (((x125==x126)<x127)+x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = 11242LLU;
	volatile int32_t x130 = INT32_MAX;
	volatile int16_t x131 = INT16_MIN;
	static int8_t x132 = INT8_MIN;
	int32_t t31 = 19502;

	t31 = (((x129==x130)<x131)+x132);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MIN;
	uint64_t x134 = 295360336LLU;
	int64_t x135 = INT64_MAX;
	int32_t x136 = 12648;
	int32_t t32 = 1;

	t32 = (((x133==x134)<x135)+x136);

	if (t32 != 12649) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int32_t t33 = 1464026;

	t33 = (((x137==x138)<x139)+x140);

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x142 = 1081451884975278LLU;
	int8_t x144 = -1;
	int32_t t34 = 611329193;

	t34 = (((x141==x142)<x143)+x144);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x145 = 0;
	static int64_t x146 = INT64_MIN;
	static int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MIN;
	volatile int64_t t35 = 4524889399LL;

	t35 = (((x145==x146)<x147)+x148);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x151 = INT8_MIN;
	volatile uint16_t x152 = 5287U;
	int32_t t36 = 16317;

	t36 = (((x149==x150)<x151)+x152);

	if (t36 != 5287) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t37 = 228225982;

	t37 = (((x153==x154)<x155)+x156);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = INT32_MIN;
	volatile int16_t x160 = INT16_MIN;
	int32_t t38 = -111;

	t38 = (((x157==x158)<x159)+x160);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x163 = 9;
	static volatile uint64_t x164 = 4980548809637738LLU;
	volatile uint64_t t39 = 113980255LLU;

	t39 = (((x161==x162)<x163)+x164);

	if (t39 != 4980548809637739LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x166 = -1;
	uint16_t x168 = UINT16_MAX;
	int32_t t40 = -52581462;

	t40 = (((x165==x166)<x167)+x168);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x169 = INT64_MIN;
	int8_t x170 = -49;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MIN;
	int64_t t41 = -268125093242LL;

	t41 = (((x169==x170)<x171)+x172);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = 21;
	int32_t x175 = 88296;
	volatile int8_t x176 = 29;

	t42 = (((x173==x174)<x175)+x176);

	if (t42 != 30) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x178 = 1;
	int8_t x179 = 0;
	int16_t x180 = 15;
	static volatile int32_t t43 = 29544;

	t43 = (((x177==x178)<x179)+x180);

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	volatile uint8_t x182 = 0U;
	volatile int64_t x183 = -1239LL;
	static uint64_t x184 = 1698773LLU;
	static uint64_t t44 = 10LLU;

	t44 = (((x181==x182)<x183)+x184);

	if (t44 != 1698773LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = -1;
	uint32_t x188 = 0U;

	t45 = (((x185==x186)<x187)+x188);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = -1LL;
	int64_t x190 = INT64_MAX;
	int16_t x191 = INT16_MIN;
	volatile int64_t t46 = 196523011633136LL;

	t46 = (((x189==x190)<x191)+x192);

	if (t46 != -902LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 28376;
	volatile uint32_t x195 = 856987U;
	volatile int32_t x196 = 1279491;
	static int32_t t47 = -837471256;

	t47 = (((x193==x194)<x195)+x196);

	if (t47 != 1279492) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x200 = -92409865LL;
	int64_t t48 = 672677036298053045LL;

	t48 = (((x197==x198)<x199)+x200);

	if (t48 != -92409865LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	uint8_t x202 = UINT8_MAX;
	static uint32_t x203 = UINT32_MAX;
	int32_t x204 = -281;
	static int32_t t49 = -152066046;

	t49 = (((x201==x202)<x203)+x204);

	if (t49 != -280) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -16107;
	static uint32_t x206 = 693239535U;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;

	t50 = (((x205==x206)<x207)+x208);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MAX;
	volatile int16_t x211 = 1209;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t51 = 502412;

	t51 = (((x209==x210)<x211)+x212);

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x216 = 49;
	static int32_t t52 = -1843;

	t52 = (((x213==x214)<x215)+x216);

	if (t52 != 50) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	int32_t x220 = INT32_MAX;
	volatile int32_t t53 = INT32_MAX;

	t53 = (((x217==x218)<x219)+x220);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 31610U;
	static uint8_t x222 = UINT8_MAX;
	int8_t x223 = INT8_MAX;
	volatile int32_t x224 = -1;
	volatile int32_t t54 = -11554115;

	t54 = (((x221==x222)<x223)+x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = -497250029;
	volatile int32_t t55 = -3259354;

	t55 = (((x225==x226)<x227)+x228);

	if (t55 != 22520) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = 12708938393508LL;
	int32_t x231 = -388609;
	volatile int32_t t56 = 29284505;

	t56 = (((x229==x230)<x231)+x232);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = INT64_MAX;
	uint64_t x235 = UINT64_MAX;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t57 = 10317315266LLU;

	t57 = (((x233==x234)<x235)+x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -2;
	volatile int32_t x238 = -75;
	static int16_t x239 = INT16_MIN;
	int16_t x240 = 247;
	int32_t t58 = -14;

	t58 = (((x237==x238)<x239)+x240);

	if (t58 != 247) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x242 = INT64_MAX;
	int8_t x243 = 62;
	static int64_t x244 = -1LL;
	static int64_t t59 = 714680LL;

	t59 = (((x241==x242)<x243)+x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MIN;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

	t60 = (((x245==x246)<x247)+x248);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = INT16_MAX;
	static volatile int32_t x250 = -1;
	volatile int8_t x251 = INT8_MAX;
	int16_t x252 = -1;
	int32_t t61 = 439;

	t61 = (((x249==x250)<x251)+x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x254 = 5U;
	uint16_t x255 = UINT16_MAX;
	uint64_t t62 = 485023081157549LLU;

	t62 = (((x253==x254)<x255)+x256);

	if (t62 != 7565594385LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x257 = 1;
	int8_t x258 = 38;
	volatile int16_t x259 = -281;
	uint32_t x260 = 2287880U;
	static volatile uint32_t t63 = 115U;

	t63 = (((x257==x258)<x259)+x260);

	if (t63 != 2287880U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = INT16_MAX;
	int64_t x262 = 328406611LL;
	int8_t x263 = -27;
	int64_t t64 = INT64_MAX;

	t64 = (((x261==x262)<x263)+x264);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	int16_t x267 = INT16_MIN;
	uint32_t t65 = 9204290U;

	t65 = (((x265==x266)<x267)+x268);

	if (t65 != 4U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 479U;
	volatile uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 3U;
	static uint8_t x272 = 0U;
	int32_t t66 = -959453335;

	t66 = (((x269==x270)<x271)+x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x274 = 10U;
	uint16_t x275 = UINT16_MAX;
	static uint32_t t67 = 22715994U;

	t67 = (((x273==x274)<x275)+x276);

	if (t67 != 14U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x278 = 68971743U;
	int8_t x280 = INT8_MAX;
	volatile int32_t t68 = -136489;

	t68 = (((x277==x278)<x279)+x280);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int8_t x283 = INT8_MAX;
	int64_t x284 = -92220240LL;

	t69 = (((x281==x282)<x283)+x284);

	if (t69 != -92220239LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x287 = 6317LLU;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t70 = 30428231227959LLU;

	t70 = (((x285==x286)<x287)+x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x289 = -7;
	int32_t x290 = -1;
	int32_t x291 = -1;
	uint16_t x292 = 63U;
	int32_t t71 = -3221;

	t71 = (((x289==x290)<x291)+x292);

	if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = -27843;
	int64_t x295 = -1LL;
	int8_t x296 = 0;
	int32_t t72 = 1;

	t72 = (((x293==x294)<x295)+x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x298 = -1;
	volatile int64_t x300 = INT64_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (((x297==x298)<x299)+x300);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static uint32_t x302 = 75U;
	static int8_t x303 = 45;
	static int16_t x304 = INT16_MIN;

	t74 = (((x301==x302)<x303)+x304);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int32_t x306 = 818674474;
	static int16_t x307 = -301;
	uint32_t x308 = 19U;
	volatile uint32_t t75 = 3U;

	t75 = (((x305==x306)<x307)+x308);

	if (t75 != 19U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	int8_t x311 = -1;
	int32_t t76 = 3;

	t76 = (((x309==x310)<x311)+x312);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x313 = 4U;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t t77 = -154017;

	t77 = (((x313==x314)<x315)+x316);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 1;
	uint64_t x318 = 12LLU;
	static uint16_t x319 = 2U;
	uint8_t x320 = 7U;

	t78 = (((x317==x318)<x319)+x320);

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1438794LL;
	int32_t x324 = INT32_MIN;
	volatile int32_t t79 = -7;

	t79 = (((x321==x322)<x323)+x324);

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = -1;

	t80 = (((x325==x326)<x327)+x328);

	if (t80 != -56LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	static int64_t x331 = 221LL;
	static volatile int32_t t81 = -3143;

	t81 = (((x329==x330)<x331)+x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = INT8_MAX;
	static uint16_t x334 = UINT16_MAX;
	volatile int16_t x335 = -1;
	volatile int32_t t82 = 1;

	t82 = (((x333==x334)<x335)+x336);

	if (t82 != -7) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x338 = -157LL;
	volatile int32_t t83 = 57667483;

	t83 = (((x337==x338)<x339)+x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = INT64_MAX;
	static int32_t x342 = 32669;
	int32_t x343 = 28;
	int32_t x344 = -1;

	t84 = (((x341==x342)<x343)+x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = 133U;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 7536125LLU;
	volatile int32_t t85 = 40;

	t85 = (((x345==x346)<x347)+x348);

	if (t85 != 62627043) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x349 = 156295147LLU;
	uint8_t x352 = 0U;
	int32_t t86 = 0;

	t86 = (((x349==x350)<x351)+x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = -1;
	int64_t x354 = INT64_MAX;
	static uint64_t x355 = 341008522652LLU;
	static uint32_t x356 = 65054442U;
	volatile uint32_t t87 = 450130510U;

	t87 = (((x353==x354)<x355)+x356);

	if (t87 != 65054443U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = 8851330LL;
	int8_t x358 = -1;
	int64_t x360 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = (((x357==x358)<x359)+x360);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x361 = 2187503U;
	volatile int64_t x362 = INT64_MAX;
	int32_t x363 = INT32_MIN;
	static int16_t x364 = INT16_MIN;

	t89 = (((x361==x362)<x363)+x364);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = 156589U;
	volatile uint32_t x368 = 18035856U;
	volatile uint32_t t90 = 422350490U;

	t90 = (((x365==x366)<x367)+x368);

	if (t90 != 18035856U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x369 = INT8_MIN;
	int32_t x372 = -1;
	int32_t t91 = 26;

	t91 = (((x369==x370)<x371)+x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x375 = 112U;
	volatile int64_t x376 = -2744096256161LL;
	volatile int64_t t92 = -57340094188136112LL;

	t92 = (((x373==x374)<x375)+x376);

	if (t92 != -2744096256160LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x377 = -1;
	int16_t x378 = INT16_MIN;
	static volatile int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t93 = 439539;

	t93 = (((x377==x378)<x379)+x380);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 108467235U;
	volatile int64_t x384 = 24LL;
	volatile int64_t t94 = -57LL;

	t94 = (((x381==x382)<x383)+x384);

	if (t94 != 25LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = -1;
	static volatile int16_t x388 = -172;
	volatile int32_t t95 = 1889;

	t95 = (((x385==x386)<x387)+x388);

	if (t95 != -172) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MIN;
	volatile uint32_t x391 = UINT32_MAX;
	volatile int64_t x392 = INT64_MIN;
	volatile int64_t t96 = -15430LL;

	t96 = (((x389==x390)<x391)+x392);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 5U;
	volatile int8_t x396 = 1;

	t97 = (((x393==x394)<x395)+x396);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x398 = -1;
	int64_t x399 = -4362326498LL;
	uint32_t x400 = 224284U;
	uint32_t t98 = 1591953U;

	t98 = (((x397==x398)<x399)+x400);

	if (t98 != 224284U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x401 = INT16_MIN;
	uint8_t x402 = UINT8_MAX;
	static int8_t x403 = INT8_MIN;
	volatile int32_t t99 = -762914;

	t99 = (((x401==x402)<x403)+x404);

	if (t99 != 32767) { NG(); } else { ; }
	
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

