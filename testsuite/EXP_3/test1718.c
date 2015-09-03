#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = UINT16_MAX;
int32_t x9 = INT32_MIN;
uint64_t x14 = UINT64_MAX;
int32_t x16 = -1;
int16_t x18 = INT16_MAX;
volatile uint64_t t5 = 332851806LLU;
uint16_t x25 = 1547U;
static volatile int8_t x27 = 11;
static volatile int8_t x28 = 16;
static int8_t x46 = INT8_MIN;
static uint64_t x47 = 13119383LLU;
int32_t t11 = -475;
volatile int32_t t12 = -3;
int16_t x61 = -1;
uint8_t x70 = 1U;
volatile uint16_t x78 = 1618U;
int32_t x89 = INT32_MAX;
int32_t x91 = -1;
uint32_t x92 = 699295300U;
int16_t x99 = INT16_MIN;
static int32_t x100 = -1;
volatile uint64_t t22 = 131048212922971LLU;
int8_t x108 = 41;
uint64_t t23 = 119017429LLU;
uint32_t x124 = 12U;
static int32_t x127 = INT32_MIN;
volatile int32_t x136 = INT32_MAX;
static int64_t x137 = INT64_MIN;
uint32_t x152 = 21064314U;
int8_t x153 = 0;
int32_t t31 = -57;
uint64_t x158 = 4930LLU;
int16_t x160 = -28;
static int16_t x162 = INT16_MAX;
static volatile int16_t x163 = 0;
uint16_t x164 = 2704U;
volatile uint64_t t35 = 4892109838729127477LLU;
uint8_t x177 = 29U;
uint32_t x180 = 30225U;
volatile uint64_t x185 = 7743068LLU;
int8_t x190 = INT8_MAX;
uint32_t t39 = 8189361U;
int8_t x198 = INT8_MIN;
volatile int8_t x220 = -3;
int8_t x224 = -5;
int64_t t44 = -104183922717813076LL;
volatile uint64_t t45 = 67251399LLU;
volatile int32_t x240 = INT32_MIN;
static int16_t x246 = INT16_MIN;
uint64_t x247 = 7752393LLU;
int8_t x249 = -1;
volatile int64_t t50 = -1081734707LL;
int64_t x262 = -1LL;
uint8_t x264 = 1U;
int64_t t53 = 143LL;
static int32_t x267 = INT32_MIN;
volatile uint64_t x274 = 0LLU;
volatile uint16_t x275 = UINT16_MAX;
int64_t x279 = INT64_MIN;
int16_t x280 = INT16_MAX;
uint16_t x297 = 9358U;
volatile int8_t x299 = INT8_MIN;
uint64_t x300 = UINT64_MAX;
static volatile uint64_t t60 = 4957970139286LLU;
int16_t x301 = INT16_MIN;
int64_t x302 = -1LL;
volatile uint16_t x304 = 1U;
volatile uint64_t x322 = UINT64_MAX;
int16_t x325 = INT16_MIN;
int32_t x327 = INT32_MIN;
int64_t x331 = INT64_MAX;
static int16_t x333 = -14;
int64_t t66 = 102097011716563LL;
volatile int32_t x341 = -1;
volatile int16_t x345 = INT16_MAX;
volatile uint64_t x357 = UINT64_MAX;
volatile int16_t x366 = -1;
volatile int16_t x368 = INT16_MIN;
int8_t x380 = 27;
static volatile int64_t t75 = -153959030LL;
int16_t x405 = -1;
int32_t x407 = INT32_MIN;
volatile int32_t x408 = -12;
volatile int16_t x411 = INT16_MIN;
volatile int64_t x419 = -1LL;
static int16_t x421 = INT16_MAX;
static volatile int64_t x425 = -1LL;
static uint64_t x431 = 448LLU;
int64_t x434 = 133647329382LL;
int64_t t85 = 3LL;
int64_t x449 = -1LL;
int32_t x466 = -1;
uint16_t x468 = 22281U;
uint16_t x478 = UINT16_MAX;
volatile int64_t t90 = -1661LL;
uint64_t x485 = UINT64_MAX;
int8_t x486 = INT8_MAX;
int16_t x487 = INT16_MIN;
int16_t x491 = INT16_MAX;
uint8_t x503 = UINT8_MAX;
volatile uint32_t t96 = 13433724U;
int32_t x508 = 9008936;
uint8_t x510 = 55U;
int16_t x514 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 694794015500677LLU;
	int64_t x3 = INT64_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	uint64_t t0 = 8095749188091911LLU;

	t0 = ((x1*x2)-(x3&x4));

	if (t0 != 18357810439725464705LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -29;
	int8_t x7 = INT8_MIN;
	int64_t x8 = -2586833140761513364LL;
	int64_t t1 = 512627689LL;

	t1 = ((x5*x6)-(x7&x8));

	if (t1 != 2586833140759612957LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 193094505U;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = 8U;
	static uint32_t t2 = 259881713U;

	t2 = ((x9*x10)-(x11&x12));

	if (t2 != 2147483640U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 510267294;
	static volatile int64_t x15 = INT64_MAX;
	uint64_t t3 = 0LLU;

	t3 = ((x13*x14)-(x15&x16));

	if (t3 != 9223372036344508515LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 871105U;
	int32_t x19 = 22373;
	static int32_t x20 = INT32_MAX;
	volatile uint32_t t4 = 3260907U;

	t4 = ((x17*x18)-(x19&x20));

	if (t4 != 2773671386U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 382976570431492347LLU;
	int64_t x22 = -21LL;
	uint64_t x23 = 810LLU;
	volatile uint16_t x24 = 290U;

	t5 = ((x21*x22)-(x23&x24));

	if (t5 != 10404236094648212039LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 3609408379LLU;
	volatile uint64_t t6 = 44444746190830970LLU;

	t6 = ((x25*x26)-(x27&x28));

	if (t6 != 5583754762313LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MAX;
	int16_t x31 = -1;
	uint16_t x32 = 62U;
	volatile int32_t t7 = 1320478;

	t7 = ((x29*x30)-(x31&x32));

	if (t7 != -16318) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 1;
	uint64_t x42 = UINT64_MAX;
	volatile uint8_t x43 = 9U;
	int64_t x44 = -1LL;
	volatile uint64_t t8 = 5782LLU;

	t8 = ((x41*x42)-(x43&x44));

	if (t8 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 2U;
	volatile int64_t x48 = -32LL;
	uint64_t t9 = 510754649940LLU;

	t9 = ((x45*x46)-(x47&x48));

	if (t9 != 18446744073696432000LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 554382LLU;
	int64_t x50 = INT64_MAX;
	static int8_t x51 = INT8_MIN;
	uint8_t x52 = 1U;
	uint64_t t10 = 6925LLU;

	t10 = ((x49*x50)-(x51&x52));

	if (t10 != 18446744073708997234LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 1U;
	uint16_t x54 = 3728U;
	volatile int8_t x55 = INT8_MAX;
	volatile uint16_t x56 = 11U;

	t11 = ((x53*x54)-(x55&x56));

	if (t11 != 3717) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -489767864;
	int16_t x58 = -1;
	static uint8_t x59 = 54U;
	volatile int8_t x60 = INT8_MIN;

	t12 = ((x57*x58)-(x59&x60));

	if (t12 != 489767864) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 527107006LLU;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t13 = 53962980844734LLU;

	t13 = ((x61*x62)-(x63&x64));

	if (t13 != 18446744073182444673LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 34153987268934537LLU;
	uint16_t x66 = 51U;
	int64_t x67 = 1LL;
	int16_t x68 = -1;
	uint64_t t14 = 821837728678033955LLU;

	t14 = ((x65*x66)-(x67&x68));

	if (t14 != 1741853350715661386LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	uint64_t x71 = 35LLU;
	static uint64_t x72 = 32275LLU;
	uint64_t t15 = 2795487133833LLU;

	t15 = ((x69*x70)-(x71&x72));

	if (t15 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x77 = 249158931837454LLU;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t16 = 4834684915LLU;

	t16 = ((x77*x78)-(x79&x80));

	if (t16 != 403139151713000444LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	volatile int8_t x82 = -1;
	uint8_t x83 = 93U;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t17 = 1LLU;

	t17 = ((x81*x82)-(x83&x84));

	if (t17 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MAX;
	uint32_t x87 = 1231424U;
	int64_t x88 = INT64_MIN;
	volatile int64_t t18 = 24629694LL;

	t18 = ((x85*x86)-(x87&x88));

	if (t18 != 1073676289LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x90 = -1;
	static volatile uint32_t t19 = 30839629U;

	t19 = ((x89*x90)-(x91&x92));

	if (t19 != 1448188349U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 0;
	uint16_t x94 = UINT16_MAX;
	int64_t x95 = INT64_MIN;
	static uint8_t x96 = 4U;
	int64_t t20 = -26LL;

	t20 = ((x93*x94)-(x95&x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	int16_t x98 = INT16_MIN;
	int32_t t21 = -691;

	t21 = ((x97*x98)-(x99&x100));

	if (t21 != -8323072) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	int32_t x102 = 15;
	uint64_t x103 = UINT64_MAX;
	volatile int16_t x104 = -1;

	t22 = ((x101*x102)-(x103&x104));

	if (t22 != 491506LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 796142U;
	static uint64_t x106 = UINT64_MAX;
	volatile int64_t x107 = INT64_MIN;

	t23 = ((x105*x106)-(x107&x108));

	if (t23 != 18446744073708755474LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = -1;
	int32_t x118 = -1;
	int8_t x119 = -1;
	uint16_t x120 = 22U;
	volatile int32_t t24 = 1793;

	t24 = ((x117*x118)-(x119&x120));

	if (t24 != -21) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = 14;
	int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile uint32_t t25 = 2045556930U;

	t25 = ((x121*x122)-(x123&x124));

	if (t25 != 4294967282U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 6U;
	uint8_t x126 = 26U;
	static int32_t x128 = 31525098;
	static volatile int32_t t26 = 1118133;

	t26 = ((x125*x126)-(x127&x128));

	if (t26 != 156) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x133 = 85207417;
	static uint16_t x134 = 4U;
	uint8_t x135 = 57U;
	volatile int32_t t27 = -33469571;

	t27 = ((x133*x134)-(x135&x136));

	if (t27 != 340829611) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x138 = UINT64_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = 119603LL;
	volatile uint64_t t28 = 219269893LLU;

	t28 = ((x137*x138)-(x139&x140));

	if (t28 != 9223372036854656205LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = 173857408264619779LLU;
	int64_t x146 = -880672315509860107LL;
	int8_t x147 = INT8_MIN;
	int16_t x148 = -139;
	uint64_t t29 = 155223633955065LLU;

	t29 = ((x145*x146)-(x147&x148));

	if (t29 != 12287299252001390303LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 16U;
	int64_t x151 = INT64_MIN;
	uint64_t t30 = 49786612125785376LLU;

	t30 = ((x149*x150)-(x151&x152));

	if (t30 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = 0U;

	t31 = ((x153*x154)-(x155&x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 0U;
	int32_t x159 = INT32_MIN;
	volatile uint64_t t32 = 13LLU;

	t32 = ((x157*x158)-(x159&x160));

	if (t32 != 2147483648LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = 743U;
	volatile uint32_t t33 = 24337700U;

	t33 = ((x161*x162)-(x163&x164));

	if (t33 != 24345881U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x165 = 2680739U;
	int64_t x166 = 8907LL;
	static volatile uint32_t x167 = 1U;
	int8_t x168 = INT8_MAX;
	volatile int64_t t34 = 45713924290451LL;

	t34 = ((x165*x166)-(x167&x168));

	if (t34 != 23877342272LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 1016379365855LLU;
	int32_t x174 = 0;
	volatile int8_t x175 = -1;
	int8_t x176 = 3;

	t35 = ((x173*x174)-(x175&x176));

	if (t35 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x178 = 4942LLU;
	static int64_t x179 = -14934LL;
	volatile uint64_t t36 = 206170541988LLU;

	t36 = ((x177*x178)-(x179&x180));

	if (t36 != 125910LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x181 = UINT32_MAX;
	int8_t x182 = -56;
	uint16_t x183 = 36U;
	static uint32_t x184 = 21293402U;
	volatile uint32_t t37 = 3313U;

	t37 = ((x181*x182)-(x183&x184));

	if (t37 != 56U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x186 = UINT32_MAX;
	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t38 = 353LLU;

	t38 = ((x185*x186)-(x187&x188));

	if (t38 != 33256223822961188LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 3917U;
	int32_t x191 = -138;
	static int32_t x192 = -1;

	t39 = ((x189*x190)-(x191&x192));

	if (t39 != 497597U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = 605918LL;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = UINT16_MAX;
	int64_t t40 = 72695538838183692LL;

	t40 = ((x197*x198)-(x199&x200));

	if (t40 != -77590272LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x205 = 29242033852LLU;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = 3;
	static int64_t x208 = -1LL;
	static uint64_t t41 = 6307978LLU;

	t41 = ((x205*x206)-(x207&x208));

	if (t41 != 7456718632257LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x217 = 37257LLU;
	int8_t x218 = -2;
	int16_t x219 = INT16_MIN;
	volatile uint64_t t42 = 0LLU;

	t42 = ((x217*x218)-(x219&x220));

	if (t42 != 18446744073709509870LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile int8_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	uint32_t t43 = 13U;

	t43 = ((x221*x222)-(x223&x224));

	if (t43 != 133U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x225 = -143225206301269258LL;
	volatile uint8_t x226 = 1U;
	volatile int8_t x227 = INT8_MIN;
	int8_t x228 = -1;

	t44 = ((x225*x226)-(x227&x228));

	if (t44 != -143225206301269130LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x229 = UINT64_MAX;
	static int32_t x230 = INT32_MIN;
	static uint32_t x231 = 45623271U;
	int32_t x232 = -1;

	t45 = ((x229*x230)-(x231&x232));

	if (t45 != 2101860377LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = -1;
	int16_t x234 = -1;
	int32_t x235 = 0;
	int16_t x236 = 5;
	volatile int32_t t46 = -7387187;

	t46 = ((x233*x234)-(x235&x236));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = -21LL;
	int8_t x238 = -1;
	int8_t x239 = -3;
	volatile int64_t t47 = 32435164552910803LL;

	t47 = ((x237*x238)-(x239&x240));

	if (t47 != 2147483669LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = INT16_MAX;
	static int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	int16_t x244 = -15692;
	volatile int32_t t48 = -363683447;

	t48 = ((x241*x242)-(x243&x244));

	if (t48 != -4161408) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = -1;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t49 = 946187208768651124LLU;

	t49 = ((x245*x246)-(x247&x248));

	if (t49 != 18446744073701831991LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x250 = -135151479LL;
	int16_t x251 = 1552;
	int64_t x252 = -1LL;

	t50 = ((x249*x250)-(x251&x252));

	if (t50 != 135149927LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MAX;
	int8_t x256 = 7;
	volatile int32_t t51 = -245628;

	t51 = ((x253*x254)-(x255&x256));

	if (t51 != 1073741817) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = 200LLU;
	volatile int8_t x258 = INT8_MIN;
	static int64_t x259 = 48931637536LL;
	int64_t x260 = INT64_MAX;
	uint64_t t52 = 417LLU;

	t52 = ((x257*x258)-(x259&x260));

	if (t52 != 18446744024777888480LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x261 = UINT16_MAX;
	volatile int16_t x263 = 507;

	t53 = ((x261*x262)-(x263&x264));

	if (t53 != -65536LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x266 = 3703957LLU;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t54 = 508302153294913823LLU;

	t54 = ((x265*x266)-(x267&x268));

	if (t54 != 9223372038998555499LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x273 = 0U;
	uint32_t x276 = UINT32_MAX;
	static volatile uint64_t t55 = 217443205601198692LLU;

	t55 = ((x273*x274)-(x275&x276));

	if (t55 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x277 = UINT32_MAX;
	static int32_t x278 = 1;
	volatile int64_t t56 = 7001653678187707LL;

	t56 = ((x277*x278)-(x279&x280));

	if (t56 != 4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x281 = 17190930107LLU;
	static int16_t x282 = -1;
	static int16_t x283 = -1;
	uint16_t x284 = 19U;
	volatile uint64_t t57 = 122LLU;

	t57 = ((x281*x282)-(x283&x284));

	if (t57 != 18446744056518621490LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x285 = INT16_MAX;
	int16_t x286 = INT16_MIN;
	static uint64_t x287 = 33736005594LLU;
	int16_t x288 = -510;
	static volatile uint64_t t58 = 1124LLU;

	t58 = ((x285*x286)-(x287&x288));

	if (t58 != 18446744038899837438LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = -1;
	int32_t x290 = 232422608;
	int8_t x291 = INT8_MAX;
	int16_t x292 = -2;
	int32_t t59 = -8112237;

	t59 = ((x289*x290)-(x291&x292));

	if (t59 != -232422734) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x298 = 29;

	t60 = ((x297*x298)-(x299&x300));

	if (t60 != 271510LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x303 = UINT16_MAX;
	int64_t t61 = 5844651380615LL;

	t61 = ((x301*x302)-(x303&x304));

	if (t61 != 32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = 0;
	static uint8_t x307 = 85U;
	int16_t x308 = 1;
	int32_t t62 = 493182512;

	t62 = ((x305*x306)-(x307&x308));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x321 = 709U;
	static int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	volatile uint64_t t63 = 1917132184586291748LLU;

	t63 = ((x321*x322)-(x323&x324));

	if (t63 != 18446744073709550780LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x326 = 79U;
	uint16_t x328 = UINT16_MAX;
	int32_t t64 = 120184842;

	t64 = ((x325*x326)-(x327&x328));

	if (t64 != -2588672) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x329 = 6498U;
	int8_t x330 = INT8_MIN;
	int32_t x332 = 1886003;
	volatile int64_t t65 = -692929979515785LL;

	t65 = ((x329*x330)-(x331&x332));

	if (t65 != -2717747LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x334 = 19U;
	static int64_t x335 = 21546027032987LL;
	uint32_t x336 = 74304708U;

	t66 = ((x333*x334)-(x335&x336));

	if (t66 != -4817290LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x342 = INT16_MAX;
	static uint16_t x343 = 3339U;
	int64_t x344 = 383094834LL;
	int64_t t67 = -637812LL;

	t67 = ((x341*x342)-(x343&x344));

	if (t67 != -32769LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	static uint32_t x348 = UINT32_MAX;
	volatile int64_t t68 = 3856599LL;

	t68 = ((x345*x346)-(x347&x348));

	if (t68 != -32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x349 = 1370161U;
	int32_t x350 = -1;
	uint8_t x351 = 3U;
	volatile int8_t x352 = -12;
	volatile uint32_t t69 = 0U;

	t69 = ((x349*x350)-(x351&x352));

	if (t69 != 4293597135U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x353 = INT16_MIN;
	static uint8_t x354 = 11U;
	volatile uint16_t x355 = UINT16_MAX;
	static volatile int64_t x356 = -7181158218464880LL;
	int64_t t70 = 0LL;

	t70 = ((x353*x354)-(x355&x356));

	if (t70 != -360848LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x358 = 1621514671655930660LL;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MIN;
	uint64_t t71 = 533411913386LLU;

	t71 = ((x357*x358)-(x359&x360));

	if (t71 != 16825229399906137308LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x365 = UINT64_MAX;
	static volatile int64_t x367 = -1LL;
	volatile uint64_t t72 = 56LLU;

	t72 = ((x365*x366)-(x367&x368));

	if (t72 != 32769LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = -1;
	volatile int64_t x374 = -1LL;
	int16_t x375 = -1;
	int8_t x376 = 4;
	int64_t t73 = 64805341907931LL;

	t73 = ((x373*x374)-(x375&x376));

	if (t73 != -3LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x377 = -2635;
	volatile int16_t x378 = -58;
	volatile int64_t x379 = -49LL;
	volatile int64_t t74 = 4973087614918LL;

	t74 = ((x377*x378)-(x379&x380));

	if (t74 != 152819LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x381 = 102U;
	int32_t x382 = 16175689;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;

	t75 = ((x381*x382)-(x383&x384));

	if (t75 != 1649920406LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 113259460744LLU;
	int16_t x395 = -1;
	static uint64_t x396 = 6563LLU;
	volatile uint64_t t76 = 7213062LLU;

	t76 = ((x393*x394)-(x395&x396));

	if (t76 != 7422458759851477LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x397 = INT64_MAX;
	uint64_t x398 = 3LLU;
	int64_t x399 = -1LL;
	int16_t x400 = INT16_MIN;
	uint64_t t77 = 128228LLU;

	t77 = ((x397*x398)-(x399&x400));

	if (t77 != 9223372036854808573LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x401 = INT16_MIN;
	static uint32_t x402 = 778413068U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	uint32_t t78 = 672U;

	t78 = ((x401*x402)-(x403&x404));

	if (t78 != 771358720U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x406 = 1782941;
	volatile int32_t t79 = -7291085;

	t79 = ((x405*x406)-(x407&x408));

	if (t79 != 2145700707) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x409 = INT8_MAX;
	static volatile uint16_t x410 = 12963U;
	int32_t x412 = 1102;
	int32_t t80 = -50507;

	t80 = ((x409*x410)-(x411&x412));

	if (t80 != 1646301) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int8_t x418 = -1;
	uint64_t x420 = 2LLU;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x417*x418)-(x419&x420));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x422 = 0LLU;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	uint64_t t82 = 0LLU;

	t82 = ((x421*x422)-(x423&x424));

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x426 = -1;
	int64_t x427 = -1LL;
	uint8_t x428 = UINT8_MAX;
	int64_t t83 = 34301141370013444LL;

	t83 = ((x425*x426)-(x427&x428));

	if (t83 != -254LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x429 = 61U;
	uint64_t x430 = 4LLU;
	static int8_t x432 = -1;
	volatile uint64_t t84 = 840602977729688348LLU;

	t84 = ((x429*x430)-(x431&x432));

	if (t84 != 18446744073709551412LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x433 = INT16_MAX;
	int32_t x435 = 30986;
	uint16_t x436 = 1U;

	t85 = ((x433*x434)-(x435&x436));

	if (t85 != 4379222041859994LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x441 = 204568562LLU;
	int32_t x442 = -1;
	int32_t x443 = -1;
	int32_t x444 = INT32_MAX;
	uint64_t t86 = 3942813982071550112LLU;

	t86 = ((x441*x442)-(x443&x444));

	if (t86 != 18446744071357499407LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x450 = INT8_MAX;
	int32_t x451 = 23827011;
	uint8_t x452 = 8U;
	static int64_t t87 = -9136719483344833LL;

	t87 = ((x449*x450)-(x451&x452));

	if (t87 != -127LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x453 = 268339561194LLU;
	uint8_t x454 = 5U;
	uint64_t x455 = 101638592393834694LLU;
	int8_t x456 = INT8_MIN;
	uint64_t t88 = 6616704960417LLU;

	t88 = ((x453*x454)-(x455&x456));

	if (t88 != 18345106823013522962LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x465 = 264U;
	uint64_t x467 = 13407086309331LLU;
	uint64_t t89 = 13303458073LLU;

	t89 = ((x465*x466)-(x467&x468));

	if (t89 != 18446744073709533175LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x477 = INT8_MIN;
	int64_t x479 = INT64_MAX;
	volatile int64_t x480 = -75082723294LL;

	t90 = ((x477*x478)-(x479&x480));

	if (t90 != -9223371961780440994LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x481 = 113LL;
	volatile uint64_t x482 = 61449368064642510LLU;
	int16_t x483 = -1;
	int64_t x484 = INT64_MIN;
	static volatile uint64_t t91 = 329664211347951LLU;

	t91 = ((x481*x482)-(x483&x484));

	if (t91 != 16167150628159379438LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x488 = 698U;
	static volatile uint64_t t92 = 678951829744051688LLU;

	t92 = ((x485*x486)-(x487&x488));

	if (t92 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = INT16_MAX;
	uint32_t x490 = UINT32_MAX;
	int64_t x492 = INT64_MIN;
	volatile int64_t t93 = -39159345LL;

	t93 = ((x489*x490)-(x491&x492));

	if (t93 != 4294934529LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x493 = 5428U;
	volatile uint64_t x494 = 6850201923536LLU;
	int16_t x495 = INT16_MAX;
	static int32_t x496 = INT32_MAX;
	volatile uint64_t t94 = 867265482LLU;

	t94 = ((x493*x494)-(x495&x496));

	if (t94 != 37182896040920641LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = INT8_MIN;
	int32_t x498 = -13;
	volatile int64_t x499 = 3081496961483362LL;
	int8_t x500 = INT8_MAX;
	int64_t t95 = 248363LL;

	t95 = ((x497*x498)-(x499&x500));

	if (t95 != 1566LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x501 = 1U;
	uint32_t x502 = UINT32_MAX;
	int8_t x504 = 4;

	t96 = ((x501*x502)-(x503&x504));

	if (t96 != 4294967291U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = -1;
	volatile int32_t x506 = -29968;
	int8_t x507 = -19;
	volatile int32_t t97 = 513809;

	t97 = ((x505*x506)-(x507&x508));

	if (t97 != -8978968) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x509 = -1;
	volatile int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MIN;
	static int32_t t98 = -1176;

	t98 = ((x509*x510)-(x511&x512));

	if (t98 != 73) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x513 = UINT64_MAX;
	volatile int64_t x515 = INT64_MIN;
	int32_t x516 = INT32_MIN;
	uint64_t t99 = 87790956033LLU;

	t99 = ((x513*x514)-(x515&x516));

	if (t99 != 9223372036854775809LLU) { NG(); } else { ; }
	
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

