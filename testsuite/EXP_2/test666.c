#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = INT8_MIN;
static uint8_t x12 = 9U;
volatile uint64_t t3 = 4036781059LLU;
volatile int64_t t5 = -16117496153600LL;
static int16_t x58 = INT16_MAX;
int32_t x65 = INT32_MAX;
uint64_t x67 = UINT64_MAX;
int8_t x69 = 1;
int16_t x70 = -483;
int8_t x75 = INT8_MAX;
static int32_t x86 = INT32_MIN;
int8_t x97 = 1;
uint64_t x102 = UINT64_MAX;
volatile uint64_t x114 = UINT64_MAX;
uint16_t x115 = 228U;
uint64_t t15 = 21145499517LLU;
uint16_t x154 = UINT16_MAX;
uint64_t x156 = 37237844373LLU;
static uint64_t t23 = 61626821033756LLU;
uint16_t x160 = 455U;
volatile uint16_t x172 = UINT16_MAX;
static int64_t t27 = 43961310608LL;
int16_t x180 = 13040;
volatile uint32_t x200 = UINT32_MAX;
int8_t x213 = -1;
int32_t t35 = -13832749;
static uint64_t x222 = UINT64_MAX;
volatile uint32_t x229 = 1331951U;
static uint64_t x230 = 229164953821430LLU;
static uint32_t x237 = 7604577U;
int8_t x241 = INT8_MAX;
static uint64_t x242 = UINT64_MAX;
int8_t x243 = INT8_MAX;
int64_t x244 = INT64_MAX;
uint16_t x259 = UINT16_MAX;
volatile int64_t x264 = -38LL;
static int64_t x267 = INT64_MAX;
int16_t x275 = INT16_MIN;
volatile int32_t x276 = INT32_MIN;
uint64_t t48 = 5496154683535462822LLU;
volatile int8_t x290 = 22;
int16_t x295 = INT16_MIN;
int8_t x297 = 6;
volatile uint16_t x298 = 13U;
static volatile uint32_t x299 = 2856683U;
int16_t x300 = INT16_MIN;
uint32_t x302 = 384635U;
volatile uint64_t t53 = 37481705887LLU;
uint32_t x330 = 21U;
volatile uint16_t x378 = UINT16_MAX;
int8_t x379 = INT8_MIN;
static volatile uint32_t t62 = 872U;
int16_t x383 = -1;
static int8_t x385 = -1;
uint64_t x388 = 510668749022LLU;
uint64_t x394 = 1932529783123746LLU;
uint8_t x405 = 8U;
uint32_t x408 = 3753U;
int16_t x410 = 3;
volatile int32_t t69 = -24316871;
int32_t x426 = INT32_MIN;
uint64_t t72 = 7917610060086318732LLU;
uint16_t x432 = UINT16_MAX;
int32_t x434 = INT32_MIN;
int16_t x450 = -72;
static uint8_t x452 = 0U;
int8_t x459 = -28;
uint32_t t79 = 554596U;
uint16_t x461 = 46U;
int64_t x463 = INT64_MIN;
volatile int8_t x472 = INT8_MIN;
volatile int16_t x473 = INT16_MIN;
int64_t x474 = -108LL;
static int16_t x483 = INT16_MAX;
int8_t x484 = INT8_MIN;
volatile uint32_t t84 = 978116842U;
int8_t x485 = INT8_MAX;
uint64_t x487 = 53547826475597452LLU;
uint16_t x498 = UINT16_MAX;
int16_t x501 = INT16_MIN;
int32_t x512 = INT32_MAX;
uint64_t t91 = 104527025255898211LLU;
volatile uint32_t x515 = UINT32_MAX;
int16_t x525 = 1;
int64_t x527 = -51343422158LL;
static int32_t x531 = -1;
volatile uint16_t x532 = 52U;
int32_t t96 = -52;
static int8_t x543 = -1;
static volatile int64_t x550 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = 59;
	uint8_t x4 = 2U;
	uint32_t t0 = 14U;

	t0 = ((x1^(x2/x3))*x4);

	if (t0 != 4149375022U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x10 = 1797356867U;
	static int16_t x11 = -1;
	volatile uint32_t t1 = 102477330U;

	t1 = ((x9^(x10/x11))*x12);

	if (t1 != 4294966144U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x21 = -19982679LL;
	int64_t x22 = -34315289LL;
	uint64_t x23 = UINT64_MAX;
	volatile int16_t x24 = 13;
	uint64_t t2 = 10620088543969LLU;

	t2 = ((x21^(x22/x23))*x24);

	if (t2 != 18446744073449776789LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	int16_t x26 = 0;
	volatile uint8_t x27 = 2U;
	static int8_t x28 = INT8_MAX;

	t3 = ((x25^(x26/x27))*x28);

	if (t3 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x37 = 73686LLU;
	uint8_t x38 = 6U;
	int64_t x39 = INT64_MIN;
	int16_t x40 = 1008;
	volatile uint64_t t4 = 3310576250596698LLU;

	t4 = ((x37^(x38/x39))*x40);

	if (t4 != 74275488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MAX;
	int32_t x47 = -1;
	int16_t x48 = 63;

	t5 = ((x45^(x46/x47))*x48);

	if (t5 != 63LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x53 = INT32_MAX;
	static int8_t x54 = INT8_MIN;
	static int64_t x55 = -12282686698LL;
	uint64_t x56 = 1822253510383LLU;
	uint64_t t6 = 16838LLU;

	t6 = ((x53^(x54/x55))*x56);

	if (t6 != 2549870609412264209LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = -161318;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 19;
	static int64_t t7 = 9041503404683138LL;

	t7 = ((x57^(x58/x59))*x60);

	if (t7 != -3065042LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x66 = UINT8_MAX;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t8 = 3894015289LLU;

	t8 = ((x65^(x66/x67))*x68);

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x71 = INT8_MIN;
	int64_t x72 = -2412051648409814384LL;
	int64_t t9 = -152526202333392LL;

	t9 = ((x69^(x70/x71))*x72);

	if (t9 != -4824103296819628768LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x73 = INT16_MAX;
	int16_t x74 = -942;
	int16_t x76 = INT16_MIN;
	volatile int32_t t10 = -76;

	t10 = ((x73^(x74/x75))*x76);

	if (t10 != 1073545216) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t11 = 279986625LLU;

	t11 = ((x85^(x86/x87))*x88);

	if (t11 != 65664LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x98 = 43U;
	int32_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t12 = -12726568;

	t12 = ((x97^(x98/x99))*x100);

	if (t12 != -2883540) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x101 = INT64_MAX;
	int64_t x103 = -98052059834194LL;
	static uint16_t x104 = UINT16_MAX;
	volatile uint64_t t13 = 221732520312LLU;

	t13 = ((x101^(x102/x103))*x104);

	if (t13 != 9223372036854644738LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x109 = 15U;
	uint32_t x110 = 509877U;
	uint64_t x111 = UINT64_MAX;
	static uint64_t x112 = 62033664550637LLU;
	volatile uint64_t t14 = 5957659948916031LLU;

	t14 = ((x109^(x110/x111))*x112);

	if (t14 != 930504968259555LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x113 = 9280;
	uint16_t x116 = UINT16_MAX;

	t15 = ((x113^(x114/x115))*x116);

	if (t15 != 8009770452458286268LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x121 = INT16_MIN;
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MAX;
	volatile int64_t x124 = 136448573970LL;
	int64_t t16 = -24212187LL;

	t16 = ((x121^(x122/x123))*x124);

	if (t16 != -4471146871848960LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x125 = 698;
	uint16_t x126 = UINT16_MAX;
	int16_t x127 = INT16_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	int32_t t17 = -1;

	t17 = ((x125^(x126/x127))*x128);

	if (t17 != -45808965) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x129 = 2;
	uint16_t x130 = 3U;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 46U;
	volatile int32_t t18 = 666225;

	t18 = ((x129^(x130/x131))*x132);

	if (t18 != 92) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x133 = INT32_MAX;
	volatile int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 7538U;
	static int64_t t19 = 2680761559318LL;

	t19 = ((x133^(x134/x135))*x136);

	if (t19 != -2121742186713201380LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int8_t x138 = INT8_MIN;
	static int32_t x139 = 16044;
	uint32_t x140 = UINT32_MAX;
	volatile uint64_t t20 = 107223725059135569LLU;

	t20 = ((x137^(x138/x139))*x140);

	if (t20 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x145 = 0U;
	int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = UINT32_MAX;
	int64_t t21 = 1978071LL;

	t21 = ((x145^(x146/x147))*x148);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = INT32_MIN;
	volatile int64_t x150 = 8655660LL;
	int32_t x151 = -1;
	int16_t x152 = INT16_MIN;
	int64_t t22 = -58798197838535LL;

	t22 = ((x149^(x150/x151))*x152);

	if (t22 != -70085115510784LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x153 = 240U;
	int32_t x155 = INT32_MIN;

	t23 = ((x153^(x154/x155))*x156);

	if (t23 != 8937082649520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x157 = 1857U;
	uint16_t x158 = 116U;
	int64_t x159 = -46064387346526LL;
	volatile int64_t t24 = -27354628076LL;

	t24 = ((x157^(x158/x159))*x160);

	if (t24 != 844935LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = INT32_MAX;
	int8_t x162 = -1;
	int32_t x163 = INT32_MIN;
	volatile uint32_t x164 = UINT32_MAX;
	uint32_t t25 = 928481U;

	t25 = ((x161^(x162/x163))*x164);

	if (t25 != 2147483649U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x165 = 880LLU;
	volatile int32_t x166 = 5477128;
	volatile int8_t x167 = 11;
	int32_t x168 = INT32_MIN;
	volatile uint64_t t26 = 5434LLU;

	t26 = ((x165^(x166/x167))*x168);

	if (t26 != 18445674008377556992LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x169 = 566;
	volatile int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MAX;

	t27 = ((x169^(x170/x171))*x172);

	if (t27 != 37092810LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x177 = -1;
	int64_t x178 = -8404730LL;
	int8_t x179 = -4;
	int64_t t28 = -9134587145424674LL;

	t28 = ((x177^(x178/x179))*x180);

	if (t28 != -27399426320LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x181 = 136124;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MAX;
	int64_t t29 = -14320LL;

	t29 = ((x181^(x182/x183))*x184);

	if (t29 != 17287748LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x189 = 242;
	uint64_t x190 = 2938105160LLU;
	volatile int64_t x191 = -1LL;
	int32_t x192 = -1;
	uint64_t t30 = 7772283LLU;

	t30 = ((x189^(x190/x191))*x192);

	if (t30 != 18446744073709551374LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x193 = 54U;
	uint32_t x194 = UINT32_MAX;
	volatile int64_t x195 = -1LL;
	int32_t x196 = INT32_MAX;
	static volatile int64_t t31 = -4221415573LL;

	t31 = ((x193^(x194/x195))*x196);

	if (t31 != -9223371914448207927LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = -1;
	volatile uint32_t x198 = UINT32_MAX;
	uint8_t x199 = UINT8_MAX;
	uint32_t t32 = 1413U;

	t32 = ((x197^(x198/x199))*x200);

	if (t32 != 16843010U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x201 = -1;
	int16_t x202 = INT16_MAX;
	uint32_t x203 = 500340631U;
	volatile uint8_t x204 = 51U;
	uint32_t t33 = 1U;

	t33 = ((x201^(x202/x203))*x204);

	if (t33 != 4294967245U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x205 = 737722258436854LLU;
	volatile int8_t x206 = INT8_MAX;
	uint8_t x207 = UINT8_MAX;
	volatile int8_t x208 = INT8_MIN;
	static volatile uint64_t t34 = 2028LLU;

	t34 = ((x205^(x206/x207))*x208);

	if (t34 != 18352315624629634304LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x214 = INT8_MAX;
	int8_t x215 = 1;
	int8_t x216 = 0;

	t35 = ((x213^(x214/x215))*x216);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x217 = 64U;
	int8_t x218 = -1;
	static int16_t x219 = 3;
	uint32_t x220 = 813991352U;
	uint32_t t36 = 43696463U;

	t36 = ((x217^(x218/x219))*x220);

	if (t36 != 555838976U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x221 = 7823U;
	uint8_t x223 = UINT8_MAX;
	static int64_t x224 = INT64_MAX;
	volatile uint64_t t37 = 3723320213617LLU;

	t37 = ((x221^(x222/x223))*x224);

	if (t37 != 18374403900871467122LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x231 = 82U;
	int8_t x232 = 15;
	static uint64_t t38 = 6330838215447440358LLU;

	t38 = ((x229^(x230/x231))*x232);

	if (t38 != 41920430003070LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x233 = 15U;
	int32_t x234 = INT32_MIN;
	uint8_t x235 = UINT8_MAX;
	int8_t x236 = 8;
	static volatile int32_t t39 = 0;

	t39 = ((x233^(x234/x235))*x236);

	if (t39 != -67371912) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x238 = INT32_MAX;
	uint32_t x239 = 1475U;
	int16_t x240 = INT16_MIN;
	uint32_t t40 = 169U;

	t40 = ((x237^(x238/x239))*x240);

	if (t40 != 3772252160U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t t41 = 189875135466639609LLU;

	t41 = ((x241^(x242/x243))*x244);

	if (t41 != 9078122083518480003LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x249 = 21122707476LLU;
	int64_t x250 = 28748131201LL;
	volatile int64_t x251 = -1LL;
	volatile int64_t x252 = -14LL;
	volatile uint64_t t42 = 473448LLU;

	t42 = ((x249^(x250/x251))*x252);

	if (t42 != 141522567718LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x257 = -1;
	static uint8_t x258 = 0U;
	static uint32_t x260 = 1U;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = ((x257^(x258/x259))*x260);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x261 = 6U;
	uint16_t x262 = 1U;
	int64_t x263 = INT64_MIN;
	static int64_t t44 = 4472298962576232LL;

	t44 = ((x261^(x262/x263))*x264);

	if (t44 != -228LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x265 = 27204U;
	int32_t x266 = -1;
	uint16_t x268 = 880U;
	volatile int64_t t45 = -20701LL;

	t45 = ((x265^(x266/x267))*x268);

	if (t45 != 23939520LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	volatile int32_t x271 = -1;
	uint8_t x272 = 2U;
	int64_t t46 = -305639401LL;

	t46 = ((x269^(x270/x271))*x272);

	if (t46 != -4LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x273 = 1LL;
	volatile uint8_t x274 = 0U;
	volatile int64_t t47 = -1596870007067393LL;

	t47 = ((x273^(x274/x275))*x276);

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x285 = -1;
	uint16_t x286 = 5669U;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = 3350827459602840LLU;

	t48 = ((x285^(x286/x287))*x288);

	if (t48 != 18443393246249948776LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x289 = 118LLU;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 0U;
	static uint64_t t49 = 1LLU;

	t49 = ((x289^(x290/x291))*x292);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x293 = 3U;
	int64_t x294 = INT64_MIN;
	static int8_t x296 = -3;
	volatile int64_t t50 = 124232159746288259LL;

	t50 = ((x293^(x294/x295))*x296);

	if (t50 != -844424930131977LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t t51 = 1030898445U;

	t51 = ((x297^(x298/x299))*x300);

	if (t51 != 4294770688U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x301 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -1;
	uint32_t t52 = 15U;

	t52 = ((x301^(x302/x303))*x304);

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 1760063406962316LLU;

	t53 = ((x313^(x314/x315))*x316);

	if (t53 != 17637448737653522432LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = 12;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t54 = 3453837382723588LLU;

	t54 = ((x317^(x318/x319))*x320);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x325 = 585345235U;
	uint16_t x326 = 1U;
	static volatile int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	uint32_t t55 = 27981416U;

	t55 = ((x325^(x326/x327))*x328);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x329 = 71964456U;
	static uint64_t x331 = 3726LLU;
	static int16_t x332 = INT16_MIN;
	volatile uint64_t t56 = 172637589669524LLU;

	t56 = ((x329^(x330/x331))*x332);

	if (t56 != 18446741715578257408LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MAX;
	uint64_t x336 = UINT64_MAX;
	uint64_t t57 = 2816332573769920927LLU;

	t57 = ((x333^(x334/x335))*x336);

	if (t57 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x345 = INT64_MIN;
	uint32_t x346 = 182316248U;
	static int16_t x347 = -126;
	uint64_t x348 = 58759531540228606LLU;
	static volatile uint64_t t58 = 2004166400639764344LLU;

	t58 = ((x345^(x346/x347))*x348);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 21358767384307919LLU;
	uint16_t x355 = 1006U;
	int64_t x356 = -194353102283876014LL;
	volatile uint64_t t59 = 29044134564306LLU;

	t59 = ((x353^(x354/x355))*x356);

	if (t59 != 16528908450447822570LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	volatile int64_t t60 = -77726738785LL;

	t60 = ((x365^(x366/x367))*x368);

	if (t60 != 1073741824LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x373 = INT64_MIN;
	volatile uint64_t x374 = 205172646LLU;
	volatile int64_t x375 = -86965558235LL;
	volatile uint8_t x376 = 5U;
	static volatile uint64_t t61 = 34813854418983359LLU;

	t61 = ((x373^(x374/x375))*x376);

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x377 = -1;
	uint32_t x380 = UINT32_MAX;

	t62 = ((x377^(x378/x379))*x380);

	if (t62 != 4294966786U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x381 = INT16_MIN;
	volatile int64_t x382 = -7216LL;
	static int32_t x384 = 167354;
	int64_t t63 = 204818541716600LL;

	t63 = ((x381^(x382/x383))*x384);

	if (t63 != -4276229408LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x386 = -13;
	int32_t x387 = INT32_MAX;
	static uint64_t t64 = 68902838878683448LLU;

	t64 = ((x385^(x386/x387))*x388);

	if (t64 != 18446743563040802594LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x393 = INT8_MAX;
	uint64_t x395 = 2049846814824208LLU;
	uint32_t x396 = 588U;
	uint64_t t65 = 3629214763LLU;

	t65 = ((x393^(x394/x395))*x396);

	if (t65 != 74676LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x397 = 7U;
	int64_t x398 = INT64_MAX;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MAX;
	volatile uint64_t t66 = 51805LLU;

	t66 = ((x397^(x398/x399))*x400);

	if (t66 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x401 = -1;
	static volatile uint32_t x402 = 220U;
	int16_t x403 = INT16_MIN;
	static uint16_t x404 = 93U;
	volatile uint32_t t67 = 104U;

	t67 = ((x401^(x402/x403))*x404);

	if (t67 != 4294967203U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x406 = 1077LL;
	uint16_t x407 = 52U;
	int64_t t68 = -19350842884337362LL;

	t68 = ((x405^(x406/x407))*x408);

	if (t68 != 105084LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x409 = 1U;
	static int32_t x411 = 11;
	static uint8_t x412 = UINT8_MAX;

	t69 = ((x409^(x410/x411))*x412);

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x413 = -1;
	uint8_t x414 = 87U;
	static volatile uint32_t x415 = 15544621U;
	int64_t x416 = -58811996LL;
	int64_t t70 = -3LL;

	t70 = ((x413^(x414/x415))*x416);

	if (t70 != -252595599373670820LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x417 = INT32_MAX;
	uint64_t x418 = UINT64_MAX;
	volatile uint8_t x419 = 18U;
	static uint8_t x420 = UINT8_MAX;
	static uint64_t t71 = 106194LLU;

	t71 = ((x417^(x418/x419))*x420);

	if (t71 != 3074457406463628601LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x425 = INT64_MAX;
	static int16_t x427 = INT16_MIN;
	volatile uint64_t x428 = 71LLU;

	t72 = ((x425^(x426/x427))*x428);

	if (t72 != 9223372036850122681LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x429 = -96936240711438456LL;
	uint8_t x430 = 36U;
	uint64_t x431 = 2683LLU;
	static volatile uint64_t t73 = 230783LLU;

	t73 = ((x429^(x430/x431))*x432);

	if (t73 != 11410170405676093560LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x433 = INT64_MIN;
	static int8_t x435 = 1;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t74 = 1LLU;

	t74 = ((x433^(x434/x435))*x436);

	if (t74 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x441 = -2103;
	static volatile int16_t x442 = INT16_MIN;
	uint64_t x443 = UINT64_MAX;
	int64_t x444 = 55796LL;
	volatile uint64_t t75 = 3391761LLU;

	t75 = ((x441^(x442/x443))*x444);

	if (t75 != 18446744073592212628LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x445 = UINT32_MAX;
	int32_t x446 = -1;
	int8_t x447 = -2;
	static int8_t x448 = INT8_MAX;
	uint32_t t76 = 27U;

	t76 = ((x445^(x446/x447))*x448);

	if (t76 != 4294967169U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x449 = -10;
	uint8_t x451 = 11U;
	int32_t t77 = 40;

	t77 = ((x449^(x450/x451))*x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MIN;
	int16_t x455 = 282;
	uint16_t x456 = 0U;
	int64_t t78 = 141843LL;

	t78 = ((x453^(x454/x455))*x456);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x457 = UINT32_MAX;
	uint8_t x458 = 0U;
	uint8_t x460 = 5U;

	t79 = ((x457^(x458/x459))*x460);

	if (t79 != 4294967291U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x462 = UINT16_MAX;
	volatile uint8_t x464 = UINT8_MAX;
	int64_t t80 = -3993LL;

	t80 = ((x461^(x462/x463))*x464);

	if (t80 != 11730LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x465 = INT32_MIN;
	int64_t x466 = INT64_MIN;
	static uint64_t x467 = 856285313860394230LLU;
	int16_t x468 = INT16_MIN;
	uint64_t t81 = 27LLU;

	t81 = ((x465^(x466/x467))*x468);

	if (t81 != 70368743849984LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x469 = 401;
	uint32_t x470 = 23534U;
	int64_t x471 = -1LL;
	int64_t t82 = -33188334640489LL;

	t82 = ((x469^(x470/x471))*x472);

	if (t82 != 2965120LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x475 = UINT8_MAX;
	int8_t x476 = 1;
	volatile int64_t t83 = 10844760206824LL;

	t83 = ((x473^(x474/x475))*x476);

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x481 = 25U;
	uint32_t x482 = UINT32_MAX;

	t84 = ((x481^(x482/x483))*x484);

	if (t84 != 4278186368U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x486 = UINT64_MAX;
	static volatile uint16_t x488 = 318U;
	volatile uint64_t t85 = 844322064691LLU;

	t85 = ((x485^(x486/x487))*x488);

	if (t85 != 93810LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x489 = UINT64_MAX;
	volatile uint32_t x490 = 1728909U;
	int16_t x491 = INT16_MIN;
	static int64_t x492 = 48158LL;
	uint64_t t86 = 1708LLU;

	t86 = ((x489^(x490/x491))*x492);

	if (t86 != 18446744073709503458LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x493 = -519;
	uint8_t x494 = 33U;
	int64_t x495 = -1LL;
	int32_t x496 = INT32_MIN;
	int64_t t87 = -25098030479LL;

	t87 = ((x493^(x494/x495))*x496);

	if (t87 != -1181116006400LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x497 = 2671984726147210LLU;
	int8_t x499 = INT8_MIN;
	int32_t x500 = 15538148;
	volatile uint64_t t88 = 1944395LLU;

	t88 = ((x497^(x498/x499))*x500);

	if (t88 != 5926781301730455756LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x502 = 211573045;
	int16_t x503 = -1;
	int16_t x504 = -1;
	volatile int32_t t89 = 59991035;

	t89 = ((x501^(x502/x503))*x504);

	if (t89 != -211560139) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x505 = 56;
	static int8_t x506 = -1;
	int32_t x507 = INT32_MIN;
	volatile int64_t x508 = -9LL;
	volatile int64_t t90 = -7852011917LL;

	t90 = ((x505^(x506/x507))*x508);

	if (t90 != -504LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x509 = 21U;
	int8_t x510 = -9;
	uint64_t x511 = 2286401763LLU;

	t91 = ((x509^(x510/x511))*x512);

	if (t91 != 17325949352347941301LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x513 = -1LL;
	int16_t x514 = INT16_MAX;
	int64_t x516 = -4178904417531030490LL;
	int64_t t92 = 6461770LL;

	t92 = ((x513^(x514/x515))*x516);

	if (t92 != 4178904417531030490LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x517 = 0U;
	int8_t x518 = INT8_MAX;
	int32_t x519 = 27661828;
	int16_t x520 = INT16_MIN;
	volatile int32_t t93 = 1;

	t93 = ((x517^(x518/x519))*x520);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x521 = UINT64_MAX;
	int8_t x522 = INT8_MAX;
	int32_t x523 = -4274637;
	int8_t x524 = INT8_MIN;
	static volatile uint64_t t94 = 1718LLU;

	t94 = ((x521^(x522/x523))*x524);

	if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x526 = INT8_MAX;
	uint64_t x528 = 15802012625439049LLU;
	volatile uint64_t t95 = 31011099257324711LLU;

	t95 = ((x525^(x526/x527))*x528);

	if (t95 != 15802012625439049LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x529 = 19U;
	int16_t x530 = -16;

	t96 = ((x529^(x530/x531))*x532);

	if (t96 != 156) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x537 = 4U;
	static uint32_t x538 = 2966419U;
	volatile uint64_t x539 = 3225078129475962LLU;
	int32_t x540 = -1;
	uint64_t t97 = 10LLU;

	t97 = ((x537^(x538/x539))*x540);

	if (t97 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MIN;
	int16_t x542 = -1;
	uint32_t x544 = 7926U;
	volatile uint32_t t98 = 385099U;

	t98 = ((x541^(x542/x543))*x544);

	if (t98 != 4293960694U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x549 = -30252434;
	uint32_t x551 = UINT32_MAX;
	int32_t x552 = -1;
	int64_t t99 = 1550316108LL;

	t99 = ((x549^(x550/x551))*x552);

	if (t99 != -2117231214LL) { NG(); } else { ; }
	
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

