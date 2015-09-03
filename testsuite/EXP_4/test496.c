#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 2U;
int32_t x6 = INT32_MIN;
uint8_t x19 = UINT8_MAX;
int16_t x26 = INT16_MIN;
int32_t x29 = INT32_MIN;
int64_t x30 = 979360978778LL;
int8_t x32 = INT8_MIN;
uint64_t x33 = 40577017LLU;
uint64_t t7 = 305LLU;
uint64_t x38 = 14045060987151LLU;
uint8_t x39 = 2U;
int32_t x53 = -1;
int32_t t11 = -1245367;
int16_t x57 = INT16_MAX;
volatile int16_t x59 = INT16_MIN;
uint16_t x60 = UINT16_MAX;
volatile int8_t x62 = INT8_MIN;
volatile int64_t t17 = 1027878593LL;
uint8_t x88 = 0U;
static volatile uint16_t x93 = 13331U;
int64_t x96 = INT64_MAX;
uint64_t x98 = UINT64_MAX;
static uint32_t x103 = UINT32_MAX;
uint32_t t21 = 370711U;
uint8_t x122 = 3U;
volatile int32_t t23 = 45215169;
volatile int16_t x125 = 0;
static int16_t x126 = -1;
uint64_t x128 = 3591LLU;
static volatile uint8_t x153 = 42U;
static int32_t t29 = 648746;
int32_t x160 = -1;
uint64_t t30 = 4510835624044801511LLU;
volatile uint8_t x165 = 8U;
int64_t x171 = 0LL;
int64_t t33 = 23LL;
int8_t x205 = INT8_MAX;
int16_t x233 = 142;
static int16_t x234 = -2;
volatile int64_t x236 = -2546LL;
int64_t x238 = -1LL;
static int64_t t44 = -15LL;
int8_t x250 = -1;
int8_t x255 = -1;
int32_t x259 = -1;
int64_t t47 = -356382208440LL;
static int16_t x265 = INT16_MIN;
static int16_t x269 = 0;
uint32_t x272 = UINT32_MAX;
static int16_t x279 = -1;
uint32_t t50 = 7404U;
uint32_t x286 = 7650738U;
static int16_t x287 = INT16_MIN;
static int64_t t52 = 7030118518LL;
volatile int32_t t54 = 14369971;
int8_t x308 = -1;
static int8_t x316 = 1;
static uint32_t x331 = 0U;
static uint32_t x332 = UINT32_MAX;
volatile int64_t t60 = 10108414121045LL;
int64_t t61 = -2147613603LL;
int8_t x338 = -27;
static int64_t t64 = -21931750912650LL;
volatile int64_t x357 = INT64_MAX;
uint16_t x362 = 0U;
volatile int64_t t69 = 31835403313LL;
static uint8_t x386 = UINT8_MAX;
static uint32_t x387 = UINT32_MAX;
volatile uint16_t x390 = UINT16_MAX;
volatile int32_t t71 = 502028;
volatile uint64_t x399 = 10705548LLU;
int8_t x401 = 1;
uint64_t t76 = 766734678694215LLU;
int64_t x418 = 12774247043LL;
uint64_t t77 = 210610148159121699LLU;
uint8_t x427 = 6U;
uint16_t x429 = 39U;
uint8_t x430 = 0U;
int8_t x439 = -10;
volatile int8_t x440 = -1;
volatile int32_t x443 = -1;
uint32_t x454 = 2401330U;
volatile int8_t x455 = INT8_MIN;
int8_t x461 = INT8_MAX;
uint64_t x463 = UINT64_MAX;
int16_t x464 = 11;
uint16_t x467 = 3656U;
int16_t x468 = -8239;
volatile int16_t x469 = INT16_MIN;
int32_t x478 = 30504746;
volatile uint8_t x484 = 0U;
int32_t x485 = -37355475;
int8_t x486 = INT8_MIN;
static int32_t x496 = INT32_MIN;
static int16_t x508 = -1;
uint64_t x509 = 487954116LLU;
uint64_t x511 = UINT64_MAX;
int8_t x519 = 1;
volatile int8_t x529 = -4;
static uint64_t x532 = 223284663LLU;


void f0(void) {
	int32_t x1 = -1;
	static volatile int16_t x2 = -1;
	int16_t x4 = -14387;
	volatile uint32_t t0 = 2079539U;

	t0 = (x1-(x2^(x3*x4)));

	if (t0 != 4294938522U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 2043;
	uint32_t x7 = UINT32_MAX;
	volatile uint32_t x8 = 528631U;
	uint32_t t1 = 49192257U;

	t1 = (x5-(x6^(x7*x8)));

	if (t1 != 2148014322U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	static int64_t x14 = INT64_MIN;
	uint64_t x15 = 43000350LLU;
	int8_t x16 = INT8_MIN;
	static uint64_t t2 = 3106781093864872782LLU;

	t2 = (x13-(x14^(x15*x16)));

	if (t2 != 9223372042358820607LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile int8_t x18 = INT8_MAX;
	uint64_t x20 = 505392035LLU;
	volatile uint64_t t3 = 1482LLU;

	t3 = (x17-(x18^(x19*x20)));

	if (t3 != 18446743944834582622LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MAX;
	int8_t x22 = INT8_MAX;
	volatile int16_t x23 = 23;
	volatile int16_t x24 = 107;
	volatile int32_t t4 = -866;

	t4 = (x21-(x22^(x23*x24)));

	if (t4 != -2403) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = 32805779LL;
	static int64_t t5 = 988277531786513348LL;

	t5 = (x25-(x26^(x27*x28)));

	if (t5 != 2149926769554LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x31 = INT16_MAX;
	int64_t t6 = 105075LL;

	t6 = (x29-(x30^(x31*x32)));

	if (t6 != 977210533926LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	int32_t x35 = -10930;
	volatile uint64_t x36 = 92LLU;

	t7 = (x33-(x34^(x35*x36)));

	if (t7 != 39571569LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int64_t x40 = -1LL;
	volatile uint64_t t8 = 7508661760556LLU;

	t8 = (x37-(x38^(x39*x40)));

	if (t8 != 9223386081915762959LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 14687;
	static int16_t x42 = -32;
	uint8_t x43 = 21U;
	uint16_t x44 = 54U;
	static volatile int32_t t9 = 108081;

	t9 = (x41-(x42^(x43*x44)));

	if (t9 != 15825) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = -1;
	static volatile int16_t x50 = -1;
	int16_t x51 = -1;
	int8_t x52 = 12;
	int32_t t10 = -5;

	t10 = (x49-(x50^(x51*x52)));

	if (t10 != -12) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = -6;
	int8_t x55 = -1;
	volatile uint16_t x56 = UINT16_MAX;

	t11 = (x53-(x54^(x55*x56)));

	if (t11 != -65532) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = 27U;
	static volatile uint32_t t12 = 58458U;

	t12 = (x57-(x58^(x59*x60)));

	if (t12 != 2147483620U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	static volatile int32_t t13 = -14937;

	t13 = (x61-(x62^(x63*x64)));

	if (t13 != -8355585) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x65 = 36U;
	volatile int64_t x66 = -15LL;
	volatile int8_t x67 = INT8_MIN;
	static int16_t x68 = INT16_MIN;
	static volatile int64_t t14 = 360337LL;

	t14 = (x65-(x66^(x67*x68)));

	if (t14 != 4194355LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 139U;
	int8_t x74 = INT8_MIN;
	static uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t15 = 23076LLU;

	t15 = (x73-(x74^(x75*x76)));

	if (t15 != 395LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -237180;
	volatile uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MAX;
	uint64_t x80 = 1LLU;
	uint64_t t16 = 16063656036430LLU;

	t16 = (x77-(x78^(x79*x80)));

	if (t16 != 9223372036854538628LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MAX;
	static int64_t x82 = 14917316LL;
	static int16_t x83 = INT16_MIN;
	uint8_t x84 = 3U;

	t17 = (x81-(x82^(x83*x84)));

	if (t17 != 14901563LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 466U;
	volatile int32_t x86 = INT32_MAX;
	uint64_t x87 = 238967305565LLU;
	uint64_t t18 = 5696669655577810LLU;

	t18 = (x85-(x86^(x87*x88)));

	if (t18 != 18446744071562068435LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = -87;
	uint64_t x95 = UINT64_MAX;
	uint64_t t19 = 467993006LLU;

	t19 = (x93-(x94^(x95*x96)));

	if (t19 != 9223372036854789227LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -245;
	uint32_t x99 = UINT32_MAX;
	static volatile int64_t x100 = -1LL;
	uint64_t t20 = 1632397LLU;

	t20 = (x97-(x98^(x99*x100)));

	if (t20 != 18446744069414584077LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 189;
	volatile int32_t x102 = -84460229;
	int32_t x104 = INT32_MIN;

	t21 = (x101-(x102^(x103*x104)));

	if (t21 != 2231944066U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	volatile int32_t x106 = 0;
	uint16_t x107 = 10064U;
	uint64_t x108 = UINT64_MAX;
	uint64_t t22 = 17361247889564545LLU;

	t22 = (x105-(x106^(x107*x108)));

	if (t22 != 18446744073709528912LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static volatile int16_t x123 = INT16_MAX;
	static uint8_t x124 = UINT8_MAX;

	t23 = (x121-(x122^(x123*x124)));

	if (t23 != -8290051) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x127 = -1LL;
	uint64_t t24 = 30840673LLU;

	t24 = (x125-(x126^(x127*x128)));

	if (t24 != 18446744073709548026LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = 196567654458LL;
	int32_t x135 = -508;
	int16_t x136 = INT16_MIN;
	volatile int64_t t25 = 37391799645764463LL;

	t25 = (x133-(x134^(x135*x136)));

	if (t25 != -196572766394LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x141 = -1;
	static int16_t x142 = 1;
	static uint32_t x143 = 463101304U;
	static int32_t x144 = INT32_MIN;
	volatile uint32_t t26 = 16779569U;

	t26 = (x141-(x142^(x143*x144)));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int32_t x146 = -1;
	static int8_t x147 = INT8_MAX;
	int8_t x148 = INT8_MAX;
	static volatile uint64_t t27 = 6LLU;

	t27 = (x145-(x146^(x147*x148)));

	if (t27 != 16129LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x150 = 355U;
	int64_t x151 = -1LL;
	int16_t x152 = 2;
	volatile int64_t t28 = 355903800411LL;

	t28 = (x149-(x150^(x151*x152)));

	if (t28 != -32413LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x154 = 476735;
	int8_t x155 = 0;
	int8_t x156 = 1;

	t29 = (x153-(x154^(x155*x156)));

	if (t29 != -476693) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x157 = -1;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 27745985735222802LLU;

	t30 = (x157-(x158^(x159*x160)));

	if (t30 != 18418998087695525393LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x166 = INT16_MAX;
	int64_t x167 = -1LL;
	int8_t x168 = 3;
	static int64_t t31 = -889306491631615LL;

	t31 = (x165-(x166^(x167*x168)));

	if (t31 != 32774LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x169 = 1230364014074LLU;
	int64_t x170 = INT64_MIN;
	int16_t x172 = 26;
	volatile uint64_t t32 = 0LLU;

	t32 = (x169-(x170^(x171*x172)));

	if (t32 != 9223373267218789882LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x173 = -50;
	int16_t x174 = 0;
	static int32_t x175 = -1;
	int64_t x176 = -448LL;

	t33 = (x173-(x174^(x175*x176)));

	if (t33 != -498LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MAX;
	static uint16_t x178 = 1199U;
	uint8_t x179 = UINT8_MAX;
	uint32_t x180 = 1475U;
	volatile uint32_t t34 = 4U;

	t34 = (x177-(x178^(x179*x180)));

	if (t34 != 2147108461U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x181 = 15699799LLU;
	int16_t x182 = INT16_MIN;
	static int16_t x183 = INT16_MIN;
	uint64_t x184 = 31568397826755LLU;
	static uint64_t t35 = 1796286487393569789LLU;

	t35 = (x181-(x182^(x183*x184)));

	if (t35 != 17412310813738176343LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = INT64_MIN;
	static volatile int32_t x186 = -10409866;
	int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t36 = 8823314075LL;

	t36 = (x185-(x186^(x187*x188)));

	if (t36 != -9223372036844398710LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	static int16_t x191 = INT16_MAX;
	static volatile uint8_t x192 = UINT8_MAX;
	volatile int32_t t37 = -19017072;

	t37 = (x189-(x190^(x191*x192)));

	if (t37 != -2139127937) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = INT16_MIN;
	volatile int64_t t38 = -27053039616LL;

	t38 = (x193-(x194^(x195*x196)));

	if (t38 != -9223372036850581376LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x201 = 2U;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int64_t t39 = -194631120788838377LL;

	t39 = (x201-(x202^(x203*x204)));

	if (t39 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x206 = UINT32_MAX;
	static volatile uint8_t x207 = 16U;
	uint16_t x208 = 1U;
	volatile uint32_t t40 = 127939U;

	t40 = (x205-(x206^(x207*x208)));

	if (t40 != 144U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x221 = -492746496714173LL;
	int32_t x222 = INT32_MAX;
	static volatile uint64_t x223 = UINT64_MAX;
	static int64_t x224 = 3435068496338LL;
	uint64_t t41 = 33667445325154LLU;

	t41 = (x221-(x222^(x223*x224)));

	if (t41 != 18446254761944531058LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x229 = 18U;
	volatile uint16_t x230 = 63U;
	uint32_t x231 = 2U;
	uint16_t x232 = 13239U;
	volatile uint32_t t42 = 102U;

	t42 = (x229-(x230^(x231*x232)));

	if (t42 != 4294940865U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x235 = 56353LL;
	volatile int64_t t43 = 193627LL;

	t43 = (x233-(x234^(x235*x236)));

	if (t43 != -143474594LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x237 = INT8_MIN;
	uint16_t x239 = 765U;
	volatile uint8_t x240 = UINT8_MAX;

	t44 = (x237-(x238^(x239*x240)));

	if (t44 != 194948LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x249 = INT8_MAX;
	uint8_t x251 = 85U;
	volatile uint16_t x252 = 27U;
	int32_t t45 = -11095270;

	t45 = (x249-(x250^(x251*x252)));

	if (t45 != 2423) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = 36;
	int16_t x256 = 15264;
	volatile int32_t t46 = -20;

	t46 = (x253-(x254^(x255*x256)));

	if (t46 != -17476) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MIN;
	int64_t x258 = -2637158LL;
	volatile int8_t x260 = INT8_MIN;

	t47 = (x257-(x258^(x259*x260)));

	if (t47 != 2604518LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x266 = -1;
	volatile int8_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int32_t t48 = 1092863;

	t48 = (x265-(x266^(x267*x268)));

	if (t48 != -32639) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x270 = 10U;
	int32_t x271 = INT32_MAX;
	uint32_t t49 = 941361U;

	t49 = (x269-(x270^(x271*x272)));

	if (t49 != 2147483637U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = -1;
	int8_t x280 = -29;

	t50 = (x277-(x278^(x279*x280)));

	if (t50 != 29U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x285 = INT8_MAX;
	volatile int64_t x288 = -1LL;
	int64_t t51 = -134028641594100152LL;

	t51 = (x285-(x286^(x287*x288)));

	if (t51 != -7617843LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x289 = -1057;
	int32_t x290 = -7;
	int16_t x291 = INT16_MAX;
	int64_t x292 = -1LL;

	t52 = (x289-(x290^(x291*x292)));

	if (t52 != -33817LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = INT64_MAX;
	int64_t x294 = -1LL;
	uint64_t x295 = 1084LLU;
	int32_t x296 = INT32_MIN;
	static uint64_t t53 = 28751LLU;

	t53 = (x293-(x294^(x295*x296)));

	if (t53 != 9223369708982501376LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = INT8_MIN;
	static uint16_t x298 = UINT16_MAX;
	static int16_t x299 = -312;
	int16_t x300 = INT16_MIN;

	t54 = (x297-(x298^(x299*x300)));

	if (t54 != -10289279) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	static int32_t x303 = -38737;
	int8_t x304 = 1;
	int32_t t55 = -288604241;

	t55 = (x301-(x302^(x303*x304)));

	if (t55 != -2147444912) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x305 = 29648U;
	int32_t x306 = -686900;
	uint64_t x307 = 2910321832768933LLU;
	volatile uint64_t t56 = 4784839272LLU;

	t56 = (x305-(x306^(x307*x308)));

	if (t56 != 18443833751876412729LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = 2U;
	volatile uint16_t x310 = 23635U;
	static volatile int8_t x311 = INT8_MIN;
	int16_t x312 = 13338;
	int32_t t57 = -12442754;

	t57 = (x309-(x310^(x311*x312)));

	if (t57 != 1724591) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = -32;
	static int8_t x314 = INT8_MIN;
	static int8_t x315 = -59;
	int32_t t58 = -24487;

	t58 = (x313-(x314^(x315*x316)));

	if (t58 != -101) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x321 = -3;
	volatile uint8_t x322 = 3U;
	uint8_t x323 = UINT8_MAX;
	volatile uint32_t x324 = 13848263U;
	volatile uint32_t t59 = 5192U;

	t59 = (x321-(x322^(x323*x324)));

	if (t59 != 763660227U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x329 = INT16_MIN;
	static volatile int64_t x330 = INT64_MIN;

	t60 = (x329-(x330^(x331*x332)));

	if (t60 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = -171478904476271LL;
	int8_t x334 = 0;
	int64_t x335 = -138LL;
	int16_t x336 = INT16_MAX;

	t61 = (x333-(x334^(x335*x336)));

	if (t61 != -171478899954425LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x337 = 15622869720LLU;
	int8_t x339 = -1;
	int64_t x340 = 4003230804751739LL;
	volatile uint64_t t62 = 22724912LLU;

	t62 = (x337-(x338^(x339*x340)));

	if (t62 != 18442740858527669624LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = INT16_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 426897LLU;
	volatile uint32_t x348 = 15357980U;
	volatile uint64_t t63 = 346252462855015LLU;

	t63 = (x345-(x346^(x347*x348)));

	if (t63 != 18446737517433930973LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MAX;
	uint32_t x351 = 14339788U;
	int32_t x352 = 201873;

	t64 = (x349-(x350^(x351*x352)));

	if (t64 != 9223372036846686604LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x358 = -1;
	volatile uint8_t x359 = 94U;
	static int16_t x360 = -1;
	int64_t t65 = 517179994138790600LL;

	t65 = (x357-(x358^(x359*x360)));

	if (t65 != 9223372036854775714LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x361 = 1167501004U;
	int32_t x363 = -726216;
	volatile int8_t x364 = 2;
	uint32_t t66 = 1U;

	t66 = (x361-(x362^(x363*x364)));

	if (t66 != 1168953436U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t67 = 60655LLU;

	t67 = (x365-(x366^(x367*x368)));

	if (t67 != 18446744073709518722LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x373 = INT16_MIN;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	static volatile int16_t x376 = -1;
	int64_t t68 = 1506900419630906LL;

	t68 = (x373-(x374^(x375*x376)));

	if (t68 != 2147450879LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = 1;
	int64_t x383 = -1LL;
	static int32_t x384 = 428781419;

	t69 = (x381-(x382^(x383*x384)));

	if (t69 != 428748652LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = 3;
	int32_t x388 = INT32_MIN;
	uint32_t t70 = 2610051U;

	t70 = (x385-(x386^(x387*x388)));

	if (t70 != 2147483396U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x391 = -1;
	static int8_t x392 = INT8_MIN;

	t71 = (x389-(x390^(x391*x392)));

	if (t71 != -98175) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	volatile int16_t x395 = INT16_MAX;
	int64_t x396 = -1LL;
	static int64_t t72 = -3324629456872LL;

	t72 = (x393-(x394^(x395*x396)));

	if (t72 != -9223372032559841278LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = INT8_MAX;
	uint8_t x398 = UINT8_MAX;
	static int16_t x400 = INT16_MIN;
	volatile uint64_t t73 = 4900359869073103318LLU;

	t73 = (x397-(x398^(x399*x400)));

	if (t73 != 350799396736LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x402 = -1;
	uint64_t x403 = 1183LLU;
	int64_t x404 = INT64_MIN;
	static volatile uint64_t t74 = 2692671LLU;

	t74 = (x401-(x402^(x403*x404)));

	if (t74 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x409 = INT16_MAX;
	int64_t x410 = INT64_MAX;
	volatile int16_t x411 = -1;
	volatile uint16_t x412 = UINT16_MAX;
	int64_t t75 = 1207212417LL;

	t75 = (x409-(x410^(x411*x412)));

	if (t75 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x413 = -6LL;
	uint32_t x414 = 68642U;
	static uint64_t x415 = 5258601847986145759LLU;
	int16_t x416 = 339;

	t76 = (x413-(x414^(x415*x416)));

	if (t76 != 6668148682523025803LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x417 = 887708445230036LLU;
	int32_t x419 = -5223825;
	static uint32_t x420 = 726U;

	t77 = (x417-(x418^(x419*x420)));

	if (t77 != 887696020350859LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x421 = INT8_MIN;
	static uint16_t x422 = 54U;
	int16_t x423 = INT16_MAX;
	int32_t x424 = -1;
	volatile int32_t t78 = 64540;

	t78 = (x421-(x422^(x423*x424)));

	if (t78 != 32585) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MIN;
	static volatile uint16_t x428 = 479U;
	volatile int32_t t79 = 6;

	t79 = (x425-(x426^(x427*x428)));

	if (t79 != -2874) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x431 = 0;
	int64_t x432 = 225283560458LL;
	int64_t t80 = 195199960LL;

	t80 = (x429-(x430^(x431*x432)));

	if (t80 != 39LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x437 = 32258597323260LLU;
	int64_t x438 = -1LL;
	volatile uint64_t t81 = 1LLU;

	t81 = (x437-(x438^(x439*x440)));

	if (t81 != 32258597323271LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x441 = INT64_MAX;
	uint64_t x442 = 18322123546LLU;
	int16_t x444 = INT16_MIN;
	uint64_t t82 = 46205006440861622LLU;

	t82 = (x441-(x442^(x443*x444)));

	if (t82 != 9223372018532619493LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x453 = UINT32_MAX;
	static uint8_t x456 = UINT8_MAX;
	volatile uint32_t t83 = 270474277U;

	t83 = (x453-(x454^(x455*x456)));

	if (t83 != 2415437U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x462 = -1;
	volatile uint64_t t84 = 5506327065280170360LLU;

	t84 = (x461-(x462^(x463*x464)));

	if (t84 != 117LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x465 = 27U;
	static uint64_t x466 = 2660590025471810LLU;
	static uint64_t t85 = 7LLU;

	t85 = (x465-(x466^(x467*x468)));

	if (t85 != 2660590012590225LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x470 = -1LL;
	static int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MIN;
	int64_t t86 = -865200430920679LL;

	t86 = (x469-(x470^(x471*x472)));

	if (t86 != 4161537LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	int8_t x480 = 15;
	int32_t t87 = -6849;

	t87 = (x477-(x478^(x479*x480)));

	if (t87 != 30503125) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x481 = UINT32_MAX;
	uint16_t x482 = 201U;
	uint16_t x483 = 7613U;
	uint32_t t88 = 8066305U;

	t88 = (x481-(x482^(x483*x484)));

	if (t88 != 4294967094U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x487 = -1LL;
	int16_t x488 = -1;
	int64_t t89 = -418599390658961LL;

	t89 = (x485-(x486^(x487*x488)));

	if (t89 != -37355348LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x489 = INT32_MIN;
	static uint64_t x490 = 105615LLU;
	static int64_t x491 = 689LL;
	uint8_t x492 = 9U;
	volatile uint64_t t90 = 57742540283LLU;

	t90 = (x489-(x490^(x491*x492)));

	if (t90 != 18446744071561968458LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x493 = INT64_MAX;
	int16_t x494 = INT16_MIN;
	uint8_t x495 = 1U;
	static int64_t t91 = 7890178LL;

	t91 = (x493-(x494^(x495*x496)));

	if (t91 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x497 = -1;
	static int8_t x498 = INT8_MIN;
	uint64_t x499 = 1117LLU;
	uint32_t x500 = UINT32_MAX;
	uint64_t t92 = 118454104112471LLU;

	t92 = (x497-(x498^(x499*x500)));

	if (t92 != 4797478468572LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x505 = -446;
	int64_t x506 = -1LL;
	int32_t x507 = -1;
	int64_t t93 = -1790876759635720LL;

	t93 = (x505-(x506^(x507*x508)));

	if (t93 != -444LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x510 = INT8_MAX;
	uint64_t x512 = 104773453137LLU;
	uint64_t t94 = 907788118603876LLU;

	t94 = (x509-(x510^(x511*x512)));

	if (t94 != 105261407220LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x517 = -1LL;
	int32_t x518 = INT32_MAX;
	static int64_t x520 = -360177LL;
	volatile int64_t t95 = 86017LL;

	t95 = (x517-(x518^(x519*x520)));

	if (t95 != 2147123471LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x521 = 36978086LL;
	int16_t x522 = -1;
	volatile uint8_t x523 = 1U;
	uint64_t x524 = 481LLU;
	volatile uint64_t t96 = 2455LLU;

	t96 = (x521-(x522^(x523*x524)));

	if (t96 != 36978568LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x530 = UINT16_MAX;
	uint8_t x531 = 5U;
	volatile uint64_t t97 = 10365554732244083LLU;

	t97 = (x529-(x530^(x531*x532)));

	if (t97 != 18446744072593097872LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x533 = 589501855156076377LLU;
	volatile int8_t x534 = -1;
	uint32_t x535 = UINT32_MAX;
	int64_t x536 = -1LL;
	uint64_t t98 = 9272504624LLU;

	t98 = (x533-(x534^(x535*x536)));

	if (t98 != 589501850861109083LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x537 = -1;
	static int32_t x538 = -1476;
	int32_t x539 = 1;
	int64_t x540 = INT64_MIN;
	static int64_t t99 = -21867063480LL;

	t99 = (x537-(x538^(x539*x540)));

	if (t99 != -9223372036854774333LL) { NG(); } else { ; }
	
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

