#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
static int8_t x21 = INT8_MIN;
uint64_t x22 = 403341586268648LLU;
uint64_t x24 = 535836152833719611LLU;
int8_t x51 = INT8_MIN;
static int64_t x60 = INT64_MIN;
uint8_t x64 = 1U;
int8_t x70 = -1;
static int64_t x73 = INT64_MAX;
static int16_t x81 = INT16_MAX;
static uint16_t x82 = 14U;
volatile uint64_t x83 = 220514850786854920LLU;
volatile uint32_t x87 = 18337951U;
int32_t x113 = 8129;
volatile int32_t x115 = -1;
volatile int8_t x130 = -1;
uint32_t x131 = 0U;
int8_t x132 = INT8_MIN;
volatile int16_t x133 = INT16_MAX;
uint64_t x135 = 197LLU;
static volatile uint8_t x138 = UINT8_MAX;
uint32_t x142 = 1U;
int32_t x144 = INT32_MIN;
uint32_t t24 = 2047U;
volatile uint8_t x171 = 1U;
uint32_t x173 = 3568469U;
int32_t t28 = 13;
static int32_t x190 = INT32_MAX;
volatile int32_t t30 = -15991433;
int16_t x197 = INT16_MIN;
int16_t x211 = 1;
uint8_t x224 = 0U;
static int32_t x236 = -1;
static uint32_t t40 = 713624620U;
volatile int16_t x241 = INT16_MAX;
volatile int8_t x248 = INT8_MIN;
static volatile int32_t t42 = 28574;
static uint64_t t43 = 26697901700109LLU;
int16_t x257 = INT16_MAX;
int16_t x263 = 15;
uint64_t x266 = 83454LLU;
volatile uint8_t x267 = 0U;
uint32_t x283 = UINT32_MAX;
uint8_t x295 = 109U;
volatile int64_t t52 = -77542226363233752LL;
uint32_t x302 = UINT32_MAX;
static int16_t x317 = INT16_MIN;
static int16_t x318 = INT16_MAX;
static uint16_t x328 = UINT16_MAX;
int32_t x333 = -1;
uint8_t x341 = 5U;
static volatile uint16_t x343 = 56U;
uint64_t t61 = 750456469359LLU;
int64_t x365 = INT64_MIN;
volatile uint64_t t63 = 18012418296LLU;
volatile uint64_t t64 = 120164LLU;
static int16_t x375 = 387;
uint64_t t65 = 119952846823599040LLU;
volatile int64_t t66 = 758572343LL;
uint64_t x386 = UINT64_MAX;
int8_t x394 = -16;
uint16_t x407 = 12U;
volatile int16_t x408 = INT16_MIN;
static volatile int32_t t72 = 1527;
static volatile int8_t x409 = INT8_MIN;
int8_t x426 = -1;
uint64_t x431 = 15358953429562292LLU;
volatile uint64_t t79 = 34332397604LLU;
int64_t x441 = -9565251LL;
uint64_t x448 = UINT64_MAX;
uint8_t x450 = 78U;
static uint32_t x452 = UINT32_MAX;
uint64_t x458 = 1662947075489546778LLU;
volatile uint64_t t83 = 72273LLU;
int64_t x462 = -124LL;
static volatile int32_t x468 = -1;
static uint16_t x471 = 17110U;
int16_t x474 = INT16_MIN;
static int32_t x475 = -1;
int16_t x484 = 660;
int64_t t88 = 5839915LL;
int8_t x486 = -1;
uint8_t x488 = 14U;
int16_t x498 = INT16_MIN;
int32_t t91 = -585565099;
int32_t x505 = -1;
uint8_t x514 = UINT8_MAX;
static volatile int16_t x531 = -1;
uint64_t x533 = 464835173279LLU;
volatile uint64_t x534 = 3567990179967460369LLU;
uint8_t x536 = UINT8_MAX;
uint8_t x538 = UINT8_MAX;
volatile int16_t x541 = -1;
static int32_t x542 = -259630749;


void f0(void) {
	int8_t x2 = 1;
	volatile uint64_t x3 = 48LLU;
	int64_t x4 = -1LL;
	volatile uint64_t t0 = 3440935187LLU;

	t0 = (x1+((x2*x3)|x4));

	if (t0 != 254LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 10318U;
	uint32_t x18 = 166U;
	uint8_t x19 = 3U;
	static uint32_t x20 = 81U;
	uint32_t t1 = 121527362U;

	t1 = (x17+((x18*x19)|x20));

	if (t1 != 10817U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x23 = INT8_MAX;
	static uint64_t t2 = 2265568194936681LLU;

	t2 = (x21+((x22*x23)|x24));

	if (t2 != 576456826702790331LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x33 = INT32_MAX;
	volatile uint8_t x34 = 31U;
	static int16_t x35 = -15197;
	uint64_t x36 = 9LLU;
	volatile uint64_t t3 = 888LLU;

	t3 = (x33+((x34*x35)|x36));

	if (t3 != 2147012540LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MAX;
	volatile int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	int64_t t4 = 351699LL;

	t4 = (x37+((x38*x39)|x40));

	if (t4 != 32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x45 = -7287651;
	static int16_t x46 = INT16_MIN;
	static volatile uint32_t x47 = 306595696U;
	static volatile int8_t x48 = 53;
	uint32_t t5 = 24543U;

	t5 = (x45+((x46*x47)|x48));

	if (t5 != 3688418514U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = -1;
	static int64_t x50 = -1LL;
	uint16_t x52 = 4225U;
	static volatile int64_t t6 = 981148LL;

	t6 = (x49+((x50*x51)|x52));

	if (t6 != 4224LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = UINT64_MAX;
	volatile uint8_t x58 = UINT8_MAX;
	int8_t x59 = -1;
	uint64_t t7 = 1674492688453925342LLU;

	t7 = (x57+((x58*x59)|x60));

	if (t7 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x62 = -1;
	volatile int8_t x63 = INT8_MAX;
	static volatile int32_t t8 = 193472;

	t8 = (x61+((x62*x63)|x64));

	if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x69 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	static uint16_t x72 = 97U;
	static uint32_t t9 = 18471201U;

	t9 = (x69+((x70*x71)|x72));

	if (t9 != 224U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x74 = 645LLU;
	int32_t x75 = -1;
	int32_t x76 = 12518;
	uint64_t t10 = 76LLU;

	t10 = (x73+((x74*x75)|x76));

	if (t10 != 9223372036854775294LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -362;
	static int16_t x78 = INT16_MIN;
	uint8_t x79 = 6U;
	uint8_t x80 = 4U;
	int32_t t11 = 856;

	t11 = (x77+((x78*x79)|x80));

	if (t11 != -196966) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x84 = INT8_MIN;
	uint64_t t12 = 56LLU;

	t12 = (x81+((x82*x83)|x84));

	if (t12 != 32751LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x85 = 9U;
	volatile int64_t x86 = 704498798LL;
	uint16_t x88 = UINT16_MAX;
	int64_t t13 = 582LL;

	t13 = (x85+((x86*x87)|x88));

	if (t13 != 12919064437325832LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x93 = UINT32_MAX;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = -6601LL;
	uint32_t x96 = 31186322U;
	int64_t t14 = -84040810LL;

	t14 = (x93+((x94*x95)|x96));

	if (t14 != -28346752967206LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	static int8_t x99 = INT8_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t15 = -1725190018341LL;

	t15 = (x97+((x98*x99)|x100));

	if (t15 != -2147499904LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x114 = -1;
	volatile int64_t x116 = -2852LL;
	volatile int64_t t16 = 14634LL;

	t16 = (x113+((x114*x115)|x116));

	if (t16 != 5278LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = 1098086LLU;
	uint8_t x122 = 37U;
	uint16_t x123 = 7U;
	volatile int64_t x124 = -1LL;
	volatile uint64_t t17 = 90981LLU;

	t17 = (x121+((x122*x123)|x124));

	if (t17 != 1098085LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x129 = -1;
	uint32_t t18 = 2U;

	t18 = (x129+((x130*x131)|x132));

	if (t18 != 4294967167U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x134 = 83;
	static int32_t x136 = INT32_MIN;
	volatile uint64_t t19 = 528140LLU;

	t19 = (x133+((x134*x135)|x136));

	if (t19 != 18446744071562117086LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x137 = 59659U;
	volatile int64_t x139 = 13642660324664567LL;
	volatile uint16_t x140 = UINT16_MAX;
	static int64_t t20 = 1525LL;

	t20 = (x137+((x138*x139)|x140));

	if (t20 != 3478878382789552394LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x141 = 28910287;
	static volatile uint64_t x143 = UINT64_MAX;
	uint64_t t21 = 2073LLU;

	t21 = (x141+((x142*x143)|x144));

	if (t21 != 28910286LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x157 = INT16_MIN;
	static volatile int32_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MAX;
	int64_t t22 = 27LL;

	t22 = (x157+((x158*x159)|x160));

	if (t22 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x161 = INT16_MIN;
	int32_t x162 = -36017;
	volatile int64_t x163 = 48557841LL;
	int32_t x164 = INT32_MAX;
	int64_t t23 = 2938700150793768634LL;

	t23 = (x161+((x162*x163)|x164));

	if (t23 != -1748051722241LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x165 = 11172U;
	int16_t x166 = INT16_MAX;
	volatile int16_t x167 = 2019;
	int8_t x168 = -54;

	t24 = (x165+((x166*x167)|x168));

	if (t24 != 11139U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x169 = 18326684484LL;
	int32_t x170 = -1;
	static int32_t x172 = -3;
	int64_t t25 = 83186LL;

	t25 = (x169+((x170*x171)|x172));

	if (t25 != 18326684483LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x174 = 4145865LLU;
	static int64_t x175 = 410294LL;
	static int8_t x176 = -1;
	static volatile uint64_t t26 = 1053966592LLU;

	t26 = (x173+((x174*x175)|x176));

	if (t26 != 3568468LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	uint8_t x179 = 5U;
	uint16_t x180 = UINT16_MAX;
	static volatile int32_t t27 = 21;

	t27 = (x177+((x178*x179)|x180));

	if (t27 != 196479) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x181 = 26;
	int16_t x182 = INT16_MIN;
	static int16_t x183 = INT16_MAX;
	uint8_t x184 = 11U;

	t28 = (x181+((x182*x183)|x184));

	if (t28 != -1073709019) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = INT16_MAX;
	uint64_t x191 = 65LLU;
	static int64_t x192 = -7807351403530LL;
	volatile uint64_t t29 = 115655268LLU;

	t29 = (x189+((x190*x191)|x192));

	if (t29 != 18446736267606523902LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	int16_t x195 = -293;
	uint16_t x196 = 80U;

	t30 = (x193+((x194*x195)|x196));

	if (t30 != 245) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x198 = 1314284886U;
	volatile uint64_t x199 = 4877004105LLU;
	volatile int64_t x200 = -239188575LL;
	volatile uint64_t t31 = 300089LLU;

	t31 = (x197+((x198*x199)|x200));

	if (t31 != 18446744073508145063LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x201 = 2U;
	uint64_t x202 = 7437765474LLU;
	int32_t x203 = INT32_MAX;
	int16_t x204 = INT16_MIN;
	uint64_t t32 = 40145LLU;

	t32 = (x201+((x202*x203)|x204));

	if (t32 != 18446744073709532320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile int64_t x206 = -1LL;
	uint64_t x207 = 3450174980LLU;
	static volatile int8_t x208 = INT8_MIN;
	uint64_t t33 = 2030LLU;

	t33 = (x205+((x206*x207)|x208));

	if (t33 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x209 = -4;
	int16_t x210 = -1;
	uint16_t x212 = 222U;
	static int32_t t34 = -676389218;

	t34 = (x209+((x210*x211)|x212));

	if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x217 = INT32_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t35 = 136124U;

	t35 = (x217+((x218*x219)|x220));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = 105960762;
	static uint16_t x223 = 0U;
	int32_t t36 = INT32_MIN;

	t36 = (x221+((x222*x223)|x224));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x225 = UINT16_MAX;
	uint64_t x226 = UINT64_MAX;
	static int16_t x227 = -1;
	uint16_t x228 = 56U;
	volatile uint64_t t37 = 54LLU;

	t37 = (x225+((x226*x227)|x228));

	if (t37 != 65592LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x229 = 0;
	int16_t x230 = INT16_MAX;
	volatile int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t38 = -895139561;

	t38 = (x229+((x230*x231)|x232));

	if (t38 != -1073709056) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x233 = INT64_MIN;
	volatile int32_t x234 = INT32_MIN;
	uint32_t x235 = UINT32_MAX;
	int64_t t39 = 130750174761412LL;

	t39 = (x233+((x234*x235)|x236));

	if (t39 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x237 = UINT32_MAX;
	static int8_t x238 = INT8_MIN;
	uint32_t x239 = 5U;
	static int8_t x240 = 6;

	t40 = (x237+((x238*x239)|x240));

	if (t40 != 4294966661U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x242 = INT16_MIN;
	static int64_t x243 = 11999LL;
	uint16_t x244 = 0U;
	volatile int64_t t41 = 590571664381086164LL;

	t41 = (x241+((x242*x243)|x244));

	if (t41 != -393150465LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = 1;
	uint16_t x247 = 241U;

	t42 = (x245+((x246*x247)|x248));

	if (t42 != 65520) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x249 = INT16_MIN;
	uint32_t x250 = 124201U;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = 1U;

	t43 = (x249+((x250*x251)|x252));

	if (t43 != 18446744073709394647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x253 = INT32_MIN;
	volatile uint8_t x254 = UINT8_MAX;
	static uint64_t x255 = 190LLU;
	uint16_t x256 = 1U;
	uint64_t t44 = 1732595642718991715LLU;

	t44 = (x253+((x254*x255)|x256));

	if (t44 != 18446744071562116419LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	int64_t x260 = 193639LL;
	volatile int64_t t45 = -3774776994392519446LL;

	t45 = (x257+((x258*x259)|x260));

	if (t45 != -1073515418LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x261 = 121U;
	int8_t x262 = -2;
	int8_t x264 = 0;
	volatile int32_t t46 = 209;

	t46 = (x261+((x262*x263)|x264));

	if (t46 != 91) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x265 = -1;
	int8_t x268 = INT8_MAX;
	uint64_t t47 = 3205LLU;

	t47 = (x265+((x266*x267)|x268));

	if (t47 != 126LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x273 = INT8_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	volatile int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MIN;
	uint64_t t48 = 8957759857733472LLU;

	t48 = (x273+((x274*x275)|x276));

	if (t48 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x277 = 85U;
	uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 77U;
	static int64_t x280 = -1LL;
	int64_t t49 = -20510LL;

	t49 = (x277+((x278*x279)|x280));

	if (t49 != 84LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x281 = UINT64_MAX;
	volatile int16_t x282 = INT16_MIN;
	int16_t x284 = INT16_MAX;
	volatile uint64_t t50 = 10246292176872LLU;

	t50 = (x281+((x282*x283)|x284));

	if (t50 != 65534LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x289 = INT64_MIN;
	uint32_t x290 = 930002088U;
	int32_t x291 = 27;
	int32_t x292 = -3368384;
	int64_t t51 = 97963LL;

	t51 = (x289+((x290*x291)|x292));

	if (t51 != -9223372032561012744LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x293 = -1LL;
	volatile uint32_t x294 = 55930426U;
	int32_t x296 = -251648138;

	t52 = (x293+((x294*x295)|x296));

	if (t52 != 4217368565LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x301 = 641U;
	static int32_t x303 = INT32_MIN;
	static uint32_t x304 = 4761U;
	uint32_t t53 = 41105749U;

	t53 = (x301+((x302*x303)|x304));

	if (t53 != 2147489050U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = INT8_MAX;
	static int8_t x306 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	static volatile int16_t x308 = INT16_MIN;
	static uint32_t t54 = 0U;

	t54 = (x305+((x306*x307)|x308));

	if (t54 != 4294934783U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x319 = UINT8_MAX;
	volatile uint32_t x320 = UINT32_MAX;
	static uint32_t t55 = 9U;

	t55 = (x317+((x318*x319)|x320));

	if (t55 != 4294934527U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x325 = INT16_MAX;
	static uint16_t x326 = 41U;
	static int64_t x327 = 3026559338715LL;
	int64_t t56 = -22898841LL;

	t56 = (x325+((x326*x327)|x328));

	if (t56 != 124088932925438LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x329 = -44;
	int64_t x330 = -130290496330282LL;
	int32_t x331 = 6285;
	int64_t x332 = INT64_MIN;
	static volatile int64_t t57 = -1285103LL;

	t57 = (x329+((x330*x331)|x332));

	if (t57 != -818875769435822414LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x334 = -18;
	int16_t x335 = -1;
	int16_t x336 = INT16_MIN;
	volatile int32_t t58 = 23418614;

	t58 = (x333+((x334*x335)|x336));

	if (t58 != -32751) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x342 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t59 = 5773;

	t59 = (x341+((x342*x343)|x344));

	if (t59 != -7163) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = -2809;
	uint64_t t60 = 5583LLU;

	t60 = (x345+((x346*x347)|x348));

	if (t60 != 18446744073709548934LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x357 = 25U;
	volatile uint32_t x358 = UINT32_MAX;
	uint64_t x359 = 6159893LLU;
	int32_t x360 = 734449253;

	t61 = (x357+((x358*x359)|x360));

	if (t61 != 26456538980208648LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x361 = INT32_MIN;
	int16_t x362 = -1;
	static volatile uint32_t x363 = 24U;
	static int32_t x364 = 223;
	uint32_t t62 = 195422U;

	t62 = (x361+((x362*x363)|x364));

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x366 = INT16_MIN;
	uint64_t x367 = UINT64_MAX;
	static int64_t x368 = INT64_MIN;

	t63 = (x365+((x366*x367)|x368));

	if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x369 = 1020745239472430LLU;
	int16_t x370 = -1;
	int32_t x371 = 0;
	static uint16_t x372 = 2237U;

	t64 = (x369+((x370*x371)|x372));

	if (t64 != 1020745239474667LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x373 = INT64_MAX;
	volatile int8_t x374 = INT8_MIN;
	static uint64_t x376 = 49LLU;

	t65 = (x373+((x374*x375)|x376));

	if (t65 != 9223372036854726320LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x381 = -278188002757733LL;
	volatile int16_t x382 = 4;
	volatile int64_t x383 = 50565348216250LL;
	int16_t x384 = INT16_MIN;

	t66 = (x381+((x382*x383)|x384));

	if (t66 != -278188002776445LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = INT16_MIN;
	int64_t x387 = 21789LL;
	int8_t x388 = 3;
	volatile uint64_t t67 = 5658117775957517LLU;

	t67 = (x385+((x386*x387)|x388));

	if (t67 != 18446744073709497059LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x389 = 58634U;
	uint32_t x390 = 64739433U;
	int8_t x391 = INT8_MAX;
	int32_t x392 = -1;
	uint32_t t68 = 37U;

	t68 = (x389+((x390*x391)|x392));

	if (t68 != 58633U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x393 = 13U;
	volatile int8_t x395 = -1;
	uint8_t x396 = 2U;
	volatile int32_t t69 = 18783;

	t69 = (x393+((x394*x395)|x396));

	if (t69 != 31) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x397 = 15943LLU;
	int16_t x398 = INT16_MIN;
	static int8_t x399 = INT8_MIN;
	int16_t x400 = -1;
	volatile uint64_t t70 = 27447111926262LLU;

	t70 = (x397+((x398*x399)|x400));

	if (t70 != 15942LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x401 = INT8_MIN;
	static uint8_t x402 = 5U;
	int8_t x403 = 14;
	volatile uint8_t x404 = 6U;
	static int32_t t71 = 12704427;

	t71 = (x401+((x402*x403)|x404));

	if (t71 != -58) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = -1;

	t72 = (x405+((x406*x407)|x408));

	if (t72 != -32780) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x410 = 979708240235LLU;
	volatile int32_t x411 = INT32_MAX;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t73 = 524LLU;

	t73 = (x409+((x410*x411)|x412));

	if (t73 != 978600332921052799LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x413 = 6U;
	volatile uint64_t x414 = UINT64_MAX;
	uint8_t x415 = 37U;
	volatile uint32_t x416 = UINT32_MAX;
	volatile uint64_t t74 = 1057122676LLU;

	t74 = (x413+((x414*x415)|x416));

	if (t74 != 5LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x417 = INT16_MAX;
	uint16_t x418 = UINT16_MAX;
	uint64_t x419 = 4LLU;
	int32_t x420 = INT32_MIN;
	uint64_t t75 = 13226351445370004LLU;

	t75 = (x417+((x418*x419)|x420));

	if (t75 != 18446744071562362875LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = INT8_MAX;
	volatile uint8_t x422 = 7U;
	volatile int8_t x423 = INT8_MAX;
	static int64_t x424 = -1LL;
	int64_t t76 = -100094976815259270LL;

	t76 = (x421+((x422*x423)|x424));

	if (t76 != 126LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -1;
	int16_t x427 = -457;
	int8_t x428 = -6;
	volatile int32_t t77 = -486;

	t77 = (x425+((x426*x427)|x428));

	if (t77 != -6) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x429 = 66254380U;
	uint32_t x430 = UINT32_MAX;
	static uint16_t x432 = 0U;
	uint64_t t78 = 10078579683052123LLU;

	t78 = (x429+((x430*x431)|x432));

	if (t78 != 221770193958371960LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MAX;
	int16_t x439 = INT16_MAX;
	uint64_t x440 = UINT64_MAX;

	t79 = (x437+((x438*x439)|x440));

	if (t79 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x442 = UINT16_MAX;
	int8_t x443 = INT8_MAX;
	volatile uint64_t x444 = 1883850968645570LLU;
	static uint64_t t80 = 3120096422716LLU;

	t80 = (x441+((x442*x443)|x444));

	if (t80 != 1883850962504576LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x445 = UINT64_MAX;
	volatile int64_t x446 = -1LL;
	volatile int16_t x447 = INT16_MIN;
	uint64_t t81 = 455353525295919970LLU;

	t81 = (x445+((x446*x447)|x448));

	if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x449 = INT64_MIN;
	uint8_t x451 = UINT8_MAX;
	int64_t t82 = -209914160128292859LL;

	t82 = (x449+((x450*x451)|x452));

	if (t82 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x457 = 0LLU;
	int8_t x459 = INT8_MIN;
	static uint16_t x460 = UINT16_MAX;

	t83 = (x457+((x458*x459)|x460));

	if (t83 != 8503703221852635135LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x461 = 52901671U;
	static int16_t x463 = -1;
	static volatile uint8_t x464 = 2U;
	static volatile int64_t t84 = -85549403828LL;

	t84 = (x461+((x462*x463)|x464));

	if (t84 != 52901797LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x465 = 491U;
	int8_t x466 = -1;
	uint8_t x467 = UINT8_MAX;
	uint32_t t85 = 2791U;

	t85 = (x465+((x466*x467)|x468));

	if (t85 != 490U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x469 = INT16_MIN;
	static int16_t x470 = -276;
	uint32_t x472 = UINT32_MAX;
	static uint32_t t86 = 2U;

	t86 = (x469+((x470*x471)|x472));

	if (t86 != 4294934527U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x473 = 512922404;
	int8_t x476 = 9;
	int32_t t87 = 214425;

	t87 = (x473+((x474*x475)|x476));

	if (t87 != 512955181) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = -1;
	int64_t x482 = -232574630156LL;
	int8_t x483 = INT8_MIN;

	t88 = (x481+((x482*x483)|x484));

	if (t88 != 29769552660115LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x485 = 5U;
	uint16_t x487 = 3U;
	int32_t t89 = 7654;

	t89 = (x485+((x486*x487)|x488));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x493 = INT64_MIN;
	int8_t x494 = -1;
	int32_t x495 = -1;
	volatile int16_t x496 = 123;
	int64_t t90 = 109741LL;

	t90 = (x493+((x494*x495)|x496));

	if (t90 != -9223372036854775685LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x497 = -1;
	int32_t x499 = 846;
	int8_t x500 = -1;

	t91 = (x497+((x498*x499)|x500));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x501 = INT8_MIN;
	int32_t x502 = -141318036;
	uint32_t x503 = UINT32_MAX;
	int8_t x504 = 5;
	uint32_t t92 = 57U;

	t92 = (x501+((x502*x503)|x504));

	if (t92 != 141317909U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x506 = -144346LL;
	uint32_t x507 = 31U;
	volatile uint64_t x508 = 301024296LLU;
	volatile uint64_t t93 = 3427472102820LLU;

	t93 = (x505+((x506*x507)|x508));

	if (t93 != 18446744073709288633LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x509 = -1LL;
	uint32_t x510 = UINT32_MAX;
	uint16_t x511 = UINT16_MAX;
	static volatile int32_t x512 = INT32_MAX;
	volatile int64_t t94 = -875964373944LL;

	t94 = (x509+((x510*x511)|x512));

	if (t94 != 4294967294LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = INT32_MIN;
	static uint32_t x515 = UINT32_MAX;
	static int16_t x516 = INT16_MAX;
	volatile uint32_t t95 = 3432U;

	t95 = (x513+((x514*x515)|x516));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x529 = 29244667024LLU;
	static uint8_t x530 = 6U;
	uint32_t x532 = UINT32_MAX;
	static uint64_t t96 = 8102808653467LLU;

	t96 = (x529+((x530*x531)|x532));

	if (t96 != 33539634319LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x535 = UINT32_MAX;
	static uint64_t t97 = 7829952640LLU;

	t97 = (x533+((x534*x535)|x536));

	if (t97 != 17692066037489137566LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x537 = INT16_MIN;
	static int8_t x539 = -1;
	static uint8_t x540 = 0U;
	volatile int32_t t98 = 4;

	t98 = (x537+((x538*x539)|x540));

	if (t98 != -33023) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x543 = -1;
	static int64_t x544 = -30LL;
	volatile int64_t t99 = -4479662543LL;

	t99 = (x541+((x542*x543)|x544));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

