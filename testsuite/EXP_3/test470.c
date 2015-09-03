#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = 1074099863561741672LL;
static int32_t x9 = INT32_MAX;
uint32_t x10 = 283U;
volatile uint64_t x31 = 10698LLU;
static uint8_t x35 = UINT8_MAX;
int64_t x36 = 1966LL;
uint64_t t5 = 230LLU;
int32_t x45 = 27191;
uint64_t x48 = 43972118554615189LLU;
uint64_t t6 = 20740849996440117LLU;
volatile int16_t x50 = 29;
uint64_t x52 = 361LLU;
int16_t x57 = -485;
int32_t t9 = 578;
int16_t x62 = INT16_MAX;
static volatile uint16_t x63 = UINT16_MAX;
uint64_t t10 = 4662939024LLU;
int16_t x78 = 16;
uint64_t x81 = 50574607208840828LLU;
int8_t x110 = INT8_MIN;
volatile int16_t x115 = INT16_MAX;
static uint32_t x116 = 51018872U;
volatile uint64_t t18 = 55010901284088LLU;
volatile int8_t x119 = 1;
volatile int16_t x141 = INT16_MIN;
static uint16_t x145 = UINT16_MAX;
int64_t x157 = INT64_MIN;
static volatile int64_t t26 = -33298569LL;
int32_t x161 = -476;
int8_t x184 = INT8_MAX;
static uint8_t x187 = 4U;
volatile int32_t t32 = 70519;
int64_t x191 = 12256266LL;
static int32_t x192 = -518228057;
volatile int32_t x196 = INT32_MIN;
int8_t x198 = INT8_MIN;
static int16_t x205 = -127;
int32_t t36 = -4537961;
int32_t x209 = INT32_MIN;
volatile uint16_t x223 = 145U;
int16_t x225 = INT16_MIN;
int32_t x226 = -1;
int16_t x228 = -606;
int8_t x251 = INT8_MAX;
static int32_t x258 = INT32_MAX;
static int32_t x259 = INT32_MAX;
uint32_t x269 = 363068U;
volatile uint32_t x279 = 114332U;
int32_t x280 = -6344509;
uint8_t x285 = UINT8_MAX;
static uint64_t t51 = 8040688LLU;
uint64_t t52 = 18028082LLU;
static int8_t x305 = INT8_MIN;
uint32_t x307 = 25912U;
static int16_t x309 = 3;
int32_t x312 = 252452;
int16_t x313 = INT16_MIN;
int64_t t58 = 27227774701694200LL;
int8_t x330 = INT8_MIN;
int64_t x332 = 720LL;
int64_t x336 = INT64_MAX;
volatile int8_t x350 = -1;
int16_t x351 = 8823;
uint64_t x359 = 810LLU;
static volatile int64_t t67 = -613497464636554LL;
uint64_t x381 = UINT64_MAX;
static volatile uint64_t t69 = UINT64_MAX;
volatile int8_t x385 = -1;
int8_t x388 = -1;
uint32_t t70 = 11495U;
static volatile uint32_t t71 = 6412U;
int64_t t73 = -12320705LL;
volatile int8_t x406 = INT8_MIN;
static int16_t x410 = INT16_MIN;
int8_t x421 = INT8_MIN;
int8_t x430 = INT8_MIN;
volatile int32_t x441 = -856387515;
volatile int32_t x443 = -1;
int8_t x449 = -1;
volatile int64_t x451 = -1LL;
volatile int8_t x452 = INT8_MAX;
static volatile uint64_t t82 = 9995LLU;
volatile uint64_t x478 = 3078962999137557LLU;
int64_t x479 = -255580110003LL;
int64_t x505 = -13204804LL;
uint32_t t88 = 2032536U;
uint8_t x521 = UINT8_MAX;
volatile int16_t x523 = INT16_MIN;
volatile uint64_t t90 = 160060942186LLU;
int8_t x544 = INT8_MIN;
volatile int8_t x550 = -1;
int64_t x551 = 49133LL;
volatile uint8_t x558 = 4U;
int64_t x559 = -1LL;
int64_t t97 = INT64_MAX;


void f0(void) {
	int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	int16_t x8 = -223;
	int64_t t0 = 23083002395112005LL;

	t0 = ((x5&x6)-(x7*x8));

	if (t0 != 1074099863211212577LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x11 = -30;
	static int16_t x12 = 8146;
	volatile uint32_t t1 = 3699523U;

	t1 = ((x9&x10)-(x11*x12));

	if (t1 != 244663U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 2781U;
	int32_t x22 = INT32_MAX;
	volatile uint32_t x23 = 397958694U;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t2 = 18183U;

	t2 = ((x21&x22)-(x23*x24));

	if (t2 != 397961475U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x29 = 3547383547870LLU;
	static uint64_t x30 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	uint64_t t3 = 4821005405535419LLU;

	t3 = ((x29&x30)-(x31*x32));

	if (t3 != 3547734099934LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = -1;
	uint64_t x34 = 5650436LLU;
	static volatile uint64_t t4 = 0LLU;

	t4 = ((x33&x34)-(x35*x36));

	if (t4 != 5149106LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 3U;
	static volatile uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 10U;
	int16_t x40 = INT16_MIN;

	t5 = ((x37&x38)-(x39*x40));

	if (t5 != 327683LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x46 = -12471637053686LL;
	static volatile uint8_t x47 = UINT8_MAX;

	t6 = ((x45&x46)-(x47*x48));

	if (t6 != 7233853842282705559LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x49 = -1398883;
	static int8_t x51 = 1;
	volatile uint64_t t7 = 6369306688589992187LLU;

	t7 = ((x49&x50)-(x51*x52));

	if (t7 != 18446744073709551284LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = INT64_MIN;
	int8_t x55 = 0;
	volatile int16_t x56 = -295;
	static volatile int64_t t8 = 221638845528LL;

	t8 = ((x53&x54)-(x55*x56));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x58 = INT16_MIN;
	static int16_t x59 = INT16_MAX;
	int8_t x60 = -2;

	t9 = ((x57&x58)-(x59*x60));

	if (t9 != 32766) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 0U;
	volatile uint64_t x64 = 73514758827898LLU;

	t10 = ((x61&x62)-(x63*x64));

	if (t10 != 13628954353923256186LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = -1;
	static int16_t x74 = -1;
	uint8_t x75 = 0U;
	volatile uint64_t x76 = 17441178322953572LLU;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x73&x74)-(x75*x76));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x77 = 38448528U;
	volatile uint8_t x79 = 31U;
	int8_t x80 = INT8_MAX;
	uint32_t t12 = 71500291U;

	t12 = ((x77&x78)-(x79*x80));

	if (t12 != 4294963375U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x82 = INT32_MAX;
	static uint8_t x83 = 45U;
	uint64_t x84 = 4358509537959171LLU;
	volatile uint64_t t13 = 2588LLU;

	t13 = ((x81&x82)-(x83*x84));

	if (t13 != 18250611146000229621LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x87 = 22;
	volatile int16_t x88 = INT16_MIN;
	int32_t t14 = 10164;

	t14 = ((x85&x86)-(x87*x88));

	if (t14 != 720896) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x93 = 46U;
	volatile int16_t x94 = -27;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t15 = 0LLU;

	t15 = ((x93&x94)-(x95*x96));

	if (t15 != 9223372036854775844LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = -1;
	static volatile int64_t x98 = INT64_MIN;
	uint64_t x99 = 643049092524731010LLU;
	static uint64_t x100 = 1952782297LLU;
	volatile uint64_t t16 = 489774960997796279LLU;

	t16 = ((x97&x98)-(x99*x100));

	if (t16 != 662687216800860622LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = -8;
	volatile int8_t x111 = -1;
	uint64_t x112 = 209607511556LLU;
	volatile uint64_t t17 = 13721LLU;

	t17 = ((x109&x110)-(x111*x112));

	if (t17 != 209607511428LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;

	t18 = ((x113&x114)-(x115*x116));

	if (t18 != 18446744070568967288LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = 798357326LL;
	uint32_t x118 = 8996U;
	static volatile uint16_t x120 = 105U;
	static volatile int64_t t19 = 7LL;

	t19 = ((x117&x118)-(x119*x120));

	if (t19 != 8859LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x125 = INT64_MIN;
	uint16_t x126 = 98U;
	uint32_t x127 = 19383601U;
	int16_t x128 = INT16_MAX;
	volatile int64_t t20 = -326LL;

	t20 = ((x125&x126)-(x127*x128));

	if (t20 != -3782261455LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x129 = INT64_MIN;
	volatile uint64_t x130 = 245LLU;
	volatile int16_t x131 = INT16_MIN;
	volatile int64_t x132 = -609LL;
	volatile uint64_t t21 = 274166138596LLU;

	t21 = ((x129&x130)-(x131*x132));

	if (t21 != 18446744073689595904LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x133 = 6U;
	uint8_t x134 = 1U;
	int32_t x135 = -15458;
	int8_t x136 = 0;
	volatile int32_t t22 = 15;

	t22 = ((x133&x134)-(x135*x136));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x137 = UINT8_MAX;
	static int32_t x138 = INT32_MAX;
	volatile uint16_t x139 = 24542U;
	volatile uint16_t x140 = 1U;
	volatile int32_t t23 = 8;

	t23 = ((x137&x138)-(x139*x140));

	if (t23 != -24287) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x142 = UINT8_MAX;
	static uint8_t x143 = 9U;
	static uint16_t x144 = 1U;
	int32_t t24 = 703;

	t24 = ((x141&x142)-(x143*x144));

	if (t24 != -9) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MAX;
	static uint16_t x148 = 1U;
	int32_t t25 = -689324;

	t25 = ((x145&x146)-(x147*x148));

	if (t25 != -2147418112) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x158 = INT8_MIN;
	volatile int8_t x159 = 1;
	int64_t x160 = -1LL;

	t26 = ((x157&x158)-(x159*x160));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x162 = INT8_MAX;
	uint32_t x163 = 385573U;
	static volatile int8_t x164 = INT8_MAX;
	volatile uint32_t t27 = 10U;

	t27 = ((x161&x162)-(x163*x164));

	if (t27 != 4245999561U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x169 = 0LLU;
	static int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	static uint64_t x172 = 26LLU;
	volatile uint64_t t28 = 21893972357161067LLU;

	t28 = ((x169&x170)-(x171*x172));

	if (t28 != 18446743962040401946LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = 18U;
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MIN;
	static uint32_t t29 = 371686U;

	t29 = ((x173&x174)-(x175*x176));

	if (t29 != 2147450880U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	int8_t x178 = 6;
	volatile int64_t x179 = INT64_MIN;
	uint64_t x180 = 1369LLU;
	volatile uint64_t t30 = 5336491078LLU;

	t30 = ((x177&x178)-(x179*x180));

	if (t30 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x181 = 60892428977673153LL;
	int64_t x182 = INT64_MAX;
	static int8_t x183 = INT8_MIN;
	volatile int64_t t31 = 137430113992LL;

	t31 = ((x181&x182)-(x183*x184));

	if (t31 != 60892428977689409LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = -3;
	int32_t x186 = INT32_MAX;
	uint8_t x188 = UINT8_MAX;

	t32 = ((x185&x186)-(x187*x188));

	if (t32 != 2147482625) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	int64_t t33 = -3LL;

	t33 = ((x189&x190)-(x191*x192));

	if (t33 != -9217020495939520646LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = 789326358242368LLU;
	volatile int16_t x194 = -1;
	static volatile uint64_t x195 = 244617LLU;
	volatile uint64_t t34 = 3555663541535709LLU;

	t34 = ((x193&x194)-(x195*x196));

	if (t34 != 1314637365765184LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x199 = 39U;
	uint64_t x200 = 212954409662430681LLU;
	uint64_t t35 = 42294785950567LLU;

	t35 = ((x197&x198)-(x199*x200));

	if (t35 != 10141522096874754929LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x206 = INT8_MAX;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MAX;

	t36 = ((x205&x206)-(x207*x208));

	if (t36 != -32384) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x210 = UINT8_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = -1;
	static volatile int32_t t37 = -1201;

	t37 = ((x209&x210)-(x211*x212));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x213 = -1LL;
	static int64_t x214 = -130211LL;
	static uint64_t x215 = 478373LLU;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t38 = 1114544713670502035LLU;

	t38 = ((x213&x214)-(x215*x216));

	if (t38 != 15675196253LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	int16_t x224 = -1;
	volatile int64_t t39 = -2153266798LL;

	t39 = ((x221&x222)-(x223*x224));

	if (t39 != -32623LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x227 = INT16_MIN;
	volatile int32_t t40 = -223629814;

	t40 = ((x225&x226)-(x227*x228));

	if (t40 != -19890176) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = 62942909517LLU;
	volatile uint64_t x230 = 5LLU;
	uint64_t x231 = 169777009768540LLU;
	int64_t x232 = 7428495754457403LL;
	uint64_t t41 = 4LLU;

	t41 = ((x229&x230)-(x231*x232));

	if (t41 != 10866709011566028497LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -14;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t42 = 204;

	t42 = ((x241&x242)-(x243*x244));

	if (t42 != 917490) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t43 = -10;

	t43 = ((x249&x250)-(x251*x252));

	if (t43 != 4161536) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x253 = 47U;
	uint16_t x254 = UINT16_MAX;
	volatile uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;
	static int32_t t44 = 24045072;

	t44 = ((x253&x254)-(x255*x256));

	if (t44 != 2147450927) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x257 = UINT8_MAX;
	uint64_t x260 = 10542878LLU;
	uint64_t t45 = 670850072891LLU;

	t45 = ((x257&x258)-(x259*x260));

	if (t45 != 18424103415612235805LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x261 = INT8_MIN;
	uint8_t x262 = 25U;
	int16_t x263 = -42;
	static int16_t x264 = INT16_MIN;
	static volatile int32_t t46 = -127230;

	t46 = ((x261&x262)-(x263*x264));

	if (t46 != -1376256) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x270 = 0;
	volatile int8_t x271 = 16;
	uint32_t x272 = UINT32_MAX;
	uint32_t t47 = 494U;

	t47 = ((x269&x270)-(x271*x272));

	if (t47 != 16U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = -1;
	int32_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	volatile int32_t t48 = -1003;

	t48 = ((x273&x274)-(x275*x276));

	if (t48 != 1073709055) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	int64_t t49 = 0LL;

	t49 = ((x277&x278)-(x279*x280));

	if (t49 != -2616553684LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x286 = 10U;
	static int32_t x287 = -12742151;
	int64_t x288 = -1LL;
	static int64_t t50 = 278416078003103LL;

	t50 = ((x285&x286)-(x287*x288));

	if (t50 != -12742141LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x289 = 54U;
	uint64_t x290 = 18150568LLU;
	int32_t x291 = 2;
	uint8_t x292 = 1U;

	t51 = ((x289&x290)-(x291*x292));

	if (t51 != 30LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = UINT16_MAX;
	static volatile uint64_t x298 = 7948643428238933995LLU;
	uint16_t x299 = 375U;
	volatile int64_t x300 = 788363182818570LL;

	t52 = ((x297&x298)-(x299*x300));

	if (t52 != 18151107880152636997LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x301 = 32511982LLU;
	int32_t x302 = INT32_MAX;
	static uint64_t x303 = 86718379325LLU;
	int8_t x304 = INT8_MIN;
	static volatile uint64_t t53 = 7116841938873044LLU;

	t53 = ((x301&x302)-(x303*x304));

	if (t53 != 11099985065582LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x306 = -1LL;
	uint8_t x308 = 88U;
	static int64_t t54 = -7064LL;

	t54 = ((x305&x306)-(x307*x308));

	if (t54 != -2280384LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x310 = 31333U;
	uint32_t x311 = 233110749U;
	uint32_t t55 = 141U;

	t55 = ((x309&x310)-(x311*x312));

	if (t55 != 367083245U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x314 = INT64_MIN;
	uint8_t x315 = 22U;
	volatile int8_t x316 = -1;
	volatile int64_t t56 = -32557591182647LL;

	t56 = ((x313&x314)-(x315*x316));

	if (t56 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x321 = INT16_MIN;
	static int16_t x322 = INT16_MIN;
	int32_t x323 = 240833231;
	int16_t x324 = -1;
	static int32_t t57 = -15;

	t57 = ((x321&x322)-(x323*x324));

	if (t57 != 240800463) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x325 = 3459LL;
	static int32_t x326 = -1;
	int16_t x327 = INT16_MIN;
	volatile int32_t x328 = -1;

	t58 = ((x325&x326)-(x327*x328));

	if (t58 != -29309LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x331 = 907668U;
	volatile int64_t t59 = 5557740747655402LL;

	t59 = ((x329&x330)-(x331*x332));

	if (t59 != -2801004608LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x333 = 76847LLU;
	int16_t x334 = -1;
	static int64_t x335 = -1LL;
	volatile uint64_t t60 = 5182LLU;

	t60 = ((x333&x334)-(x335*x336));

	if (t60 != 9223372036854852654LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x337 = 56U;
	uint16_t x338 = 7220U;
	uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = -1;
	static int32_t t61 = 18216448;

	t61 = ((x337&x338)-(x339*x340));

	if (t61 != 303) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x349 = 25;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t62 = -40471;

	t62 = ((x349&x350)-(x351*x352));

	if (t62 != 289112089) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MIN;
	volatile int32_t x356 = -1;
	volatile int32_t t63 = -646138;

	t63 = ((x353&x354)-(x355*x356));

	if (t63 != -32513) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MIN;
	int64_t x360 = -1LL;
	uint64_t t64 = 1547407LLU;

	t64 = ((x357&x358)-(x359*x360));

	if (t64 != 4294967978LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x361 = INT8_MAX;
	volatile int16_t x362 = INT16_MAX;
	static int64_t x363 = -1LL;
	int16_t x364 = -6628;
	int64_t t65 = 515047880272LL;

	t65 = ((x361&x362)-(x363*x364));

	if (t65 != -6501LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x369 = 6U;
	static uint16_t x370 = 39U;
	static uint64_t x371 = 15202LLU;
	static uint8_t x372 = 3U;
	uint64_t t66 = 64321750LLU;

	t66 = ((x369&x370)-(x371*x372));

	if (t66 != 18446744073709506016LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = -2318;
	volatile int64_t x374 = -1190549776490878LL;
	int64_t x375 = 21LL;
	int32_t x376 = -20365;

	t67 = ((x373&x374)-(x375*x376));

	if (t67 != -1190549776065261LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x377 = 5U;
	int32_t x378 = 6;
	int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	static int32_t t68 = 203540;

	t68 = ((x377&x378)-(x379*x380));

	if (t68 != 1073709060) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x382 = -1;
	volatile uint16_t x383 = 12493U;
	int32_t x384 = 0;

	t69 = ((x381&x382)-(x383*x384));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x386 = 38U;
	volatile int32_t x387 = 359428085;

	t70 = ((x385&x386)-(x387*x388));

	if (t70 != 359428123U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int8_t x394 = 63;
	uint8_t x395 = 4U;
	int16_t x396 = -1;

	t71 = ((x393&x394)-(x395*x396));

	if (t71 != 67U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x397 = 0LL;
	int64_t x398 = -1LL;
	uint32_t x399 = 692821U;
	uint32_t x400 = 903U;
	volatile int64_t t72 = 5036218LL;

	t72 = ((x397&x398)-(x399*x400));

	if (t72 != -625617363LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x401 = 108705163718511LL;
	static int16_t x402 = 0;
	volatile int64_t x403 = -39964549258445LL;
	int16_t x404 = -1;

	t73 = ((x401&x402)-(x403*x404));

	if (t73 != -39964549258445LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = 18U;
	int32_t x407 = 21090988;
	static uint8_t x408 = 95U;
	volatile int32_t t74 = 1;

	t74 = ((x405&x406)-(x407*x408));

	if (t74 != -2003643860) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x409 = 3149U;
	int32_t x411 = 140718;
	int8_t x412 = -1;
	uint32_t t75 = 8U;

	t75 = ((x409&x410)-(x411*x412));

	if (t75 != 140718U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x413 = 4069U;
	uint8_t x414 = 23U;
	int8_t x415 = INT8_MIN;
	static uint32_t x416 = 194U;
	volatile uint32_t t76 = 1916776U;

	t76 = ((x413&x414)-(x415*x416));

	if (t76 != 24837U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x422 = 3;
	static int8_t x423 = INT8_MAX;
	uint32_t x424 = 5670148U;
	uint32_t t77 = 8233U;

	t77 = ((x421&x422)-(x423*x424));

	if (t77 != 3574858500U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x429 = -1LL;
	static int8_t x431 = 7;
	volatile int8_t x432 = INT8_MIN;
	static int64_t t78 = 127999917LL;

	t78 = ((x429&x430)-(x431*x432));

	if (t78 != 768LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x442 = INT64_MIN;
	volatile int32_t x444 = 31357424;
	volatile int64_t t79 = 97926LL;

	t79 = ((x441&x442)-(x443*x444));

	if (t79 != -9223372036823418384LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x450 = INT16_MIN;
	volatile int64_t t80 = 219609192816549LL;

	t80 = ((x449&x450)-(x451*x452));

	if (t80 != -32641LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x465 = 66U;
	int64_t x466 = INT64_MIN;
	int32_t x467 = 2033056;
	volatile uint16_t x468 = 31U;
	int64_t t81 = 25273565906549104LL;

	t81 = ((x465&x466)-(x467*x468));

	if (t81 != -63024736LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x473 = 131LLU;
	uint16_t x474 = 2368U;
	int32_t x475 = -1;
	int8_t x476 = INT8_MIN;

	t82 = ((x473&x474)-(x475*x476));

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x477 = 1;
	int8_t x480 = -1;
	volatile uint64_t t83 = 194193747738992LLU;

	t83 = ((x477&x478)-(x479*x480));

	if (t83 != 18446743818129441614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x481 = INT16_MIN;
	uint8_t x482 = 0U;
	uint8_t x483 = 2U;
	uint64_t x484 = 336LLU;
	uint64_t t84 = 7LLU;

	t84 = ((x481&x482)-(x483*x484));

	if (t84 != 18446744073709550944LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x497 = 4;
	int32_t x498 = INT32_MIN;
	int16_t x499 = -222;
	uint64_t x500 = 524011828LLU;
	volatile uint64_t t85 = 14167905137255448LLU;

	t85 = ((x497&x498)-(x499*x500));

	if (t85 != 116330625816LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x501 = 993LLU;
	int16_t x502 = INT16_MIN;
	volatile uint32_t x503 = 411U;
	static int64_t x504 = 855650LL;
	uint64_t t86 = 7506851136904150LLU;

	t86 = ((x501&x502)-(x503*x504));

	if (t86 != 18446744073357879466LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x506 = 3U;
	uint32_t x507 = 11118U;
	int8_t x508 = INT8_MAX;
	volatile int64_t t87 = 438506LL;

	t87 = ((x505&x506)-(x507*x508));

	if (t87 != -1411986LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x517 = -1;
	volatile uint32_t x518 = UINT32_MAX;
	int8_t x519 = -14;
	int16_t x520 = INT16_MAX;

	t88 = ((x517&x518)-(x519*x520));

	if (t88 != 458737U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x522 = INT16_MIN;
	int16_t x524 = 5;
	static volatile int32_t t89 = -141823499;

	t89 = ((x521&x522)-(x523*x524));

	if (t89 != 163840) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x525 = 163U;
	int64_t x526 = -1LL;
	volatile int32_t x527 = INT32_MAX;
	static uint64_t x528 = 4180654986055LLU;

	t90 = ((x525&x526)-(x527*x528));

	if (t90 != 5676147594426094570LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x529 = UINT8_MAX;
	static int8_t x530 = 3;
	uint32_t x531 = UINT32_MAX;
	int32_t x532 = 8442;
	uint32_t t91 = 67033U;

	t91 = ((x529&x530)-(x531*x532));

	if (t91 != 8445U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x533 = 15407U;
	int16_t x534 = INT16_MIN;
	uint8_t x535 = UINT8_MAX;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t92 = -49699;

	t92 = ((x533&x534)-(x535*x536));

	if (t92 != 8355840) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x537 = INT16_MIN;
	static int16_t x538 = -2127;
	int64_t x539 = -1LL;
	volatile int8_t x540 = -1;
	volatile int64_t t93 = -9633370613724652LL;

	t93 = ((x537&x538)-(x539*x540));

	if (t93 != -32769LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x541 = UINT8_MAX;
	volatile uint8_t x542 = UINT8_MAX;
	uint32_t x543 = UINT32_MAX;
	static uint32_t t94 = 1792528U;

	t94 = ((x541&x542)-(x543*x544));

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x549 = -1;
	uint32_t x552 = 737U;
	int64_t t95 = -27788LL;

	t95 = ((x549&x550)-(x551*x552));

	if (t95 != -36211022LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x553 = UINT16_MAX;
	static uint64_t x554 = UINT64_MAX;
	static int32_t x555 = 7702452;
	uint16_t x556 = 3U;
	volatile uint64_t t96 = 536800LLU;

	t96 = ((x553&x554)-(x555*x556));

	if (t96 != 18446744073686509795LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x557 = INT16_MIN;
	volatile int64_t x560 = INT64_MAX;

	t97 = ((x557&x558)-(x559*x560));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x569 = 14U;
	uint8_t x570 = 10U;
	int64_t x571 = -2061944088944078LL;
	int8_t x572 = INT8_MIN;
	int64_t t98 = -1345438910LL;

	t98 = ((x569&x570)-(x571*x572));

	if (t98 != -263928843384841974LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x573 = 113570U;
	uint64_t x574 = UINT64_MAX;
	int8_t x575 = INT8_MIN;
	int64_t x576 = -291509LL;
	volatile uint64_t t99 = 15LLU;

	t99 = ((x573&x574)-(x575*x576));

	if (t99 != 18446744073672352034LLU) { NG(); } else { ; }
	
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

