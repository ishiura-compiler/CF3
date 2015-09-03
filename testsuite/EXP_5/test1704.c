#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x24 = 57100LLU;
static volatile int8_t x38 = INT8_MAX;
int32_t x40 = -1;
int16_t x41 = 0;
int32_t x46 = -26;
volatile uint32_t t9 = 73U;
int64_t x65 = -1LL;
int64_t x67 = -1LL;
volatile int64_t t13 = -188LL;
int8_t x69 = INT8_MAX;
uint32_t x73 = 56U;
volatile int8_t x79 = INT8_MIN;
static uint64_t t17 = 2436690414LLU;
uint32_t x94 = UINT32_MAX;
static volatile uint64_t x96 = 6127225110711197LLU;
static volatile int32_t x104 = 1352106;
int16_t x107 = INT16_MAX;
int8_t x109 = -1;
int64_t x114 = INT64_MIN;
int64_t t24 = -6LL;
int16_t x122 = INT16_MIN;
uint16_t x123 = 189U;
uint32_t t29 = 2585U;
int64_t x137 = 166099LL;
int64_t x138 = INT64_MIN;
uint8_t x139 = 0U;
volatile int8_t x142 = -12;
int64_t t31 = 16072484309LL;
uint32_t x147 = 6U;
int8_t x153 = INT8_MIN;
int8_t x160 = 51;
uint64_t t35 = 4566350161140LLU;
volatile uint32_t t36 = 0U;
int16_t x165 = -1;
static uint16_t x179 = 812U;
volatile uint16_t x185 = 14780U;
volatile int64_t t41 = 17908LL;
int8_t x194 = -1;
int64_t x202 = -1976LL;
volatile int64_t x203 = INT64_MAX;
int64_t x204 = -1LL;
volatile int8_t x217 = -29;
volatile int64_t x218 = INT64_MIN;
int16_t x224 = INT16_MAX;
volatile int32_t t48 = 9438;
int32_t x229 = INT32_MIN;
static int64_t x233 = INT64_MIN;
static uint64_t t53 = 8638866032006LLU;
static int32_t x261 = -1;
static int8_t x267 = 13;
static volatile uint8_t x268 = UINT8_MAX;
int64_t x270 = 85731486215LL;
static uint64_t x276 = 32792853367LLU;
volatile int32_t x278 = INT32_MIN;
int32_t x279 = 3908256;
int8_t x280 = INT8_MAX;
volatile int64_t t59 = -467LL;
int32_t t60 = -91;
static volatile uint64_t t62 = 3503316666575LLU;
volatile int16_t x310 = INT16_MAX;
int64_t x313 = INT64_MIN;
int64_t x314 = 1712LL;
static uint64_t x321 = 98456808456LLU;
uint32_t x325 = 4370474U;
volatile uint64_t x335 = 294274LLU;
volatile uint64_t t73 = 89325016120801722LLU;
int32_t x348 = INT32_MAX;
int16_t x352 = 6598;
volatile int64_t t77 = 354550882LL;
volatile int64_t x361 = INT64_MAX;
static uint32_t t79 = 392597U;
volatile uint8_t x376 = 36U;
int8_t x378 = -1;
volatile uint32_t x379 = 106000U;
int32_t x385 = INT32_MAX;
volatile int64_t x389 = 38574115575859LL;
static int32_t x392 = -1;
volatile uint64_t t83 = 16694LLU;
volatile int32_t x401 = -1;
volatile int32_t t86 = -4209;
int16_t x407 = -1;
uint8_t x426 = 5U;
uint32_t x428 = 4267516U;
static uint32_t x429 = UINT32_MAX;
uint16_t x430 = 31U;
uint64_t x432 = UINT64_MAX;
volatile uint32_t t91 = 121796423U;
volatile uint64_t x440 = UINT64_MAX;
volatile int32_t t93 = -765;
uint64_t x450 = 23913726LLU;
uint64_t x451 = 264707995109LLU;
uint64_t t95 = 5971565896480579646LLU;
uint16_t x456 = 0U;
volatile uint64_t t96 = 8744449770286LLU;
int32_t t97 = -1797714;
volatile int64_t x461 = INT64_MAX;
int16_t x462 = INT16_MAX;
int32_t x463 = -616;
static volatile uint64_t x464 = 37115731818724LLU;
static int32_t x467 = INT32_MAX;
int8_t x468 = INT8_MAX;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	int8_t x4 = 56;
	int64_t t0 = 44542443943655482LL;

	t0 = (x1+((x2&x3)-x4));

	if (t0 != -9223372036854743097LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	volatile int8_t x7 = INT8_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 1953975;

	t1 = (x5+((x6&x7)-x8));

	if (t1 != -2147483520) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 55532871100636911LL;
	static int8_t x10 = -2;
	volatile int8_t x11 = INT8_MIN;
	int8_t x12 = -1;
	volatile int64_t t2 = 18778440076457LL;

	t2 = (x9+((x10&x11)-x12));

	if (t2 != 55532871100636784LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	static volatile uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 1301336U;
	static int16_t x20 = 4;
	volatile uint32_t t3 = 370U;

	t3 = (x17+((x18&x19)-x20));

	if (t3 != 32851U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 9042U;
	volatile int32_t x22 = INT32_MIN;
	volatile uint64_t x23 = UINT64_MAX;
	volatile uint64_t t4 = 1144457253334LLU;

	t4 = (x21+((x22&x23)-x24));

	if (t4 != 18446744071562019910LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -25;
	static volatile uint16_t x26 = 0U;
	int8_t x27 = -1;
	int32_t x28 = -1;
	volatile int32_t t5 = -3118;

	t5 = (x25+((x26&x27)-x28));

	if (t5 != -24) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = 487869;
	uint16_t x39 = UINT16_MAX;
	int32_t t6 = -150055;

	t6 = (x37+((x38&x39)-x40));

	if (t6 != 487997) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x42 = 3LL;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -1;
	volatile int64_t t7 = 5717071LL;

	t7 = (x41+((x42&x43)-x44));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = UINT32_MAX;
	uint32_t x47 = 106241024U;
	int16_t x48 = INT16_MAX;
	uint32_t t8 = 5606U;

	t8 = (x45+((x46&x47)-x48));

	if (t8 != 106208256U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	static uint32_t x51 = UINT32_MAX;
	volatile int32_t x52 = -2;

	t9 = (x49+((x50&x51)-x52));

	if (t9 != 2147450882U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = 170475;
	static uint16_t x54 = UINT16_MAX;
	volatile int32_t x55 = INT32_MIN;
	int64_t x56 = -73LL;
	int64_t t10 = -2074202078968464LL;

	t10 = (x53+((x54&x55)-x56));

	if (t10 != 170548LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t11 = 40905579;

	t11 = (x57+((x58&x59)-x60));

	if (t11 != -32513) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x61 = 43;
	int16_t x62 = -1;
	int64_t x63 = -143LL;
	int8_t x64 = 3;
	int64_t t12 = 332881749LL;

	t12 = (x61+((x62&x63)-x64));

	if (t12 != -103LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = -1;
	int8_t x68 = -20;

	t13 = (x65+((x66&x67)-x68));

	if (t13 != 18LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = -3149;
	uint32_t x71 = 470021U;
	static uint16_t x72 = 110U;
	uint32_t t14 = 165U;

	t14 = (x69+((x70&x71)-x72));

	if (t14 != 466962U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = -1;
	uint32_t x75 = 407U;
	uint16_t x76 = 5U;
	uint32_t t15 = 15191157U;

	t15 = (x73+((x74&x75)-x76));

	if (t15 != 458U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	static int32_t t16 = 12;

	t16 = (x77+((x78&x79)-x80));

	if (t16 != 2147418112) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = 0;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MAX;
	volatile int64_t x88 = INT64_MAX;

	t17 = (x85+((x86&x87)-x88));

	if (t17 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 2U;
	static volatile int16_t x90 = -652;
	static int16_t x91 = -1500;
	static int16_t x92 = INT16_MIN;
	int32_t t18 = -8162326;

	t18 = (x89+((x90&x91)-x92));

	if (t18 != 30758) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = 1509577LL;
	int16_t x95 = 153;
	volatile uint64_t t19 = 36859321042251886LLU;

	t19 = (x93+((x94&x95)-x96));

	if (t19 != 18440616848600350149LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = -44;
	volatile int16_t x98 = INT16_MIN;
	static uint64_t x99 = 471LLU;
	static int64_t x100 = INT64_MAX;
	volatile uint64_t t20 = 5278428815381934108LLU;

	t20 = (x97+((x98&x99)-x100));

	if (t20 != 9223372036854775765LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = 0;
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MAX;
	int32_t t21 = 291;

	t21 = (x101+((x102&x103)-x104));

	if (t21 != -1351979) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 1U;
	static int32_t x106 = 38898;
	static uint8_t x108 = 1U;
	int32_t t22 = 7;

	t22 = (x105+((x106&x107)-x108));

	if (t22 != 6130) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = INT8_MIN;
	int16_t x111 = -4334;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t23 = 2809LLU;

	t23 = (x109+((x110&x111)-x112));

	if (t23 != 18446744073709547264LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = -12;

	t24 = (x113+((x114&x115)-x116));

	if (t24 != 11LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -12385291;
	int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 3016339521LLU;
	uint64_t t25 = 69592LLU;

	t25 = (x117+((x118&x119)-x120));

	if (t25 != 18446744068533343156LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	static uint64_t x124 = 3659953244LLU;
	volatile uint64_t t26 = 2412379LLU;

	t26 = (x121+((x122&x123)-x124));

	if (t26 != 18446744070049598371LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = 5822;
	static uint64_t x126 = 324085403496672243LLU;
	int32_t x127 = 5;
	static int16_t x128 = -1;
	static volatile uint64_t t27 = 3636104308LLU;

	t27 = (x125+((x126&x127)-x128));

	if (t27 != 5824LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = INT16_MIN;
	uint32_t x130 = 0U;
	int64_t x131 = -9632LL;
	volatile uint8_t x132 = 81U;
	volatile int64_t t28 = 1280919501441622626LL;

	t28 = (x129+((x130&x131)-x132));

	if (t28 != -32849LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 22U;
	int32_t x134 = INT32_MIN;
	uint16_t x135 = 2U;
	uint32_t x136 = UINT32_MAX;

	t29 = (x133+((x134&x135)-x136));

	if (t29 != 23U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x140 = 31533;
	int64_t t30 = -2228LL;

	t30 = (x137+((x138&x139)-x140));

	if (t30 != 134566LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	static int16_t x143 = -1;
	int64_t x144 = 28738LL;

	t31 = (x141+((x142&x143)-x144));

	if (t31 != 4294938545LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = -1;
	static int64_t x146 = 2256539793LL;
	uint32_t x148 = 42485804U;
	int64_t t32 = -30260225LL;

	t32 = (x145+((x146&x147)-x148));

	if (t32 != -42485805LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 1490239LLU;
	static int16_t x150 = INT16_MIN;
	uint16_t x151 = 11884U;
	volatile uint64_t x152 = 2612833173540LLU;
	volatile uint64_t t33 = 28608513831660562LLU;

	t33 = (x149+((x150&x151)-x152));

	if (t33 != 18446741460877868315LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x154 = 22U;
	static int32_t x155 = -140836;
	int32_t x156 = -5395397;
	volatile int32_t t34 = 664567;

	t34 = (x153+((x154&x155)-x156));

	if (t34 != 5395289) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -12;
	uint64_t x159 = UINT64_MAX;

	t35 = (x157+((x158&x159)-x160));

	if (t35 != 18446744071562067905LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MAX;
	uint32_t x164 = 1154459U;

	t36 = (x161+((x162&x163)-x164));

	if (t36 != 4293812964U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x166 = -208262867;
	uint64_t x167 = UINT64_MAX;
	int32_t x168 = -13984;
	volatile uint64_t t37 = 252945925LLU;

	t37 = (x165+((x166&x167)-x168));

	if (t37 != 18446744073501302732LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MIN;
	static uint8_t x175 = 43U;
	int16_t x176 = 2;
	int32_t t38 = 126337637;

	t38 = (x173+((x174&x175)-x176));

	if (t38 != 2147483645) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	static uint16_t x178 = 2U;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t39 = 31;

	t39 = (x177+((x178&x179)-x180));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x186 = UINT8_MAX;
	static uint16_t x187 = UINT16_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t40 = -188;

	t40 = (x185+((x186&x187)-x188));

	if (t40 != 14908) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = 7613LL;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -1;
	uint8_t x192 = 1U;

	t41 = (x189+((x190&x191)-x192));

	if (t41 != -25156LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x193 = 1U;
	int32_t x195 = -15103477;
	volatile int8_t x196 = INT8_MIN;
	volatile uint32_t t42 = 3U;

	t42 = (x193+((x194&x195)-x196));

	if (t42 != 4279863948U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	int64_t t43 = -2622406LL;

	t43 = (x201+((x202&x203)-x204));

	if (t43 != -1975LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x205 = INT8_MIN;
	static uint16_t x206 = 4259U;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -3;
	static volatile int32_t t44 = 7;

	t44 = (x205+((x206&x207)-x208));

	if (t44 != -125) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = 11285;
	volatile int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t45 = -1996;

	t45 = (x209+((x210&x211)-x212));

	if (t45 != 44181) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 0U;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MIN;
	uint8_t x216 = UINT8_MAX;
	int64_t t46 = -2409079201LL;

	t46 = (x213+((x214&x215)-x216));

	if (t46 != -255LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x219 = UINT8_MAX;
	volatile int16_t x220 = 4216;
	int64_t t47 = 54786872778LL;

	t47 = (x217+((x218&x219)-x220));

	if (t47 != -4245LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile int8_t x223 = INT8_MIN;

	t48 = (x221+((x222&x223)-x224));

	if (t48 != -32512) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x225 = 1695942LLU;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = 7U;
	volatile uint8_t x228 = UINT8_MAX;
	uint64_t t49 = 4714LLU;

	t49 = (x225+((x226&x227)-x228));

	if (t49 != 1695687LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x230 = 11253704494374300LLU;
	static int64_t x231 = 1043572372076993995LL;
	static uint8_t x232 = 43U;
	volatile uint64_t t50 = 239243LLU;

	t50 = (x229+((x230&x231)-x232));

	if (t50 != 9995705339551069LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MAX;
	volatile uint32_t x236 = 1272U;
	int64_t t51 = -256189792046972LL;

	t51 = (x233+((x234&x235)-x236));

	if (t51 != -9223372034707293433LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = 252U;
	int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = 188918000U;
	int8_t x248 = INT8_MAX;
	uint32_t t52 = 673U;

	t52 = (x245+((x246&x247)-x248));

	if (t52 != 125U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x253 = 0U;
	static uint16_t x254 = 6U;
	uint64_t x255 = 5936296777521432019LLU;
	int32_t x256 = INT32_MIN;

	t53 = (x253+((x254&x255)-x256));

	if (t53 != 2147483650LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = -1938;
	int64_t x258 = 610696LL;
	volatile int8_t x259 = -12;
	static int32_t x260 = INT32_MIN;
	volatile int64_t t54 = -470945LL;

	t54 = (x257+((x258&x259)-x260));

	if (t54 != 2148092398LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x262 = UINT8_MAX;
	volatile int8_t x263 = -1;
	int32_t x264 = -1;
	static volatile int32_t t55 = -24;

	t55 = (x261+((x262&x263)-x264));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = -1;
	int16_t x266 = -1;
	static volatile int32_t t56 = 13036023;

	t56 = (x265+((x266&x267)-x268));

	if (t56 != -243) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = 6;
	uint32_t x271 = 1316U;
	uint64_t x272 = UINT64_MAX;
	uint64_t t57 = 32141848919068LLU;

	t57 = (x269+((x270&x271)-x272));

	if (t57 != 11LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = UINT32_MAX;
	volatile uint16_t x274 = 18541U;
	uint8_t x275 = 107U;
	static uint64_t t58 = 19236802834LLU;

	t58 = (x273+((x274&x275)-x276));

	if (t58 != 18446744045211665649LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x277 = 2123LL;

	t59 = (x277+((x278&x279)-x280));

	if (t59 != 1996LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = -1;
	uint16_t x282 = 1976U;
	volatile uint8_t x283 = 7U;
	volatile int8_t x284 = INT8_MIN;

	t60 = (x281+((x282&x283)-x284));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = INT32_MAX;
	static volatile int64_t x290 = INT64_MIN;
	uint8_t x291 = 27U;
	uint32_t x292 = 31913U;
	int64_t t61 = -6639LL;

	t61 = (x289+((x290&x291)-x292));

	if (t61 != 2147451734LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x293 = 46968641660608LLU;
	static uint32_t x294 = 11U;
	int16_t x295 = -1;
	int64_t x296 = INT64_MAX;

	t62 = (x293+((x294&x295)-x296));

	if (t62 != 9223419005496436428LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = INT32_MIN;
	int8_t x299 = 1;
	static int32_t x300 = -12;
	int32_t t63 = -1;

	t63 = (x297+((x298&x299)-x300));

	if (t63 != -116) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = UINT64_MAX;
	static int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MAX;
	volatile int16_t x304 = INT16_MIN;
	uint64_t t64 = 2441416LLU;

	t64 = (x301+((x302&x303)-x304));

	if (t64 != 65534LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	volatile int16_t x306 = INT16_MIN;
	static uint64_t x307 = 82386981457743469LLU;
	int16_t x308 = -1;
	uint64_t t65 = 12644979856991LLU;

	t65 = (x305+((x306&x307)-x308));

	if (t65 != 82386985752690688LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x309 = 19;
	int16_t x311 = 818;
	int64_t x312 = 917663897553LL;
	int64_t t66 = 54204779145LL;

	t66 = (x309+((x310&x311)-x312));

	if (t66 != -917663896716LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x315 = 3133LL;
	volatile int16_t x316 = INT16_MIN;
	volatile int64_t t67 = -1369325957884LL;

	t67 = (x313+((x314&x315)-x316));

	if (t67 != -9223372036854741968LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x318 = 8905974U;
	int32_t x319 = -598792;
	volatile int16_t x320 = 11;
	static uint32_t t68 = 225154730U;

	t68 = (x317+((x318&x319)-x320));

	if (t68 != 8832228U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x322 = -1LL;
	int8_t x323 = 0;
	volatile uint16_t x324 = 12U;
	uint64_t t69 = 12166799455LLU;

	t69 = (x321+((x322&x323)-x324));

	if (t69 != 98456808444LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x326 = 41U;
	int16_t x327 = 448;
	static int8_t x328 = -1;
	volatile uint32_t t70 = 77216U;

	t70 = (x325+((x326&x327)-x328));

	if (t70 != 4370475U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MAX;
	static int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t71 = 0;

	t71 = (x329+((x330&x331)-x332));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x333 = 7U;
	int16_t x334 = INT16_MIN;
	int16_t x336 = 0;
	volatile uint64_t t72 = 14835LLU;

	t72 = (x333+((x334&x335)-x336));

	if (t72 != 262151LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 71611053059LLU;
	int16_t x338 = 8159;
	int64_t x339 = INT64_MIN;
	volatile int16_t x340 = INT16_MIN;

	t73 = (x337+((x338&x339)-x340));

	if (t73 != 71611085827LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	uint32_t x343 = 488475295U;
	static uint8_t x344 = 23U;
	volatile int64_t t74 = 32897391384791LL;

	t74 = (x341+((x342&x343)-x344));

	if (t74 != -9223372032559808535LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = -10;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t75 = -596588185;

	t75 = (x345+((x346&x347)-x348));

	if (t75 != 65526) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x349 = 88930LLU;
	int32_t x350 = -1;
	static int16_t x351 = -1;
	uint64_t t76 = 324327372968LLU;

	t76 = (x349+((x350&x351)-x352));

	if (t76 != 82331LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = -1LL;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -1;

	t77 = (x353+((x354&x355)-x356));

	if (t77 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 57308609LLU;
	uint64_t t78 = 648338193361480LLU;

	t78 = (x361+((x362&x363)-x364));

	if (t78 != 9223372036797434430LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = -1;
	int8_t x366 = -2;
	static volatile uint8_t x367 = 0U;
	static volatile uint32_t x368 = 112683U;

	t79 = (x365+((x366&x367)-x368));

	if (t79 != 4294854612U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x373 = 33U;
	static uint8_t x374 = 4U;
	uint32_t x375 = 11949U;
	volatile uint32_t t80 = 306U;

	t80 = (x373+((x374&x375)-x376));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x377 = 0LLU;
	uint8_t x380 = 10U;
	uint64_t t81 = 4LLU;

	t81 = (x377+((x378&x379)-x380));

	if (t81 != 105990LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x386 = -1;
	int16_t x387 = -51;
	static uint16_t x388 = 93U;
	volatile int32_t t82 = -801218824;

	t82 = (x385+((x386&x387)-x388));

	if (t82 != 2147483503) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x390 = INT32_MAX;
	uint64_t x391 = UINT64_MAX;

	t83 = (x389+((x390&x391)-x392));

	if (t83 != 38576263059507LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x393 = INT8_MAX;
	static uint16_t x394 = UINT16_MAX;
	uint16_t x395 = UINT16_MAX;
	volatile int16_t x396 = -1;
	int32_t t84 = -1;

	t84 = (x393+((x394&x395)-x396));

	if (t84 != 65663) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = 13U;
	uint8_t x400 = 4U;
	volatile uint64_t t85 = 31094684009494896LLU;

	t85 = (x397+((x398&x399)-x400));

	if (t85 != 8LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x402 = 6;
	int16_t x403 = 13;
	int16_t x404 = 3039;

	t86 = (x401+((x402&x403)-x404));

	if (t86 != -3036) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x405 = -1LL;
	volatile uint64_t x406 = 110734330LLU;
	static int16_t x408 = 57;
	volatile uint64_t t87 = 9402943179182529LLU;

	t87 = (x405+((x406&x407)-x408));

	if (t87 != 110734272LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = -1;
	static int64_t x410 = 58042LL;
	volatile int8_t x411 = 1;
	static uint16_t x412 = 16U;
	static volatile int64_t t88 = 1LL;

	t88 = (x409+((x410&x411)-x412));

	if (t88 != -17LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x425 = UINT32_MAX;
	int64_t x427 = -1LL;
	volatile int64_t t89 = 203614430364187LL;

	t89 = (x425+((x426&x427)-x428));

	if (t89 != 4290699784LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x431 = 60U;
	static uint64_t t90 = 27LLU;

	t90 = (x429+((x430&x431)-x432));

	if (t90 != 4294967324LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x433 = 31174359U;
	uint8_t x434 = 27U;
	int8_t x435 = -2;
	int32_t x436 = -1;

	t91 = (x433+((x434&x435)-x436));

	if (t91 != 31174386U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x437 = -1;
	static uint16_t x438 = 55U;
	int64_t x439 = INT64_MIN;
	volatile uint64_t t92 = 5026424574438331997LLU;

	t92 = (x437+((x438&x439)-x440));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x441 = 22U;
	int16_t x442 = -459;
	static int16_t x443 = INT16_MIN;
	int8_t x444 = 11;

	t93 = (x441+((x442&x443)-x444));

	if (t93 != -32757) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x445 = 1U;
	int16_t x446 = INT16_MAX;
	int64_t x447 = -41LL;
	static volatile uint16_t x448 = 286U;
	static volatile int64_t t94 = -106837LL;

	t94 = (x445+((x446&x447)-x448));

	if (t94 != 32442LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = INT64_MIN;
	int16_t x452 = INT16_MIN;

	t95 = (x449+((x450&x451)-x452));

	if (t95 != 9223372036875805924LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x453 = UINT64_MAX;
	uint16_t x454 = 715U;
	static int8_t x455 = 25;

	t96 = (x453+((x454&x455)-x456));

	if (t96 != 8LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x457 = -173719;
	int16_t x458 = INT16_MIN;
	int8_t x459 = -6;
	uint16_t x460 = 1042U;

	t97 = (x457+((x458&x459)-x460));

	if (t97 != -207529) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t t98 = 599064930LLU;

	t98 = (x461+((x462&x463)-x464));

	if (t98 != 9223334921122989235LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x465 = -1;
	int32_t x466 = INT32_MIN;
	int32_t t99 = -49;

	t99 = (x465+((x466&x467)-x468));

	if (t99 != -128) { NG(); } else { ; }
	
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

