#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = -1;
int8_t x5 = INT8_MIN;
static uint16_t x6 = UINT16_MAX;
int8_t x13 = INT8_MIN;
int64_t x23 = 18LL;
static int64_t x31 = 157LL;
int32_t t8 = 3194499;
int64_t x50 = 1649113414015LL;
int64_t x53 = INT64_MAX;
volatile int8_t x62 = -4;
int16_t x64 = INT16_MIN;
int16_t x66 = 103;
int64_t x70 = -20407LL;
int32_t x83 = INT32_MIN;
uint16_t x84 = 2608U;
int64_t t19 = 286772757LL;
int16_t x94 = 500;
uint64_t x96 = 113LLU;
uint64_t t21 = 2047377485LLU;
uint32_t x99 = 308835109U;
volatile uint16_t x100 = 1U;
volatile uint16_t x102 = 188U;
int16_t x103 = -1;
int64_t t23 = -3259374LL;
static volatile uint16_t x114 = 5827U;
uint16_t x115 = 1861U;
uint32_t x122 = UINT32_MAX;
uint32_t t27 = 524511759U;
int8_t x126 = -1;
int32_t x127 = INT32_MIN;
int64_t t30 = 355LL;
static int8_t x139 = 2;
volatile uint32_t x142 = 1958951U;
uint64_t x143 = 2643699008168125LLU;
static volatile int64_t x144 = 761081014154LL;
uint32_t x146 = 1510391136U;
int64_t x148 = INT64_MIN;
static volatile uint32_t x149 = 62691350U;
int8_t x151 = 0;
int64_t x155 = 0LL;
int64_t t35 = 2950LL;
static int64_t x161 = -413806LL;
uint64_t x167 = 923431252767LLU;
static int8_t x169 = -1;
int32_t x174 = -1;
volatile uint64_t t39 = 805259903LLU;
uint64_t x178 = 19743747LLU;
uint64_t t40 = 1158607538919LLU;
int64_t x185 = INT64_MAX;
volatile int64_t t42 = 1167967485900513LL;
volatile uint8_t x191 = 0U;
int16_t x192 = -1;
int8_t x198 = 1;
static uint8_t x210 = UINT8_MAX;
static uint16_t x211 = 146U;
int64_t x216 = -604304968270908LL;
int64_t x217 = -1LL;
int64_t t49 = 1LL;
int8_t x225 = INT8_MIN;
int64_t x239 = INT64_MIN;
int32_t x241 = INT32_MAX;
int16_t x242 = INT16_MIN;
volatile int8_t x249 = INT8_MIN;
int32_t x250 = 342451028;
uint8_t x251 = 15U;
int16_t x255 = 3;
int64_t x259 = -5075727794825540LL;
int16_t x261 = -1;
volatile uint64_t t60 = 193804046LLU;
static volatile int16_t x274 = -14486;
int64_t x277 = 136382LL;
int16_t x278 = -1;
int64_t x279 = -1LL;
int8_t x280 = -1;
uint64_t x281 = 371420659059LLU;
uint32_t x283 = 236442U;
volatile uint64_t t65 = 6667934502442LLU;
uint64_t x289 = UINT64_MAX;
int32_t x294 = INT32_MIN;
uint16_t x299 = 31634U;
uint64_t t68 = 1002746185552LLU;
int64_t x308 = INT64_MAX;
static volatile int32_t x309 = -1;
uint32_t x312 = 76737658U;
uint8_t x319 = 0U;
int64_t t73 = 2536344407LL;
volatile uint32_t x324 = 3118680U;
volatile int64_t x325 = INT64_MIN;
int32_t x327 = INT32_MAX;
volatile int64_t t75 = -74931324LL;
uint32_t x335 = UINT32_MAX;
uint8_t x347 = UINT8_MAX;
static int64_t x360 = INT64_MIN;
int8_t x361 = -1;
uint64_t x370 = 2678165074848920256LLU;
int16_t x373 = -1;
static volatile uint64_t x375 = 2188378329041752LLU;
int32_t x378 = 128855;
volatile uint32_t x385 = 1055U;
int32_t x398 = INT32_MIN;
volatile int32_t t89 = -4435;
static volatile uint64_t x403 = 405835497LLU;
uint64_t t92 = 23LLU;
volatile uint64_t x417 = UINT64_MAX;
uint64_t t96 = 802691259318082978LLU;
int16_t x433 = -1;
int8_t x434 = INT8_MAX;
int32_t x443 = -1;


void f0(void) {
	static volatile uint8_t x1 = 44U;
	int32_t x2 = INT32_MIN;
	static volatile int16_t x3 = 8074;
	int32_t t0 = -85601970;

	t0 = ((x1+(x2&x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x7 = INT64_MIN;
	uint8_t x8 = UINT8_MAX;
	int64_t t1 = -41160188006801000LL;

	t1 = ((x5+(x6&x7))%x8);

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	uint32_t x10 = 88752713U;
	uint32_t x11 = 37U;
	static int8_t x12 = -1;
	int64_t t2 = 22841561014047701LL;

	t2 = ((x9+(x10&x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 14;
	int16_t x15 = INT16_MAX;
	static uint32_t x16 = UINT32_MAX;
	static uint32_t t3 = 3U;

	t3 = ((x13+(x14&x15))%x16);

	if (t3 != 4294967182U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile uint16_t x18 = 355U;
	uint8_t x19 = 1U;
	volatile uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 1U;

	t4 = ((x17+(x18&x19))%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 0U;
	static int32_t x22 = INT32_MIN;
	int32_t x24 = -1;
	volatile int64_t t5 = -466325717862LL;

	t5 = ((x21+(x22&x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MAX;
	volatile uint64_t x28 = 37LLU;
	volatile uint64_t t6 = 9689420578835LLU;

	t6 = ((x25+(x26&x27))%x28);

	if (t6 != 16LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 34;
	volatile int64_t x30 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = 1LL;

	t7 = ((x29+(x30&x31))%x32);

	if (t7 != 34LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -5719;
	uint8_t x34 = 15U;
	uint16_t x35 = 1218U;
	int16_t x36 = -1313;

	t8 = ((x33+(x34&x35))%x36);

	if (t8 != -465) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	volatile uint16_t x42 = 46U;
	int8_t x43 = -1;
	int64_t x44 = 4LL;
	volatile int64_t t9 = 915LL;

	t9 = ((x41+(x42&x43))%x44);

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	static int8_t x46 = -21;
	int8_t x47 = INT8_MAX;
	int16_t x48 = -1;
	static int32_t t10 = 10596;

	t10 = ((x45+(x46&x47))%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x51 = -14200879LL;
	int64_t x52 = INT64_MAX;
	int64_t t11 = -324142591216955666LL;

	t11 = ((x49+(x50&x51))%x52);

	if (t11 != 1649099737680LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x54 = INT8_MIN;
	uint64_t x55 = 4033590542224513128LLU;
	int16_t x56 = INT16_MIN;
	uint64_t t12 = 4583LLU;

	t12 = ((x53+(x54&x55))%x56);

	if (t12 != 13256962579079288831LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	int16_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	volatile int8_t x60 = INT8_MAX;
	int32_t t13 = -153564;

	t13 = ((x57+(x58&x59))%x60);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	volatile int32_t t14 = -1;

	t14 = ((x61+(x62&x63))%x64);

	if (t14 != 32639) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 14758U;
	static uint16_t x67 = 15U;
	static int8_t x68 = 49;
	volatile int32_t t15 = -54108;

	t15 = ((x65+(x66&x67))%x68);

	if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x71 = 0;
	static volatile int64_t x72 = 7642082348LL;
	volatile int64_t t16 = -1863358928500LL;

	t16 = ((x69+(x70&x71))%x72);

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 200U;
	int16_t x74 = -5882;
	volatile int32_t x75 = 1374;
	int16_t x76 = INT16_MAX;
	volatile int32_t t17 = -454716811;

	t17 = ((x73+(x74&x75))%x76);

	if (t17 != 462) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MIN;
	uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 1U;
	int16_t x80 = INT16_MAX;
	int32_t t18 = 329;

	t18 = ((x77+(x78&x79))%x80);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 0U;
	static int64_t x82 = INT64_MIN;

	t19 = ((x81+(x82&x83))%x84);

	if (t19 != -1088LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -2;
	uint16_t x90 = UINT16_MAX;
	volatile int64_t x91 = INT64_MIN;
	static int16_t x92 = INT16_MAX;
	int64_t t20 = 45435LL;

	t20 = ((x89+(x90&x91))%x92);

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = 15816;
	int64_t x95 = 135060611149702880LL;

	t21 = ((x93+(x94&x95))%x96);

	if (t21 != 107LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 272;
	volatile uint64_t x98 = 1444048652938286LLU;
	volatile uint64_t t22 = 8242058430LLU;

	t22 = ((x97+(x98&x99))%x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -818511;
	int64_t x104 = INT64_MIN;

	t23 = ((x101+(x102&x103))%x104);

	if (t23 != -818323LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = 457084;
	uint32_t x110 = 4U;
	uint64_t x111 = 57LLU;
	uint8_t x112 = 2U;
	uint64_t t24 = 7233LLU;

	t24 = ((x109+(x110&x111))%x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x116 = -15;
	uint64_t t25 = 12264962943970443LLU;

	t25 = ((x113+(x114&x115))%x116);

	if (t25 != 1600LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1275575884982LL;
	volatile int32_t x118 = 85737653;
	static int32_t x119 = INT32_MIN;
	static volatile uint32_t x120 = 25952333U;
	volatile int64_t t26 = 4414193137LL;

	t26 = ((x117+(x118&x119))%x120);

	if (t26 != -18718032LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	int16_t x123 = -3477;
	int16_t x124 = -1;

	t27 = ((x121+(x122&x123))%x124);

	if (t27 != 29290U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 1;
	int32_t x128 = INT32_MIN;
	volatile int32_t t28 = 1477;

	t28 = ((x125+(x126&x127))%x128);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = 22272230;
	uint64_t x131 = 95495502LLU;
	int64_t x132 = 6657819740LL;
	volatile uint64_t t29 = 2323468865427LLU;

	t29 = ((x129+(x130&x131))%x132);

	if (t29 != 17858630LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	uint32_t x134 = 667341U;
	volatile int16_t x135 = -1;
	volatile int64_t x136 = INT64_MIN;

	t30 = ((x133+(x134&x135))%x136);

	if (t30 != 2148150988LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = UINT32_MAX;
	uint64_t x138 = UINT64_MAX;
	int8_t x140 = -1;
	uint64_t t31 = 1877637425938863146LLU;

	t31 = ((x137+(x138&x139))%x140);

	if (t31 != 4294967297LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = 61913U;
	uint64_t t32 = 144445LLU;

	t32 = ((x141+(x142&x143))%x144);

	if (t32 != 348670LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	volatile int64_t t33 = -1634805608293462LL;

	t33 = ((x145+(x146&x147))%x148);

	if (t33 != 4294934528LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t34 = 0U;

	t34 = ((x149+(x150&x151))%x152);

	if (t34 != 62691350U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	uint8_t x156 = 28U;

	t35 = ((x153+(x154&x155))%x156);

	if (t35 != -16LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = 1;
	static volatile uint32_t x163 = 134179315U;
	int16_t x164 = -16;
	int64_t t36 = 94881526LL;

	t36 = ((x161+(x162&x163))%x164);

	if (t36 != -13LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 4949308U;
	uint32_t x166 = 490365U;
	static uint8_t x168 = UINT8_MAX;
	volatile uint64_t t37 = 876861920735362911LLU;

	t37 = ((x165+(x166&x167))%x168);

	if (t37 != 95LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 0U;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t38 = 3339916;

	t38 = ((x169+(x170&x171))%x172);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 4LLU;
	uint64_t x175 = 803592657058528LLU;
	int64_t x176 = INT64_MAX;

	t39 = ((x173+(x174&x175))%x176);

	if (t39 != 803592657058532LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = UINT32_MAX;
	int16_t x179 = INT16_MAX;
	volatile int32_t x180 = 1;

	t40 = ((x177+(x178&x179))%x180);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = INT32_MIN;
	static uint8_t x182 = UINT8_MAX;
	int32_t x183 = -1;
	static volatile int64_t x184 = INT64_MAX;
	volatile int64_t t41 = 1090130LL;

	t41 = ((x181+(x182&x183))%x184);

	if (t41 != -2147483393LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MIN;
	static uint8_t x187 = UINT8_MAX;
	uint8_t x188 = 16U;

	t42 = ((x185+(x186&x187))%x188);

	if (t42 != 15LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	uint64_t t43 = 2735943LLU;

	t43 = ((x189+(x190&x191))%x192);

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 1328239U;
	volatile uint64_t x199 = 263391504LLU;
	static int8_t x200 = -1;
	uint64_t t44 = 557LLU;

	t44 = ((x197+(x198&x199))%x200);

	if (t44 != 1328239LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x201 = -1;
	volatile uint16_t x202 = UINT16_MAX;
	int64_t x203 = 13172464623008LL;
	volatile int32_t x204 = INT32_MIN;
	int64_t t45 = -3875528702LL;

	t45 = ((x201+(x202&x203))%x204);

	if (t45 != 7583LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = 2;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = 17472624849305LLU;
	int32_t x208 = -1588813;
	volatile uint64_t t46 = 4LLU;

	t46 = ((x205+(x206&x207))%x208);

	if (t46 != 17472624820226LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	int8_t x212 = -1;
	volatile int32_t t47 = 1154;

	t47 = ((x209+(x210&x211))%x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x213 = 2U;
	volatile int64_t x214 = 27506836961LL;
	volatile uint16_t x215 = 89U;
	int64_t t48 = -16604396882LL;

	t48 = ((x213+(x214&x215))%x216);

	if (t48 != 67LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x218 = 3U;
	uint16_t x219 = 3U;
	int64_t x220 = 1120113460498LL;

	t49 = ((x217+(x218&x219))%x220);

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x226 = -9;
	int16_t x227 = 2300;
	volatile uint32_t x228 = 2738040U;
	uint32_t t50 = 154944233U;

	t50 = ((x225+(x226&x227))%x228);

	if (t50 != 2164U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 15U;
	uint64_t x230 = 21520353159407LLU;
	int32_t x231 = INT32_MIN;
	static uint64_t x232 = UINT64_MAX;
	uint64_t t51 = 2LLU;

	t51 = ((x229+(x230&x231))%x232);

	if (t51 != 21519933636623LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 234207828;
	volatile uint64_t x234 = UINT64_MAX;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -8;
	static volatile uint64_t t52 = 14797131996LLU;

	t52 = ((x233+(x234&x235))%x236);

	if (t52 != 234207827LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x237 = INT16_MIN;
	static volatile int8_t x238 = 37;
	static int32_t x240 = INT32_MIN;
	int64_t t53 = -265923LL;

	t53 = ((x237+(x238&x239))%x240);

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	volatile int32_t t54 = -91758;

	t54 = ((x241+(x242&x243))%x244);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x245 = -1;
	uint32_t x246 = 320U;
	static int64_t x247 = INT64_MIN;
	static uint32_t x248 = 2U;
	static int64_t t55 = -20849LL;

	t55 = ((x245+(x246&x247))%x248);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x252 = 185U;
	uint32_t t56 = 12354U;

	t56 = ((x249+(x250&x251))%x252);

	if (t56 != 142U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = 67;
	volatile uint8_t x256 = 1U;
	volatile int32_t t57 = -372;

	t57 = ((x253+(x254&x255))%x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x257 = UINT32_MAX;
	int8_t x258 = -1;
	int64_t x260 = INT64_MIN;
	int64_t t58 = 1LL;

	t58 = ((x257+(x258&x259))%x260);

	if (t58 != -5075723499858245LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x262 = 688052457U;
	int32_t x263 = -1;
	int8_t x264 = INT8_MAX;
	uint32_t t59 = 4048U;

	t59 = ((x261+(x262&x263))%x264);

	if (t59 != 111U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = 215062199580LLU;
	uint8_t x266 = 28U;
	int64_t x267 = 834LL;
	static int32_t x268 = INT32_MIN;

	t60 = ((x265+(x266&x267))%x268);

	if (t60 != 215062199580LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MAX;
	static uint16_t x272 = UINT16_MAX;
	uint64_t t61 = 1661LLU;

	t61 = ((x269+(x270&x271))%x272);

	if (t61 != 254LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = -33;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 1038230721;
	int32_t t62 = 2;

	t62 = ((x273+(x274&x275))%x276);

	if (t62 != -14625) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t t63 = -179LL;

	t63 = ((x277+(x278&x279))%x280);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x282 = 1;
	static uint16_t x284 = 1U;
	uint64_t t64 = 13139LLU;

	t64 = ((x281+(x282&x283))%x284);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = 50LLU;
	uint32_t x287 = 4069U;
	int8_t x288 = 6;

	t65 = ((x285+(x286&x287))%x288);

	if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = -1LL;
	volatile int8_t x291 = 0;
	int64_t x292 = -1LL;
	volatile uint64_t t66 = 1095079850033741913LLU;

	t66 = ((x289+(x290&x291))%x292);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x293 = 149LLU;
	uint16_t x295 = 800U;
	volatile uint8_t x296 = 9U;
	uint64_t t67 = 44LLU;

	t67 = ((x293+(x294&x295))%x296);

	if (t67 != 5LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = 1LLU;
	static int8_t x298 = -29;
	static int64_t x300 = -1LL;

	t68 = ((x297+(x298&x299))%x300);

	if (t68 != 31619LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = -1LL;
	int16_t x302 = INT16_MIN;
	static volatile int16_t x303 = -1;
	int16_t x304 = INT16_MAX;
	volatile int64_t t69 = 45968208425593056LL;

	t69 = ((x301+(x302&x303))%x304);

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 263683405478LLU;
	int8_t x306 = 27;
	volatile uint32_t x307 = 1750866254U;
	uint64_t t70 = 226155255LLU;

	t70 = ((x305+(x306&x307))%x308);

	if (t70 != 263683405488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 124U;
	uint32_t t71 = 22183652U;

	t71 = ((x309+(x310&x311))%x312);

	if (t71 != 74396105U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = 534;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = INT16_MIN;
	static volatile uint64_t t72 = 40LLU;

	t72 = ((x313+(x314&x315))%x316);

	if (t72 != 406LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MAX;
	static int32_t x318 = -238399;
	static volatile int64_t x320 = INT64_MAX;

	t73 = ((x317+(x318&x319))%x320);

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x321 = INT8_MIN;
	uint64_t x322 = 5177493218LLU;
	volatile uint16_t x323 = UINT16_MAX;
	uint64_t t74 = 45071886110020LLU;

	t74 = ((x321+(x322&x323))%x324);

	if (t74 != 18018LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x326 = -1;
	volatile int16_t x328 = INT16_MIN;

	t75 = ((x325+(x326&x327))%x328);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	static uint8_t x331 = UINT8_MAX;
	volatile int8_t x332 = -18;
	int64_t t76 = 2899983718399200LL;

	t76 = ((x329+(x330&x331))%x332);

	if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x333 = 2052635097756906LLU;
	uint64_t x334 = 51535316LLU;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t77 = 4140280270208LLU;

	t77 = ((x333+(x334&x335))%x336);

	if (t77 != 64142LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MAX;
	uint16_t x342 = UINT16_MAX;
	volatile int32_t x343 = -26551326;
	uint8_t x344 = UINT8_MAX;
	static int32_t t78 = 265377;

	t78 = ((x341+(x342&x343))%x344);

	if (t78 != 62) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = INT32_MIN;
	static int16_t x346 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t79 = 1109175492925203563LL;

	t79 = ((x345+(x346&x347))%x348);

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x357 = UINT16_MAX;
	static uint32_t x358 = 854788860U;
	static uint32_t x359 = 94259U;
	volatile int64_t t80 = -1045613471000390950LL;

	t80 = ((x357+(x358&x359))%x360);

	if (t80 != 131119LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x362 = UINT8_MAX;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MAX;
	uint64_t t81 = 340349769LLU;

	t81 = ((x361+(x362&x363))%x364);

	if (t81 != 254LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = -2;
	static int64_t x366 = 47264107LL;
	static uint8_t x367 = 56U;
	int64_t x368 = INT64_MIN;
	static int64_t t82 = 39528633994LL;

	t82 = ((x365+(x366&x367))%x368);

	if (t82 != 38LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x371 = INT8_MAX;
	int8_t x372 = -1;
	static uint64_t t83 = 5241888553377150LLU;

	t83 = ((x369+(x370&x371))%x372);

	if (t83 != 63LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x374 = 62U;
	volatile int16_t x376 = INT16_MAX;
	uint64_t t84 = 17380LLU;

	t84 = ((x373+(x374&x375))%x376);

	if (t84 != 23LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = 0LL;
	uint16_t x379 = 459U;
	volatile int64_t x380 = INT64_MAX;
	static volatile int64_t t85 = 5691633LL;

	t85 = ((x377+(x378&x379))%x380);

	if (t85 != 323LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x386 = INT64_MAX;
	int8_t x387 = 0;
	volatile int64_t x388 = 5539113880870LL;
	static int64_t t86 = -447358799046118LL;

	t86 = ((x385+(x386&x387))%x388);

	if (t86 != 1055LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x389 = 31;
	uint8_t x390 = 3U;
	int64_t x391 = INT64_MAX;
	int8_t x392 = 3;
	volatile int64_t t87 = -63987228285934355LL;

	t87 = ((x389+(x390&x391))%x392);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x393 = 37U;
	int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MIN;
	volatile uint64_t x396 = UINT64_MAX;
	uint64_t t88 = 30844LLU;

	t88 = ((x393+(x394&x395))%x396);

	if (t88 != 37LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x397 = 27U;
	static volatile int8_t x399 = 10;
	int8_t x400 = -1;

	t89 = ((x397+(x398&x399))%x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = 58440800176013LL;
	volatile int64_t x404 = -1LL;
	uint64_t t90 = 1513747496173489218LLU;

	t90 = ((x401+(x402&x403))%x404);

	if (t90 != 9223372036991125129LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x405 = UINT16_MAX;
	static uint16_t x406 = UINT16_MAX;
	int16_t x407 = -1;
	int64_t x408 = -139865696597198LL;
	volatile int64_t t91 = 470909787351LL;

	t91 = ((x405+(x406&x407))%x408);

	if (t91 != 131070LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MAX;
	uint64_t x410 = 44871049792968LLU;
	uint32_t x411 = UINT32_MAX;
	uint8_t x412 = 109U;

	t92 = ((x409+(x410&x411))%x412);

	if (t92 != 87LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MAX;
	volatile int32_t t93 = -227905;

	t93 = ((x413+(x414&x415))%x416);

	if (t93 != -32514) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MIN;
	int8_t x420 = -1;
	volatile uint64_t t94 = 599193459LLU;

	t94 = ((x417+(x418&x419))%x420);

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = 29;
	uint64_t x422 = 7105LLU;
	uint16_t x423 = UINT16_MAX;
	int8_t x424 = 2;
	volatile uint64_t t95 = 2474LLU;

	t95 = ((x421+(x422&x423))%x424);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x425 = UINT64_MAX;
	uint8_t x426 = UINT8_MAX;
	int8_t x427 = INT8_MIN;
	volatile uint32_t x428 = UINT32_MAX;

	t96 = ((x425+(x426&x427))%x428);

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x435 = INT32_MAX;
	volatile int8_t x436 = INT8_MAX;
	int32_t t97 = -2334;

	t97 = ((x433+(x434&x435))%x436);

	if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MIN;
	uint32_t x442 = 25015491U;
	uint8_t x444 = 3U;
	uint32_t t98 = 57U;

	t98 = ((x441+(x442&x443))%x444);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = -1;
	uint16_t x450 = 0U;
	int16_t x451 = -1;
	uint32_t x452 = UINT32_MAX;
	uint32_t t99 = 6U;

	t99 = ((x449+(x450&x451))%x452);

	if (t99 != 0U) { NG(); } else { ; }
	
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

