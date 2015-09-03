#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 404369271LLU;
int64_t x4 = -1LL;
volatile uint32_t x14 = 349808U;
uint16_t x25 = 2742U;
volatile uint64_t t4 = 126422800235762LLU;
static int64_t x30 = -719LL;
static int64_t x35 = -111076491030LL;
volatile int64_t t6 = -5042323366829LL;
static int16_t x43 = INT16_MIN;
int16_t x50 = 26;
int64_t t8 = 79575469537LL;
uint64_t t9 = 3552797579LLU;
static int16_t x70 = -482;
static uint16_t x74 = 1U;
volatile int64_t x82 = 1596LL;
volatile int64_t t12 = 832LL;
uint32_t t13 = 3U;
int64_t x90 = -1LL;
uint16_t x92 = 2135U;
uint64_t x94 = UINT64_MAX;
int16_t x100 = 2;
static int16_t x103 = INT16_MAX;
int64_t t17 = -527310109589007635LL;
uint32_t x105 = 1666931500U;
static int8_t x109 = INT8_MIN;
int64_t x112 = INT64_MIN;
int64_t x116 = -701663443848458518LL;
int64_t x128 = -1LL;
static int32_t x132 = INT32_MIN;
volatile int32_t x133 = INT32_MAX;
int64_t x135 = -1LL;
int8_t x136 = 6;
volatile uint64_t t27 = 139139108909860331LLU;
uint64_t x148 = 37585LLU;
static volatile uint64_t t28 = 28072868236981LLU;
int16_t x190 = -1;
volatile int32_t t34 = 285656545;
int64_t x193 = INT64_MAX;
int64_t x196 = INT64_MAX;
static int64_t x212 = INT64_MAX;
volatile uint64_t t39 = 411718688625950890LLU;
volatile uint32_t x222 = UINT32_MAX;
static int64_t x233 = INT64_MAX;
volatile uint64_t t43 = 51LLU;
uint8_t x237 = UINT8_MAX;
uint32_t t44 = 345917334U;
int8_t x241 = 26;
volatile int16_t x242 = INT16_MIN;
uint8_t x253 = 1U;
static volatile int32_t x256 = INT32_MIN;
int16_t x259 = -393;
static int32_t x266 = INT32_MIN;
int8_t x281 = 46;
volatile uint32_t t51 = 1302604584U;
static int8_t x286 = INT8_MIN;
uint64_t x295 = 1677248LLU;
volatile uint32_t t54 = 230034U;
volatile int32_t t56 = 14283696;
static uint32_t x319 = 207338307U;
static volatile int64_t x328 = 6816464LL;
static int32_t x332 = INT32_MIN;
volatile int64_t x333 = 6186149LL;
uint32_t x345 = UINT32_MAX;
int64_t x348 = -28456590681187LL;
int32_t x353 = -14654215;
int32_t x368 = -1;
int32_t x376 = -2970;
static int64_t t67 = 1LL;
static volatile int8_t x379 = 3;
int32_t x388 = 2;
static int8_t x392 = INT8_MIN;
volatile uint64_t t70 = 572575889497039701LLU;
volatile int8_t x404 = 1;
uint32_t t72 = 1712757U;
uint64_t x421 = 17LLU;
uint64_t x459 = UINT64_MAX;
volatile uint64_t t77 = 117384379LLU;
int64_t x469 = -1LL;
int8_t x483 = 6;
static volatile int64_t t80 = 2LL;
uint8_t x485 = UINT8_MAX;
int16_t x487 = INT16_MAX;
static volatile int64_t t82 = -79597LL;
int32_t x505 = INT32_MIN;
int64_t x511 = 0LL;
static volatile uint64_t t85 = 146788587361LLU;
volatile int64_t x515 = -1LL;
volatile int64_t t86 = 14962669LL;
static volatile int64_t x518 = -4824LL;
uint32_t x521 = 26U;
uint8_t x523 = 2U;
static volatile uint32_t x527 = 51U;
volatile int16_t x529 = INT16_MIN;
uint64_t x534 = 1220858463582248893LLU;
int8_t x537 = 0;
volatile int8_t x554 = INT8_MAX;
volatile int32_t x557 = INT32_MIN;
uint32_t t96 = 9673U;
uint32_t x573 = UINT32_MAX;
uint32_t x574 = 26U;


void f0(void) {
	static volatile int8_t x1 = -1;
	int8_t x2 = INT8_MIN;
	volatile uint64_t t0 = 15167900106792LLU;

	t0 = ((x1*(x2+x3))&x4);

	if (t0 != 18446744073305182473LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 3;
	uint16_t x6 = 86U;
	static volatile uint64_t x7 = UINT64_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile uint64_t t1 = 3133LLU;

	t1 = ((x5*(x6+x7))&x8);

	if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	uint64_t x10 = 179007278618000514LLU;
	volatile int8_t x11 = INT8_MIN;
	int32_t x12 = -442766876;
	static uint64_t t2 = 85LLU;

	t2 = ((x9*(x10+x11))&x12);

	if (t2 != 4287180310468215012LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x15 = -327;
	int32_t x16 = 2;
	uint32_t t3 = 3227U;

	t3 = ((x13*(x14+x15))&x16);

	if (t3 != 2U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x26 = INT8_MIN;
	static uint16_t x27 = UINT16_MAX;
	uint64_t x28 = 39143331LLU;

	t4 = ((x25*(x26+x27))&x28);

	if (t4 != 34603522LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MAX;
	uint8_t x31 = UINT8_MAX;
	static int32_t x32 = INT32_MAX;
	volatile int64_t t5 = 3928164LL;

	t5 = ((x29*(x30+x31))&x32);

	if (t5 != 464LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	volatile int32_t x34 = 17;
	int8_t x36 = INT8_MIN;

	t6 = ((x33*(x34+x35))&x36);

	if (t6 != 3639754457513984LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	volatile int16_t x44 = -90;
	volatile int64_t t7 = 25775729LL;

	t7 = ((x41*(x42+x43))&x44);

	if (t7 != 32896LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 1U;
	static int64_t x51 = INT64_MIN;
	static int8_t x52 = -1;

	t8 = ((x49*(x50+x51))&x52);

	if (t8 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MAX;
	static int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MAX;

	t9 = ((x61*(x62+x63))&x64);

	if (t9 != 9223372036854759425LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x69 = 2637037410588384046LLU;
	int8_t x71 = 42;
	uint8_t x72 = 2U;
	static volatile uint64_t t10 = 539993938LLU;

	t10 = ((x69*(x70+x71))&x72);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = -1;
	int16_t x75 = INT16_MAX;
	int32_t x76 = -1305;
	volatile int32_t t11 = -407141475;

	t11 = ((x73*(x74+x75))&x76);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x81 = 3177U;
	int64_t x83 = -1LL;
	static uint16_t x84 = UINT16_MAX;

	t12 = ((x81*(x82+x83))&x84);

	if (t12 != 21043LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = -1;
	static volatile uint8_t x86 = 27U;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = -1;

	t13 = ((x85*(x86+x87))&x88);

	if (t13 != 4294967270U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = 1;
	uint32_t x91 = 4U;
	static volatile int64_t t14 = 277701166888LL;

	t14 = ((x89*(x90+x91))&x92);

	if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile uint32_t x96 = 59676U;
	static volatile uint64_t t15 = 426054878072843LLU;

	t15 = ((x93*(x94+x95))&x96);

	if (t15 != 32768LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = -1;
	int16_t x98 = -1;
	uint32_t x99 = 1U;
	volatile uint32_t t16 = 3384U;

	t16 = ((x97*(x98+x99))&x100);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = -1;
	static int64_t x102 = -1LL;
	int8_t x104 = 1;

	t17 = ((x101*(x102+x103))&x104);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x106 = 11U;
	volatile int16_t x107 = 174;
	volatile int16_t x108 = INT16_MAX;
	uint32_t t18 = 0U;

	t18 = ((x105*(x106+x107))&x108);

	if (t18 != 25292U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 9U;
	volatile int64_t t19 = -11058LL;

	t19 = ((x109*(x110+x111))&x112);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x113 = 307390745U;
	int8_t x114 = 11;
	uint64_t x115 = 978664LLU;
	volatile uint64_t t20 = 114LLU;

	t20 = ((x113*(x114+x115))&x116);

	if (t20 != 299687802896554LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MIN;
	volatile uint64_t x118 = 2158967653565LLU;
	int16_t x119 = 19;
	static int64_t x120 = -1LL;
	uint64_t t21 = 3704933LLU;

	t21 = ((x117*(x118+x119))&x120);

	if (t21 != 18375999021636911104LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x121 = -1194LL;
	static volatile uint64_t x122 = 20307812LLU;
	uint32_t x123 = 15U;
	static int8_t x124 = INT8_MIN;
	uint64_t t22 = 9095902938891682LLU;

	t22 = ((x121*(x122+x123))&x124);

	if (t22 != 18446744049462006144LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int16_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t t23 = 65659700320LLU;

	t23 = ((x125*(x126+x127))&x128);

	if (t23 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x129 = 622958666LL;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = INT32_MIN;
	int64_t t24 = 2773291LL;

	t24 = ((x129*(x130+x131))&x132);

	if (t24 != -1337752724950745088LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x134 = INT16_MAX;
	int64_t t25 = 149063062808LL;

	t25 = ((x133*(x134+x135))&x136);

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x137 = -1;
	uint32_t x138 = 162U;
	volatile int64_t x139 = 6220760292303LL;
	static int64_t x140 = -487241514504933086LL;
	int64_t t26 = -613285525972788LL;

	t26 = ((x137*(x138+x139))&x140);

	if (t26 != -487241686304939774LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x141 = -1;
	uint32_t x142 = 21U;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = 1097155021689591720LLU;

	t27 = ((x141*(x142+x143))&x144);

	if (t27 != 40LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int64_t x147 = 91942798LL;

	t28 = ((x145*(x146+x147))&x148);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = 0;
	uint32_t x154 = UINT32_MAX;
	uint8_t x155 = UINT8_MAX;
	static int8_t x156 = INT8_MIN;
	volatile uint32_t t29 = 89U;

	t29 = ((x153*(x154+x155))&x156);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x169 = INT64_MIN;
	uint16_t x170 = 463U;
	uint64_t x171 = UINT64_MAX;
	volatile int64_t x172 = INT64_MIN;
	static volatile uint64_t t30 = 39610LLU;

	t30 = ((x169*(x170+x171))&x172);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = -49;
	volatile int32_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t31 = -2047;

	t31 = ((x173*(x174+x175))&x176);

	if (t31 != 49) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 7517302U;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 492U;
	volatile int32_t x184 = INT32_MIN;
	uint32_t t32 = 139463U;

	t32 = ((x181*(x182+x183))&x184);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MIN;
	volatile uint32_t x187 = 80U;
	static uint8_t x188 = 6U;
	uint32_t t33 = 30U;

	t33 = ((x185*(x186+x187))&x188);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = INT8_MIN;
	volatile int8_t x191 = INT8_MIN;
	int32_t x192 = -1;

	t34 = ((x189*(x190+x191))&x192);

	if (t34 != 16512) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x194 = -1;
	uint64_t x195 = 1085197LLU;
	volatile uint64_t t35 = 23178267LLU;

	t35 = ((x193*(x194+x195))&x196);

	if (t35 != 9223372036853690612LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x197 = 122008997697LLU;
	uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = -321;
	static uint32_t x200 = 27U;
	volatile uint64_t t36 = 46LLU;

	t36 = ((x197*(x198+x199))&x200);

	if (t36 != 26LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x201 = INT32_MIN;
	uint16_t x202 = 11U;
	int64_t x203 = 1LL;
	volatile int8_t x204 = -1;
	volatile int64_t t37 = 26218410LL;

	t37 = ((x201*(x202+x203))&x204);

	if (t37 != -25769803776LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 148636U;
	static volatile int16_t x207 = INT16_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint32_t t38 = 182787990U;

	t38 = ((x205*(x206+x207))&x208);

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x209 = 11509500276829957LLU;
	static int16_t x210 = INT16_MIN;
	volatile int16_t x211 = INT16_MAX;

	t39 = ((x209*(x210+x211))&x212);

	if (t39 != 9211862536577945851LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x217 = 17073603245LLU;
	uint64_t x218 = 399382LLU;
	static int8_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile uint64_t t40 = 3868514727002033506LLU;

	t40 = ((x217*(x218+x219))&x220);

	if (t40 != 6818872615239680LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x221 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = INT32_MIN;
	volatile uint32_t t41 = 299U;

	t41 = ((x221*(x222+x223))&x224);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 0U;
	uint32_t x227 = UINT32_MAX;
	uint8_t x228 = 118U;
	volatile uint32_t t42 = 144546U;

	t42 = ((x225*(x226+x227))&x228);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = -57;
	static int32_t x236 = INT32_MAX;

	t43 = ((x233*(x234+x235))&x236);

	if (t43 != 58LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 1891U;
	int32_t x240 = -1;

	t44 = ((x237*(x238+x239))&x240);

	if (t44 != 481950U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x243 = 93U;
	uint16_t x244 = 864U;
	volatile uint32_t t45 = 3U;

	t45 = ((x241*(x242+x243))&x244);

	if (t45 != 352U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = 60703315LL;
	volatile uint64_t x250 = 22959LLU;
	int16_t x251 = -109;
	uint64_t x252 = 35LLU;
	uint64_t t46 = 60372820179642248LLU;

	t46 = ((x249*(x250+x251))&x252);

	if (t46 != 34LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x254 = INT32_MAX;
	int32_t x255 = -1;
	int32_t t47 = -31200487;

	t47 = ((x253*(x254+x255))&x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x258 = 27856U;
	int32_t x260 = -34;
	volatile int32_t t48 = 18463;

	t48 = ((x257*(x258+x259))&x260);

	if (t48 != -899907584) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x267 = 149796LLU;
	int32_t x268 = INT32_MIN;
	static volatile uint64_t t49 = 2645005490LLU;

	t49 = ((x265*(x266+x267))&x268);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x277 = 7164769LLU;
	volatile int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	static volatile uint64_t x280 = UINT64_MAX;
	uint64_t t50 = 474230403239LLU;

	t50 = ((x277*(x278+x279))&x280);

	if (t50 != 18446744071875370752LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x282 = INT16_MAX;
	uint32_t x283 = 39074215U;
	int16_t x284 = INT16_MIN;

	t51 = ((x281*(x282+x283))&x284);

	if (t51 != 1798897664U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = INT8_MAX;
	volatile int8_t x287 = INT8_MIN;
	uint8_t x288 = UINT8_MAX;
	static int32_t t52 = 10870834;

	t52 = ((x285*(x286+x287))&x288);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	static int8_t x296 = INT8_MIN;
	uint64_t t53 = 4046223267LLU;

	t53 = ((x293*(x294+x295))&x296);

	if (t53 != 9223372091813160960LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x297 = INT8_MIN;
	static int16_t x298 = -1;
	static uint32_t x299 = 0U;
	volatile uint8_t x300 = 4U;

	t54 = ((x297*(x298+x299))&x300);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 11U;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MAX;
	uint64_t t55 = 108666962455LLU;

	t55 = ((x301*(x302+x303))&x304);

	if (t55 != 118LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x305 = 234;
	int16_t x306 = INT16_MAX;
	uint16_t x307 = UINT16_MAX;
	uint16_t x308 = 2769U;

	t56 = ((x305*(x306+x307))&x308);

	if (t56 != 2560) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x309 = -133294241498LL;
	uint32_t x310 = 7919963U;
	static int16_t x311 = -1;
	uint32_t x312 = 9U;
	volatile int64_t t57 = -148316077888943764LL;

	t57 = ((x309*(x310+x311))&x312);

	if (t57 != 8LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = UINT16_MAX;
	static uint64_t x318 = 1079475985351719263LLU;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t58 = 173107LLU;

	t58 = ((x317*(x318+x319))&x320);

	if (t58 != 195190934864920576LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = -1;
	int8_t x322 = 18;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t59 = 257470834;

	t59 = ((x321*(x322+x323))&x324);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = 319U;
	static int8_t x327 = 23;
	int64_t t60 = 5150LL;

	t60 = ((x325*(x326+x327))&x328);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x329 = 2150005U;
	static uint64_t x330 = 0LLU;
	static volatile uint64_t x331 = 248449012LLU;
	static volatile uint64_t t61 = 5129384889294LLU;

	t61 = ((x329*(x330+x331))&x332);

	if (t61 != 534165082603520LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x334 = -1;
	static int16_t x335 = INT16_MIN;
	static volatile int32_t x336 = INT32_MAX;
	int64_t t62 = 0LL;

	t62 = ((x333*(x334+x335))&x336);

	if (t62 != 1297029979LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x341 = -1;
	uint16_t x342 = 193U;
	volatile uint64_t x343 = 504114319516988LLU;
	uint16_t x344 = UINT16_MAX;
	static volatile uint64_t t63 = 3LLU;

	t63 = ((x341*(x342+x343))&x344);

	if (t63 != 6659LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x346 = 0;
	int16_t x347 = 21;
	static volatile int64_t t64 = 18300143163930443LL;

	t64 = ((x345*(x346+x347))&x348);

	if (t64 != 1862622089LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x354 = 348184824U;
	int16_t x355 = 404;
	static int8_t x356 = -1;
	uint32_t t65 = 2116544809U;

	t65 = ((x353*(x354+x355))&x356);

	if (t65 != 1302006316U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x365 = INT32_MIN;
	static uint32_t x366 = 137U;
	int8_t x367 = -1;
	volatile uint32_t t66 = 1560050994U;

	t66 = ((x365*(x366+x367))&x368);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x373 = UINT32_MAX;
	volatile int64_t x374 = -1LL;
	volatile int8_t x375 = 1;

	t67 = ((x373*(x374+x375))&x376);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = INT16_MIN;
	static uint32_t x378 = UINT32_MAX;
	volatile int32_t x380 = INT32_MIN;
	volatile uint32_t t68 = 1595988U;

	t68 = ((x377*(x378+x379))&x380);

	if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = -1;
	int64_t x387 = INT64_MAX;
	volatile uint64_t t69 = 2128220LLU;

	t69 = ((x385*(x386+x387))&x388);

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 227LLU;
	uint8_t x391 = UINT8_MAX;

	t70 = ((x389*(x390+x391))&x392);

	if (t70 != 18446743038622433280LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x397 = 226415LLU;
	int16_t x398 = -1;
	int16_t x399 = 1;
	static int8_t x400 = INT8_MIN;
	static uint64_t t71 = 13LLU;

	t71 = ((x397*(x398+x399))&x400);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x401 = INT32_MIN;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MAX;

	t72 = ((x401*(x402+x403))&x404);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x405 = 395450308U;
	int64_t x406 = 42LL;
	volatile int16_t x407 = INT16_MIN;
	static int8_t x408 = 7;
	volatile int64_t t73 = -698168LL;

	t73 = ((x405*(x406+x407))&x408);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x417 = INT16_MIN;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = 7078161LLU;
	volatile uint16_t x420 = 58U;
	uint64_t t74 = 13513443086465LLU;

	t74 = ((x417*(x418+x419))&x420);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x422 = 3361U;
	volatile int32_t x423 = INT32_MIN;
	uint64_t x424 = 1367939LLU;
	volatile uint64_t t75 = 4435372963105377LLU;

	t75 = ((x421*(x422+x423))&x424);

	if (t75 != 57089LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x433 = UINT16_MAX;
	static int64_t x434 = 33336015164LL;
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	int64_t t76 = 2LL;

	t76 = ((x433*(x434+x435))&x436);

	if (t76 != 2184673606303744LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x457 = INT16_MIN;
	volatile uint32_t x458 = 847746209U;
	static int8_t x460 = -42;

	t77 = ((x457*(x458+x459))&x460);

	if (t77 != 18446716294761807872LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x470 = INT16_MIN;
	int8_t x471 = 10;
	uint32_t x472 = UINT32_MAX;
	static int64_t t78 = 269268612437610LL;

	t78 = ((x469*(x470+x471))&x472);

	if (t78 != 32758LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x477 = INT64_MIN;
	static uint16_t x478 = 18U;
	volatile uint64_t x479 = 530017244194849LLU;
	int16_t x480 = -584;
	uint64_t t79 = 343583LLU;

	t79 = ((x477*(x478+x479))&x480);

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x481 = UINT32_MAX;
	int16_t x482 = -13;
	int64_t x484 = 118LL;

	t80 = ((x481*(x482+x483))&x484);

	if (t80 != 6LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x486 = 171U;
	uint8_t x488 = UINT8_MAX;
	int32_t t81 = 33;

	t81 = ((x485*(x486+x487))&x488);

	if (t81 != 86) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x489 = 0;
	uint8_t x490 = 4U;
	volatile int64_t x491 = INT64_MIN;
	volatile uint32_t x492 = 937U;

	t82 = ((x489*(x490+x491))&x492);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x501 = -1;
	int64_t x502 = INT64_MAX;
	int16_t x503 = -1;
	volatile int8_t x504 = -14;
	volatile int64_t t83 = 3559478448207279966LL;

	t83 = ((x501*(x502+x503))&x504);

	if (t83 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x506 = -1;
	static uint64_t x507 = UINT64_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile uint64_t t84 = 74046134792LLU;

	t84 = ((x505*(x506+x507))&x508);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x509 = UINT16_MAX;
	uint64_t x510 = 53871607LLU;
	volatile int32_t x512 = INT32_MIN;

	t85 = ((x509*(x510+x511))&x512);

	if (t85 != 3530463117312LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x513 = 53;
	uint8_t x514 = UINT8_MAX;
	int16_t x516 = INT16_MIN;

	t86 = ((x513*(x514+x515))&x516);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x517 = UINT64_MAX;
	static volatile int64_t x519 = INT64_MAX;
	static uint64_t x520 = UINT64_MAX;
	uint64_t t87 = 473LLU;

	t87 = ((x517*(x518+x519))&x520);

	if (t87 != 9223372036854780633LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x522 = -5645637272220435LL;
	int32_t x524 = INT32_MIN;
	volatile int64_t t88 = -1LL;

	t88 = ((x521*(x522+x523))&x524);

	if (t88 != -146786569687138304LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x525 = 3U;
	int64_t x526 = -350926578259LL;
	int32_t x528 = INT32_MIN;
	volatile int64_t t89 = 20650LL;

	t89 = ((x525*(x526+x527))&x528);

	if (t89 != -1054414471168LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x530 = UINT64_MAX;
	int64_t x531 = INT64_MIN;
	int8_t x532 = -48;
	volatile uint64_t t90 = 2130485446128957LLU;

	t90 = ((x529*(x530+x531))&x532);

	if (t90 != 32768LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x533 = INT32_MIN;
	volatile int8_t x535 = INT8_MAX;
	static int16_t x536 = INT16_MIN;
	uint64_t t91 = 62745117LLU;

	t91 = ((x533*(x534+x535))&x536);

	if (t91 != 1050270970188660736LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x538 = 6763687918LL;
	static uint8_t x539 = 106U;
	int64_t x540 = INT64_MIN;
	volatile int64_t t92 = 1LL;

	t92 = ((x537*(x538+x539))&x540);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x541 = -1;
	int16_t x542 = 1;
	uint64_t x543 = 598875053198142LLU;
	static volatile int64_t x544 = 3963081447117628064LL;
	uint64_t t93 = 105842568662283831LLU;

	t93 = ((x541*(x542+x543))&x544);

	if (t93 != 3962482745214509184LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x549 = INT32_MIN;
	int64_t x550 = -1LL;
	int8_t x551 = -1;
	int32_t x552 = INT32_MAX;
	volatile int64_t t94 = 76748LL;

	t94 = ((x549*(x550+x551))&x552);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x553 = 7816989090388LLU;
	uint16_t x555 = 12464U;
	uint64_t x556 = UINT64_MAX;
	uint64_t t95 = 16859172569LLU;

	t95 = ((x553*(x554+x555))&x556);

	if (t95 != 98423709637075308LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x558 = UINT32_MAX;
	int16_t x559 = -1;
	uint32_t x560 = UINT32_MAX;

	t96 = ((x557*(x558+x559))&x560);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x561 = INT16_MIN;
	uint8_t x562 = UINT8_MAX;
	uint64_t x563 = 3291741113178515483LLU;
	uint16_t x564 = 1U;
	volatile uint64_t t97 = 101732LLU;

	t97 = ((x561*(x562+x563))&x564);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x569 = INT8_MIN;
	uint16_t x570 = 1211U;
	int64_t x571 = -226082914LL;
	static int64_t x572 = INT64_MIN;
	int64_t t98 = 1781330459098492598LL;

	t98 = ((x569*(x570+x571))&x572);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x575 = INT8_MIN;
	volatile int8_t x576 = INT8_MAX;
	uint32_t t99 = 87437240U;

	t99 = ((x573*(x574+x575))&x576);

	if (t99 != 102U) { NG(); } else { ; }
	
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

