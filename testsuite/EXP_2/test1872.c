#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 21549880317LLU;
int64_t x19 = -22290002373LL;
int64_t t3 = 81030356422LL;
int32_t x23 = -1;
static int16_t x24 = INT16_MIN;
static uint8_t x25 = UINT8_MAX;
int8_t x28 = INT8_MAX;
uint8_t x30 = 30U;
int8_t x50 = -1;
uint32_t x55 = UINT32_MAX;
uint16_t x64 = 53U;
int32_t x79 = 37123;
uint16_t x80 = 739U;
int32_t x82 = INT32_MIN;
volatile int16_t x87 = INT16_MAX;
int32_t x88 = INT32_MIN;
int32_t x92 = INT32_MAX;
uint32_t x94 = 28765U;
static uint8_t x96 = UINT8_MAX;
static volatile uint32_t t19 = 63U;
static int64_t x100 = -1LL;
int64_t t20 = 4622570LL;
static volatile uint64_t x113 = UINT64_MAX;
uint8_t x114 = UINT8_MAX;
int64_t x119 = INT64_MIN;
uint64_t x121 = 6585287253902LLU;
int64_t x122 = 2788678LL;
uint32_t x123 = 145U;
int16_t x132 = INT16_MIN;
int32_t t28 = -1;
int32_t x137 = INT32_MIN;
uint64_t t30 = 1096990LLU;
int16_t x141 = INT16_MAX;
uint32_t x142 = UINT32_MAX;
uint64_t x147 = 100235LLU;
int32_t x164 = INT32_MAX;
static volatile uint32_t t36 = 2037656U;
int16_t x165 = 931;
volatile int16_t x166 = -3478;
uint32_t x172 = 0U;
static volatile uint64_t t38 = 3634837LLU;
volatile int16_t x182 = -45;
uint8_t x185 = 0U;
int8_t x187 = -1;
int32_t t43 = -2475;
uint16_t x195 = UINT16_MAX;
uint32_t x204 = 1877127514U;
volatile uint64_t x206 = 187495863767712725LLU;
static int64_t x209 = 48706LL;
int64_t x214 = INT64_MAX;
uint64_t t49 = 20113LLU;
static uint8_t x217 = 1U;
uint64_t x220 = 1291244195232LLU;
uint64_t t50 = 1394LLU;
volatile int64_t x221 = INT64_MIN;
static int64_t x223 = INT64_MAX;
volatile int8_t x233 = INT8_MIN;
static int16_t x235 = INT16_MIN;
volatile int32_t x236 = -1;
volatile int8_t x237 = INT8_MAX;
int64_t x240 = INT64_MIN;
static volatile uint64_t t53 = 5944081129LLU;
int64_t x255 = INT64_MIN;
static volatile uint32_t x258 = 26927U;
uint32_t x264 = 5U;
static volatile int64_t t59 = 638344475864LL;
volatile uint64_t t60 = 224076737LLU;
int64_t x269 = -79944LL;
static volatile int16_t x274 = INT16_MIN;
volatile int64_t t63 = -1685955094230LL;
static int8_t x284 = 4;
int64_t t64 = -4409014315LL;
static int32_t x286 = -1;
static uint64_t t66 = 123697635120LLU;
uint16_t x293 = 7U;
volatile int64_t t67 = 163402LL;
int32_t x300 = INT32_MIN;
uint16_t x304 = 6U;
volatile int8_t x309 = -6;
static int64_t x311 = -948605126532392LL;
int8_t x318 = -1;
volatile int64_t x327 = INT64_MIN;
static uint8_t x333 = 31U;
int8_t x338 = -58;
volatile uint64_t x339 = UINT64_MAX;
uint64_t t77 = 86865LLU;
volatile uint8_t x344 = 0U;
static int64_t x345 = -1LL;
volatile uint64_t x348 = 101168LLU;
uint64_t t79 = 5990499349928710LLU;
uint64_t x349 = UINT64_MAX;
int8_t x351 = 0;
int64_t x354 = INT64_MAX;
int16_t x361 = 53;
uint8_t x368 = 59U;
static volatile int32_t x384 = -1;
static volatile int16_t x388 = INT16_MIN;
static int32_t x390 = 243663;
int64_t x393 = INT64_MIN;
uint64_t x395 = 59LLU;
uint64_t t91 = 335944LLU;
uint64_t x417 = UINT64_MAX;
volatile uint8_t x418 = 0U;
int32_t x420 = INT32_MIN;
volatile int64_t t98 = -91805944LL;
uint32_t x426 = 33170543U;


void f0(void) {
	static uint64_t x1 = 5610LLU;
	int8_t x2 = -1;
	int64_t x3 = 6534022810193LL;
	int64_t x4 = 2073794380357633180LL;

	t0 = ((x1+(x2|x3))^x4);

	if (t0 != 2073794380357636469LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	int64_t x6 = INT64_MIN;
	static uint64_t x7 = 1634027LLU;
	uint8_t x8 = 1U;
	volatile uint64_t t1 = 60706109492LLU;

	t1 = ((x5+(x6|x7))^x8);

	if (t1 != 9223372036856409838LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 66;
	static uint64_t x14 = 464540959684205878LLU;
	uint64_t x15 = UINT64_MAX;
	static int8_t x16 = INT8_MIN;
	static volatile uint64_t t2 = 70412705LLU;

	t2 = ((x13+(x14|x15))^x16);

	if (t2 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static volatile uint16_t x18 = UINT16_MAX;
	static uint8_t x20 = 0U;

	t3 = ((x17+(x18|x19))^x20);

	if (t3 != -22289973250LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	int16_t x22 = INT16_MIN;
	int32_t t4 = 6;

	t4 = ((x21+(x22|x23))^x24);

	if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -1;
	int64_t x27 = 201LL;
	volatile int64_t t5 = -423852921108581552LL;

	t5 = ((x25+(x26|x27))^x28);

	if (t5 != 129LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = 116LL;
	int8_t x31 = INT8_MAX;
	int32_t x32 = INT32_MAX;
	volatile int64_t t6 = 33716LL;

	t6 = ((x29+(x30|x31))^x32);

	if (t6 != 2147483404LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x33 = 30U;
	uint8_t x34 = 15U;
	static int16_t x35 = -1;
	int64_t x36 = INT64_MIN;
	int64_t t7 = 1LL;

	t7 = ((x33+(x34|x35))^x36);

	if (t7 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x45 = -1;
	static volatile int8_t x46 = INT8_MAX;
	static uint8_t x47 = 126U;
	int8_t x48 = 6;
	int32_t t8 = -4036009;

	t8 = ((x45+(x46|x47))^x48);

	if (t8 != 120) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1032;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MAX;
	uint64_t t9 = 10593820773014LLU;

	t9 = ((x49+(x50|x51))^x52);

	if (t9 != 18446744073709519880LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 22U;
	int64_t x54 = -1LL;
	int8_t x56 = -1;
	int64_t t10 = 154894953LL;

	t10 = ((x53+(x54|x55))^x56);

	if (t10 != -22LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -1;
	uint8_t x58 = UINT8_MAX;
	int32_t x59 = 0;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t11 = -43;

	t11 = ((x57+(x58|x59))^x60);

	if (t11 != -130) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 756277250LLU;
	int32_t x62 = INT32_MIN;
	static volatile int16_t x63 = INT16_MAX;
	volatile uint64_t t12 = 3991LLU;

	t12 = ((x61+(x62|x63))^x64);

	if (t12 != 18446744072318378036LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = -28;
	static volatile int8_t x68 = 2;
	volatile uint64_t t13 = 2035439783LLU;

	t13 = ((x65+(x66|x67))^x68);

	if (t13 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = 16387996331LL;
	int32_t x71 = INT32_MAX;
	uint8_t x72 = 0U;
	volatile int64_t t14 = -66885362626LL;

	t14 = ((x69+(x70|x71))^x72);

	if (t14 != 17179869055LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 14U;
	int8_t x78 = -1;
	int32_t t15 = 217601047;

	t15 = ((x77+(x78|x79))^x80);

	if (t15 != 750) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -1;
	volatile int8_t x83 = 1;
	int8_t x84 = -9;
	int32_t t16 = 22885;

	t16 = ((x81+(x82|x83))^x84);

	if (t16 != 2147483639) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 14219U;
	int16_t x86 = INT16_MIN;
	volatile int32_t t17 = -7906;

	t17 = ((x85+(x86|x87))^x88);

	if (t17 != -2147469430) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = 70;
	int64_t x90 = INT64_MIN;
	uint16_t x91 = 3U;
	static volatile int64_t t18 = 4253539189LL;

	t18 = ((x89+(x90|x91))^x92);

	if (t18 != -9223372034707292234LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x93 = 0U;
	volatile int16_t x95 = INT16_MIN;

	t19 = ((x93+(x94|x95))^x96);

	if (t19 != 4294963362U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	int32_t x99 = INT32_MIN;

	t20 = ((x97+(x98|x99))^x100);

	if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	volatile int32_t x102 = -6788;
	uint32_t x103 = 0U;
	int32_t x104 = 0;
	volatile uint32_t t21 = 85784U;

	t21 = ((x101+(x102|x103))^x104);

	if (t21 != 2147476860U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = INT8_MAX;
	static int64_t x106 = -1LL;
	static int16_t x107 = INT16_MIN;
	uint16_t x108 = 78U;
	volatile int64_t t22 = -7701LL;

	t22 = ((x105+(x106|x107))^x108);

	if (t22 != 48LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x109 = 27630432U;
	int32_t x110 = 9806342;
	static uint64_t x111 = UINT64_MAX;
	int64_t x112 = INT64_MIN;
	uint64_t t23 = 3003421986967394LLU;

	t23 = ((x109+(x110|x111))^x112);

	if (t23 != 9223372036882406239LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x115 = 10U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t24 = 2367254089729675308LLU;

	t24 = ((x113+(x114|x115))^x116);

	if (t24 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = -1;
	int16_t x118 = -9721;
	uint16_t x120 = 1U;
	int64_t t25 = -34692707586799LL;

	t25 = ((x117+(x118|x119))^x120);

	if (t25 != -9721LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x124 = -1;
	volatile uint64_t t26 = 0LLU;

	t26 = ((x121+(x122|x123))^x124);

	if (t26 != 18446737488419508890LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	uint32_t x127 = 2364U;
	int64_t x128 = INT64_MIN;
	volatile int64_t t27 = 123148325281LL;

	t27 = ((x125+(x126|x127))^x128);

	if (t27 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = UINT16_MAX;
	static int16_t x130 = -669;
	uint16_t x131 = 817U;

	t28 = ((x129+(x130|x131))^x132);

	if (t28 != -32910) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x133 = INT32_MIN;
	uint16_t x134 = 2356U;
	int64_t x135 = 3044002LL;
	int32_t x136 = INT32_MIN;
	int64_t t29 = 449LL;

	t29 = ((x133+(x134|x135))^x136);

	if (t29 != 3046326LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = INT64_MIN;
	static volatile uint64_t x139 = 1LLU;
	int32_t x140 = -1;

	t30 = ((x137+(x138|x139))^x140);

	if (t30 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x143 = 21494884;
	uint8_t x144 = UINT8_MAX;
	volatile uint32_t t31 = 186958672U;

	t31 = ((x141+(x142|x143))^x144);

	if (t31 != 32513U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 1251;
	uint16_t x146 = 3U;
	static int32_t x148 = 12855;
	volatile uint64_t t32 = 65493933244644529LLU;

	t32 = ((x145+(x146|x147))^x148);

	if (t32 != 114265LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MAX;
	volatile int8_t x150 = 0;
	static int64_t x151 = INT64_MIN;
	int8_t x152 = 3;
	static int64_t t33 = -47610568220LL;

	t33 = ((x149+(x150|x151))^x152);

	if (t33 != -4LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MAX;
	volatile int32_t x155 = INT32_MIN;
	uint32_t x156 = 93U;
	static volatile uint32_t t34 = 497U;

	t34 = ((x153+(x154|x155))^x156);

	if (t34 != 4294967074U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = INT16_MIN;
	int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MIN;
	volatile int32_t x160 = INT32_MAX;
	volatile int32_t t35 = 13693;

	t35 = ((x157+(x158|x159))^x160);

	if (t35 != -2147418113) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x161 = INT32_MIN;
	uint32_t x162 = 1752U;
	volatile int16_t x163 = 7933;

	t36 = ((x161+(x162|x163))^x164);

	if (t36 != 4294959362U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x167 = 508U;
	int8_t x168 = INT8_MIN;
	int32_t t37 = -33450669;

	t37 = ((x165+(x166|x167))^x168);

	if (t37 != 2081) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = 777691;
	volatile uint64_t x170 = 41830476LLU;
	uint64_t x171 = 25840204601806140LLU;

	t38 = ((x169+(x170|x171))^x172);

	if (t38 != 25840204640856919LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = 49040LLU;
	uint64_t x176 = UINT64_MAX;
	static volatile uint64_t t39 = 323802804938LLU;

	t39 = ((x173+(x174|x175))^x176);

	if (t39 != 2147434480LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 102U;
	int8_t x178 = INT8_MIN;
	static uint8_t x179 = 47U;
	int64_t x180 = -1LL;
	static int64_t t40 = -2236447188567471333LL;

	t40 = ((x177+(x178|x179))^x180);

	if (t40 != -22LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = -1LL;
	static uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile int64_t t41 = -253047007515772LL;

	t41 = ((x181+(x182|x183))^x184);

	if (t41 != -4294967170LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x186 = 4;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t42 = -898;

	t42 = ((x185+(x186|x187))^x188);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	static int32_t x191 = INT32_MIN;
	int32_t x192 = 66107;

	t43 = ((x189+(x190|x191))^x192);

	if (t43 != -97596) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 1LLU;
	static int16_t x194 = INT16_MIN;
	int16_t x196 = INT16_MAX;
	uint64_t t44 = 40483869262443LLU;

	t44 = ((x193+(x194|x195))^x196);

	if (t44 != 32767LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x197 = 1367U;
	uint32_t x198 = UINT32_MAX;
	volatile int64_t x199 = -1LL;
	uint8_t x200 = UINT8_MAX;
	static volatile int64_t t45 = 848236113LL;

	t45 = ((x197+(x198|x199))^x200);

	if (t45 != 1449LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x201 = INT32_MAX;
	int8_t x202 = -1;
	static uint32_t x203 = 394144U;
	volatile uint32_t t46 = 109U;

	t46 = ((x201+(x202|x203))^x204);

	if (t46 != 270356132U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = UINT32_MAX;
	uint16_t x207 = 22271U;
	int16_t x208 = INT16_MIN;
	volatile uint64_t t47 = 279LLU;

	t47 = ((x205+(x206|x207))^x208);

	if (t47 != 18259248205646878718LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x210 = INT16_MAX;
	volatile int64_t x211 = INT64_MIN;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int64_t t48 = -5467207LL;

	t48 = ((x209+(x210|x211))^x212);

	if (t48 != -9223372036854694210LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x213 = 496147703845358635LLU;
	uint16_t x215 = UINT16_MAX;
	uint32_t x216 = 15U;

	t49 = ((x213+(x214|x215))^x216);

	if (t49 != 9719519740700134437LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = 48;
	int32_t x219 = 2;

	t50 = ((x217+(x218|x219))^x220);

	if (t50 != 1291244195219LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x222 = UINT16_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	int64_t t51 = 2210096603322LL;

	t51 = ((x221+(x222|x223))^x224);

	if (t51 != -256LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x234 = INT64_MAX;
	static volatile int64_t t52 = 9112539617588LL;

	t52 = ((x233+(x234|x235))^x236);

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x238 = INT64_MIN;
	volatile uint64_t x239 = 29117478LLU;

	t53 = ((x237+(x238|x239))^x240);

	if (t53 != 29117605LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x242 = 0;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = -11388;
	static int32_t t54 = -4556;

	t54 = ((x241+(x242|x243))^x244);

	if (t54 != -11269) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = -1;
	static uint64_t x246 = UINT64_MAX;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	uint64_t t55 = 30090418934LLU;

	t55 = ((x245+(x246|x247))^x248);

	if (t55 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = 14U;
	int16_t x250 = INT16_MIN;
	static int32_t x251 = -1;
	int32_t x252 = -916022;
	int32_t t56 = -1467285;

	t56 = ((x249+(x250|x251))^x252);

	if (t56 != -916025) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x253 = 3;
	int16_t x254 = -1;
	static int32_t x256 = INT32_MIN;
	volatile int64_t t57 = -11717624671376190LL;

	t57 = ((x253+(x254|x255))^x256);

	if (t57 != -2147483646LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 14U;
	volatile uint8_t x259 = UINT8_MAX;
	static volatile uint8_t x260 = 1U;
	volatile uint32_t t58 = 107U;

	t58 = ((x257+(x258|x259))^x260);

	if (t58 != 27148U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MAX;
	static int8_t x262 = INT8_MIN;
	volatile int16_t x263 = INT16_MAX;

	t59 = ((x261+(x262|x263))^x264);

	if (t59 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = 23828;
	uint16_t x266 = UINT16_MAX;
	static uint64_t x267 = UINT64_MAX;
	int32_t x268 = -1;

	t60 = ((x265+(x266|x267))^x268);

	if (t60 != 18446744073709527788LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x270 = 9U;
	int16_t x271 = 57;
	uint64_t x272 = 4679994968LLU;
	uint64_t t61 = 294402429384808LLU;

	t61 = ((x269+(x270|x271))^x272);

	if (t61 != 18446744069029611945LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 79LLU;
	int32_t x275 = -28785862;
	static uint32_t x276 = 12731U;
	volatile uint64_t t62 = 4020415412502LLU;

	t62 = ((x273+(x274|x275))^x276);

	if (t62 != 18446744073709548082LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x277 = -2;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -103124412398392073LL;

	t63 = ((x277+(x278|x279))^x280);

	if (t63 != 103124412398392201LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = -1LL;
	volatile uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = -1LL;

	t64 = ((x281+(x282|x283))^x284);

	if (t64 != -6LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = 430975755;
	uint32_t x287 = 2U;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t65 = 7993075LLU;

	t65 = ((x285+(x286|x287))^x288);

	if (t65 != 18446744073278575861LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = -1;
	int8_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	volatile int64_t x292 = INT64_MAX;

	t66 = ((x289+(x290|x291))^x292);

	if (t66 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x294 = INT64_MIN;
	int8_t x295 = -1;
	uint32_t x296 = UINT32_MAX;

	t67 = ((x293+(x294|x295))^x296);

	if (t67 != 4294967289LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 3U;
	static volatile int16_t x298 = INT16_MIN;
	int16_t x299 = 28;
	int32_t t68 = -757608118;

	t68 = ((x297+(x298|x299))^x300);

	if (t68 != 2147450911) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x301 = 60837LLU;
	volatile int8_t x302 = INT8_MAX;
	static volatile int16_t x303 = INT16_MIN;
	static volatile uint64_t t69 = 183426LLU;

	t69 = ((x301+(x302|x303))^x304);

	if (t69 != 28194LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = INT32_MAX;
	int16_t x307 = -1;
	volatile int64_t x308 = INT64_MIN;
	int64_t t70 = -1208514LL;

	t70 = ((x305+(x306|x307))^x308);

	if (t70 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x310 = UINT32_MAX;
	int8_t x312 = -1;
	int64_t t71 = 863LL;

	t71 = ((x309+(x310|x311))^x312);

	if (t71 != 948603656863750LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = 16081U;
	volatile int32_t x319 = 127295229;
	int64_t x320 = -1LL;
	volatile int64_t t72 = -2515363833367LL;

	t72 = ((x317+(x318|x319))^x320);

	if (t72 != -16081LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = 33894990U;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = -1LL;
	volatile int32_t x324 = 170865809;
	static volatile int64_t t73 = -23942929LL;

	t73 = ((x321+(x322|x323))^x324);

	if (t73 != 136971996LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = 10U;
	int16_t x326 = -5;
	int16_t x328 = 5789;
	volatile int64_t t74 = -110660166912026073LL;

	t74 = ((x325+(x326|x327))^x328);

	if (t74 != 5784LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = UINT16_MAX;
	static uint8_t x330 = UINT8_MAX;
	int8_t x331 = -1;
	volatile int32_t x332 = -1;
	int32_t t75 = 59825075;

	t75 = ((x329+(x330|x331))^x332);

	if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x334 = 846717LLU;
	static uint8_t x335 = 15U;
	static uint16_t x336 = 2018U;
	volatile uint64_t t76 = 348021026648LLU;

	t76 = ((x333+(x334|x335))^x336);

	if (t76 != 846972LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint64_t x340 = 65081239LLU;

	t77 = ((x337+(x338|x339))^x340);

	if (t77 != 65081193LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = 6LL;
	uint8_t x343 = UINT8_MAX;
	static volatile int64_t t78 = 494684628211247LL;

	t78 = ((x341+(x342|x343))^x344);

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x346 = UINT8_MAX;
	static int8_t x347 = -1;

	t79 = ((x345+(x346|x347))^x348);

	if (t79 != 18446744073709450446LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x350 = 6757LLU;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t80 = 117660713302LLU;

	t80 = ((x349+(x350|x351))^x352);

	if (t80 != 18446744073709544932LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -13;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t81 = 7740LL;

	t81 = ((x353+(x354|x355))^x356);

	if (t81 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x358 = -624;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = 21914U;
	int32_t t82 = 13;

	t82 = ((x357+(x358|x359))^x360);

	if (t82 != 43029) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x362 = INT8_MAX;
	static int8_t x363 = -1;
	int64_t x364 = INT64_MAX;
	int64_t t83 = -8694436634363LL;

	t83 = ((x361+(x362|x363))^x364);

	if (t83 != 9223372036854775755LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x365 = -1LL;
	static uint64_t x366 = 286681876225065441LLU;
	volatile uint64_t x367 = 3799LLU;
	uint64_t t84 = 26110008LLU;

	t84 = ((x365+(x366|x367))^x368);

	if (t84 != 286681876225069005LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x369 = 1U;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -37;
	uint8_t x372 = 3U;
	int32_t t85 = -74;

	t85 = ((x369+(x370|x371))^x372);

	if (t85 != -33) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x373 = 1692U;
	volatile uint16_t x374 = 3U;
	int64_t x375 = -1LL;
	uint8_t x376 = 1U;
	volatile int64_t t86 = -4875381521LL;

	t86 = ((x373+(x374|x375))^x376);

	if (t86 != 1690LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x378 = 181U;
	uint16_t x379 = 7U;
	int16_t x380 = INT16_MIN;
	static uint32_t t87 = 29708822U;

	t87 = ((x377+(x378|x379))^x380);

	if (t87 != 4294934838U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = -1;
	int64_t x382 = -3515955497696414LL;
	uint8_t x383 = 1U;
	int64_t t88 = -4800706342553891LL;

	t88 = ((x381+(x382|x383))^x384);

	if (t88 != 3515955497696413LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = -1LL;
	volatile int8_t x386 = -24;
	static volatile int8_t x387 = INT8_MIN;
	volatile int64_t t89 = 45LL;

	t89 = ((x385+(x386|x387))^x388);

	if (t89 != 32743LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x389 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	static int16_t x392 = INT16_MIN;
	int32_t t90 = -112;

	t90 = ((x389+(x390|x391))^x392);

	if (t90 != 65487) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x394 = INT16_MIN;
	static int16_t x396 = 12;

	t91 = ((x393+(x394|x395))^x396);

	if (t91 != 9223372036854743095LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x397 = 189U;
	static int16_t x398 = INT16_MIN;
	volatile int32_t x399 = 6220092;
	int16_t x400 = -8148;
	int32_t t92 = 856092;

	t92 = ((x397+(x398|x399))^x400);

	if (t92 != 2517) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	static int16_t x403 = -1;
	int64_t x404 = 209842591LL;
	int64_t t93 = -764595410LL;

	t93 = ((x401+(x402|x403))^x404);

	if (t93 != -209842464LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x405 = INT64_MIN;
	int64_t x406 = 55469036LL;
	int8_t x407 = 1;
	int16_t x408 = -3893;
	int64_t t94 = 8491191719LL;

	t94 = ((x405+(x406|x407))^x408);

	if (t94 != 9223372036799304486LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x409 = UINT16_MAX;
	static int8_t x410 = 1;
	volatile int64_t x411 = -3266936895351436369LL;
	static int8_t x412 = INT8_MIN;
	volatile int64_t t95 = 100769LL;

	t95 = ((x409+(x410|x411))^x412);

	if (t95 != 3266936895351370798LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x413 = -1;
	volatile uint8_t x414 = UINT8_MAX;
	uint8_t x415 = 1U;
	int16_t x416 = -1;
	static volatile int32_t t96 = -254;

	t96 = ((x413+(x414|x415))^x416);

	if (t96 != -255) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x419 = INT64_MAX;
	volatile uint64_t t97 = 24027366LLU;

	t97 = ((x417+(x418|x419))^x420);

	if (t97 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = INT64_MAX;
	int64_t x422 = 3148299538237045200LL;
	static int8_t x423 = INT8_MIN;
	volatile int32_t x424 = -4;

	t98 = ((x421+(x422|x423))^x424);

	if (t98 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -1LL;
	uint64_t x427 = UINT64_MAX;
	static volatile int32_t x428 = 1494622;
	volatile uint64_t t99 = 1267544279667846387LLU;

	t99 = ((x425+(x426|x427))^x428);

	if (t99 != 18446744073708056992LLU) { NG(); } else { ; }
	
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

