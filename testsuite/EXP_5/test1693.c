#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x20 = INT16_MIN;
int32_t x22 = INT32_MIN;
static int32_t t5 = 41;
static volatile int32_t x30 = INT32_MAX;
static int32_t x31 = INT32_MIN;
uint32_t x34 = 22818364U;
uint16_t x38 = 16U;
int64_t x45 = -1LL;
static volatile uint64_t x50 = 75562490909228588LLU;
uint16_t x63 = 2U;
int32_t x67 = -1;
uint64_t t18 = 21509LLU;
uint32_t t21 = 3U;
static uint8_t x93 = UINT8_MAX;
static int64_t x95 = INT64_MIN;
volatile int64_t t22 = -452LL;
int32_t x99 = -3096;
int64_t x108 = INT64_MAX;
int8_t x122 = INT8_MIN;
int32_t x124 = -1;
uint8_t x126 = 1U;
volatile int16_t x129 = INT16_MIN;
uint64_t x130 = 29515LLU;
static volatile uint32_t x132 = UINT32_MAX;
volatile int32_t x147 = INT32_MIN;
volatile int8_t x152 = INT8_MAX;
int16_t x156 = -13;
volatile int32_t x161 = 3953834;
uint32_t t34 = 128196410U;
uint16_t x181 = 123U;
int8_t x183 = INT8_MIN;
static uint64_t x193 = UINT64_MAX;
int8_t x195 = INT8_MIN;
volatile uint64_t t38 = 43415LLU;
int64_t x215 = INT64_MAX;
int32_t x223 = INT32_MAX;
volatile uint32_t t42 = 813303601U;
volatile int8_t x233 = -47;
volatile uint64_t t44 = 70381LLU;
uint64_t x242 = UINT64_MAX;
uint64_t t46 = 150072669LLU;
uint16_t x249 = 51U;
int8_t x278 = INT8_MIN;
volatile uint32_t t53 = 45U;
volatile uint64_t x283 = 830021325817LLU;
volatile uint16_t x291 = 1U;
static int8_t x295 = INT8_MAX;
volatile uint64_t x298 = UINT64_MAX;
int16_t x300 = INT16_MIN;
static volatile uint32_t t60 = 94U;
volatile uint8_t x317 = 20U;
static int16_t x328 = INT16_MAX;
static volatile uint8_t x339 = 20U;
volatile int16_t x341 = INT16_MAX;
uint16_t x343 = 27932U;
int8_t x344 = INT8_MIN;
int64_t x353 = 24LL;
int16_t x355 = -1;
static volatile int16_t x369 = 43;
int64_t x370 = 109LL;
static int32_t x372 = INT32_MIN;
uint64_t x404 = 61464446LLU;
static uint64_t x407 = 1097158298707901LLU;
volatile int16_t x408 = 26;
uint64_t t77 = 300050799LLU;
int8_t x410 = INT8_MIN;
int64_t x434 = -66931742951626LL;
static uint64_t x445 = 57773639106544LLU;
static int64_t x452 = INT64_MIN;
volatile uint8_t x453 = UINT8_MAX;
static int32_t x454 = -92357;
volatile int32_t t88 = -2;
static int8_t x463 = -1;
uint64_t x482 = 4993666LLU;
int32_t x487 = -1;
int8_t x497 = -1;
int8_t x498 = INT8_MAX;
static volatile int32_t t98 = -27812;
uint32_t x507 = 5U;
uint32_t x508 = 144489231U;


void f0(void) {
	uint32_t x1 = 433902U;
	int32_t x2 = -1;
	volatile int32_t x3 = -1;
	int8_t x4 = -1;
	uint32_t t0 = 6U;

	t0 = (x1*((x2&x3)+x4));

	if (t0 != 4294099492U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = INT32_MAX;
	static uint64_t x7 = UINT64_MAX;
	uint16_t x8 = 22U;
	uint64_t t1 = 462769725857875824LLU;

	t1 = (x5*((x6&x7)+x8));

	if (t1 != 18446744071562067947LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 2943894337222304LLU;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = 648762994631325LLU;

	t2 = (x9*((x10&x11)+x12));

	if (t2 != 15001350356523682272LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	uint32_t x15 = UINT32_MAX;
	uint8_t x16 = UINT8_MAX;
	volatile uint32_t t3 = 6U;

	t3 = (x13*((x14&x15)+x16));

	if (t3 != 4294918400U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 25191701882247504LL;
	int16_t x18 = -9300;
	uint64_t x19 = 5475090102980327LLU;
	volatile uint64_t t4 = 97227010619279LLU;

	t4 = (x17*((x18&x19)+x20));

	if (t4 != 13139671736804398912LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -29;
	static int32_t x23 = 0;
	volatile int32_t x24 = 0;

	t5 = (x21*((x22&x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 11389214221864LL;
	int64_t x26 = INT64_MIN;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 29947355LLU;

	t6 = (x25*((x26&x27)+x28));

	if (t6 != 18446732684495329752LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 7;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = 1252569766LL;

	t7 = (x29*((x30&x31)+x32));

	if (t7 != -7LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static volatile int32_t x35 = INT32_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 775508LLU;

	t8 = (x33*((x34&x35)+x36));

	if (t8 != 18446744073686733253LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	volatile int32_t x39 = 147508;
	uint32_t x40 = 55115U;
	volatile uint32_t t9 = 11231U;

	t9 = (x37*((x38&x39)+x40));

	if (t9 != 4294912165U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MIN;
	static int8_t x42 = 40;
	int16_t x43 = -7768;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = -578473;

	t10 = (x41*((x42&x43)+x44));

	if (t10 != 11264) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	static int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t11 = -442278055686416561LL;

	t11 = (x45*((x46&x47)+x48));

	if (t11 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	volatile uint32_t x51 = UINT32_MAX;
	int16_t x52 = -1;
	volatile uint64_t t12 = 1521LLU;

	t12 = (x49*((x50&x51)+x52));

	if (t12 != 14808258794429087744LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 0U;
	int64_t x54 = 292863445LL;
	static uint16_t x55 = 6789U;
	int32_t x56 = 15763;
	static int64_t t13 = -511693LL;

	t13 = (x53*((x54&x55)+x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 0;
	static volatile int64_t x58 = 32317676LL;
	volatile int16_t x59 = -19;
	int16_t x60 = -1;
	int64_t t14 = -1895681LL;

	t14 = (x57*((x58&x59)+x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = 0;
	uint8_t x62 = 4U;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -646080;

	t15 = (x61*((x62&x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	uint16_t x66 = 0U;
	uint64_t x68 = 52248891053628LLU;
	volatile uint64_t t16 = 725566796746260743LLU;

	t16 = (x65*((x66&x67)+x68));

	if (t16 != 10541655249237092804LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 1U;
	uint8_t x74 = 3U;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 12U;
	int64_t t17 = 1983757679LL;

	t17 = (x73*((x74&x75)+x76));

	if (t17 != 12LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static uint64_t x78 = UINT64_MAX;
	static volatile int16_t x79 = INT16_MIN;
	uint8_t x80 = 10U;

	t18 = (x77*((x78&x79)+x80));

	if (t18 != 70347269341184LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 13;
	static int32_t x82 = 192;
	uint8_t x83 = UINT8_MAX;
	static int64_t x84 = 56462478488LL;
	static volatile int64_t t19 = 1929LL;

	t19 = (x81*((x82&x83)+x84));

	if (t19 != 734012222840LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = INT64_MIN;
	uint8_t x86 = 6U;
	static volatile uint64_t x87 = 319645LLU;
	volatile int8_t x88 = INT8_MIN;
	uint64_t t20 = 1010235121229LLU;

	t20 = (x85*((x86&x87)+x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = -1;
	int32_t x90 = -1;
	static volatile uint32_t x91 = 4867551U;
	uint8_t x92 = UINT8_MAX;

	t21 = (x89*((x90&x91)+x92));

	if (t21 != 4290099490U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = 134U;
	static int16_t x96 = INT16_MAX;

	t22 = (x93*((x94&x95)+x96));

	if (t22 != 8355585LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 55U;
	int16_t x98 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	static uint32_t t23 = 2015798213U;

	t23 = (x97*((x98&x99)+x100));

	if (t23 != 4293165001U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	static volatile uint64_t x104 = 16488264LLU;
	volatile uint64_t t24 = 1450285346879LLU;

	t24 = (x101*((x102&x103)+x104));

	if (t24 != 18446673164677971968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	int16_t x106 = -1;
	static int8_t x107 = INT8_MIN;
	static int64_t t25 = -3120574LL;

	t25 = (x105*((x106&x107)+x108));

	if (t25 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 12768U;
	int8_t x123 = INT8_MIN;
	static int32_t t26 = 9;

	t26 = (x121*((x122&x123)+x124));

	if (t26 != -1647072) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 75823303854938477LLU;
	volatile int32_t x127 = -1;
	uint8_t x128 = 9U;
	volatile uint64_t t27 = 1959631215LLU;

	t27 = (x125*((x126&x127)+x128));

	if (t27 != 758233038549384770LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x131 = 345180596U;
	volatile uint64_t t28 = 43662625050LLU;

	t28 = (x129*((x130&x131)+x132));

	if (t28 != 18446603336212840448LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = -1LL;
	int8_t x138 = INT8_MAX;
	uint32_t x139 = 12U;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t29 = 567LLU;

	t29 = (x137*((x138&x139)+x140));

	if (t29 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x141 = 2845969LLU;
	static int16_t x142 = INT16_MIN;
	int32_t x143 = -1;
	static uint16_t x144 = 36U;
	volatile uint64_t t30 = 27184LLU;

	t30 = (x141*((x142&x143)+x144));

	if (t30 != 18446743980555294308LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 12LLU;
	int16_t x146 = -1;
	int32_t x148 = 1;
	static volatile uint64_t t31 = 213332534110LLU;

	t31 = (x145*((x146&x147)+x148));

	if (t31 != 18446744047939747852LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x149 = 297970923366268766LL;
	uint32_t x150 = 10981534U;
	uint64_t x151 = 21896001522334LLU;
	uint64_t t32 = 525819975803148LLU;

	t32 = (x149*((x150&x151)+x152));

	if (t32 != 12909304011512974246LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x153 = -490817726;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MAX;
	int64_t t33 = 1956000280068LL;

	t33 = (x153*((x154&x155)+x156));

	if (t33 != 6380630438LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 31461U;

	t34 = (x161*((x162&x163)+x164));

	if (t34 != 845747560U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	static int32_t x166 = -681255698;
	int64_t x167 = -4027263LL;
	int8_t x168 = -1;
	volatile int64_t t35 = 88LL;

	t35 = (x165*((x166&x167)+x168));

	if (t35 != 87505354880LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = -1LL;
	int16_t x178 = -1;
	volatile int64_t x179 = 187534973804193431LL;
	static volatile int16_t x180 = INT16_MIN;
	volatile int64_t t36 = -262906853016683LL;

	t36 = (x177*((x178&x179)+x180));

	if (t36 != -187534973804160663LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x182 = 1698884306U;
	int16_t x184 = INT16_MIN;
	volatile uint32_t t37 = 157U;

	t37 = (x181*((x182&x183)+x184));

	if (t37 != 2800298880U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x194 = -1;
	static int8_t x196 = -2;

	t38 = (x193*((x194&x195)+x196));

	if (t38 != 130LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = INT32_MIN;
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = 3664LLU;
	static volatile uint64_t t39 = 6085269418288LLU;

	t39 = (x209*((x210&x211)+x212));

	if (t39 != 18446665836585287680LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x213 = 1256219794U;
	uint64_t x214 = 7803168338338790LLU;
	int16_t x216 = INT16_MIN;
	uint64_t t40 = 1334586959405475944LLU;

	t40 = (x213*((x214&x215)+x216));

	if (t40 != 5402189299794366764LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x217 = 1U;
	int16_t x218 = INT16_MAX;
	volatile int32_t x219 = INT32_MIN;
	volatile uint64_t x220 = UINT64_MAX;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (x217*((x218&x219)+x220));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x221 = 9375715U;
	volatile uint32_t x222 = UINT32_MAX;
	static int32_t x224 = INT32_MIN;

	t42 = (x221*((x222&x223)+x224));

	if (t42 != 4285591581U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = 7025;
	int32_t x230 = INT32_MAX;
	uint32_t x231 = 7U;
	int32_t x232 = -1732;
	uint32_t t43 = 41497017U;

	t43 = (x229*((x230&x231)+x232));

	if (t43 != 4282849171U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x234 = 26521171132742497LLU;
	volatile int64_t x235 = -1LL;
	uint16_t x236 = 118U;

	t44 = (x233*((x234&x235)+x236));

	if (t44 != 17200249030470648711LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = 9687197;
	int16_t x243 = INT16_MIN;
	uint8_t x244 = UINT8_MAX;
	static volatile uint64_t t45 = 241831527934492LLU;

	t45 = (x241*((x242&x243)+x244));

	if (t45 != 18446743758749715555LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = 2036014456360419LL;
	volatile uint32_t x247 = 45U;
	uint64_t x248 = 8343698639216LLU;

	t46 = (x245*((x246&x247)+x248));

	if (t46 != 273397973312271983LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x250 = INT32_MAX;
	uint32_t x251 = 55099275U;
	volatile int8_t x252 = INT8_MIN;
	uint32_t t47 = 118221U;

	t47 = (x249*((x250&x251)+x252));

	if (t47 != 2810056497U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = 1;
	int16_t x255 = -1306;
	volatile uint16_t x256 = 7100U;
	volatile int32_t t48 = -1743286;

	t48 = (x253*((x254&x255)+x256));

	if (t48 != -908800) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = 6;
	int16_t x258 = -1;
	int16_t x259 = INT16_MAX;
	int64_t x260 = 55092109LL;
	int64_t t49 = -63131LL;

	t49 = (x257*((x258&x259)+x260));

	if (t49 != 330749256LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 951768471443925LLU;
	volatile uint32_t x267 = 2933905U;
	int8_t x268 = -1;
	uint64_t t50 = 0LLU;

	t50 = (x265*((x266&x267)+x268));

	if (t50 != 154625900400LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = -2;
	uint8_t x272 = 3U;
	static int64_t t51 = -3373LL;

	t51 = (x269*((x270&x271)+x272));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x273 = 114U;
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	static uint8_t x276 = 36U;
	volatile int32_t t52 = 16;

	t52 = (x273*((x274&x275)+x276));

	if (t52 != 33174) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x277 = 208605423U;
	int8_t x279 = INT8_MIN;
	volatile int8_t x280 = -1;

	t53 = (x277*((x278&x279)+x280));

	if (t53 != 3154671505U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x281 = -1;
	int64_t x282 = 2582523417820256LL;
	static volatile int16_t x284 = INT16_MAX;
	volatile uint64_t t54 = 360475589370LLU;

	t54 = (x281*((x282&x283)+x284));

	if (t54 != 18446743249073680289LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x289 = 21;
	int8_t x290 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t55 = -250605;

	t55 = (x289*((x290&x291)+x292));

	if (t55 != -2688) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x293 = 4024163LLU;
	int8_t x294 = 2;
	volatile int64_t x296 = -2344155150506LL;
	volatile uint64_t t56 = 1014LLU;

	t56 = (x293*((x294&x295)+x296));

	if (t56 != 9013481650791923464LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x299 = 8U;
	static uint64_t t57 = 555555LLU;

	t57 = (x297*((x298&x299)+x300));

	if (t57 != 70351564308480LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = -7049871;
	uint32_t x303 = 97105U;
	volatile int64_t x304 = -1LL;
	int64_t t58 = 600642122049793LL;

	t58 = (x301*((x302&x303)+x304));

	if (t58 != 57896159123120LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x305 = 83U;
	int32_t x306 = INT32_MIN;
	uint32_t x307 = 0U;
	static int32_t x308 = -1;
	uint32_t t59 = 450646U;

	t59 = (x305*((x306&x307)+x308));

	if (t59 != 4294967213U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 52860219U;
	int16_t x312 = -1;

	t60 = (x309*((x310&x311)+x312));

	if (t60 != 1020854273U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x314 = 1308950960317772LLU;
	int64_t x315 = INT64_MIN;
	int64_t x316 = 8344204092471275LL;
	volatile uint64_t t61 = 1LLU;

	t61 = (x313*((x314&x315)+x316));

	if (t61 != 1059713919743851925LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x318 = 626089126LLU;
	uint8_t x319 = UINT8_MAX;
	volatile uint16_t x320 = 12U;
	uint64_t t62 = 37487103826765LLU;

	t62 = (x317*((x318&x319)+x320));

	if (t62 != 3560LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = 1U;
	int8_t x326 = INT8_MIN;
	uint32_t x327 = 519U;
	volatile uint32_t t63 = 1457110021U;

	t63 = (x325*((x326&x327)+x328));

	if (t63 != 33279U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x329 = INT8_MIN;
	static int16_t x330 = -4;
	int32_t x331 = -1;
	int32_t x332 = -1;
	int32_t t64 = -51592395;

	t64 = (x329*((x330&x331)+x332));

	if (t64 != 640) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x333 = -340;
	volatile uint32_t x334 = 146U;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = UINT8_MAX;
	static uint32_t t65 = 944970U;

	t65 = (x333*((x334&x335)+x336));

	if (t65 != 4294830956U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x337 = INT16_MIN;
	static int16_t x338 = INT16_MIN;
	int16_t x340 = -2;
	volatile int32_t t66 = -30601841;

	t66 = (x337*((x338&x339)+x340));

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x342 = 8U;
	int32_t t67 = 28;

	t67 = (x341*((x342&x343)+x344));

	if (t67 != -3932040) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x345 = -4;
	int32_t x346 = 5364782;
	static int16_t x347 = 1;
	int16_t x348 = -5620;
	volatile int32_t t68 = 2535295;

	t68 = (x345*((x346&x347)+x348));

	if (t68 != 22480) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x354 = 7;
	uint16_t x356 = UINT16_MAX;
	int64_t t69 = -5LL;

	t69 = (x353*((x354&x355)+x356));

	if (t69 != 1573008LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x357 = 1;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = 1LL;
	volatile uint8_t x360 = 9U;
	uint64_t t70 = 1275452783048016LLU;

	t70 = (x357*((x358&x359)+x360));

	if (t70 != 10LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = INT8_MIN;
	uint32_t x363 = UINT32_MAX;
	volatile int8_t x364 = INT8_MIN;
	uint32_t t71 = 0U;

	t71 = (x361*((x362&x363)+x364));

	if (t71 != 32768U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x371 = INT32_MAX;
	volatile int64_t t72 = 69963751697LL;

	t72 = (x369*((x370&x371)+x372));

	if (t72 != -92341792177LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x373 = -1LL;
	volatile int32_t x374 = 103767589;
	int8_t x375 = INT8_MAX;
	uint32_t x376 = 72600853U;
	volatile int64_t t73 = 1277658301LL;

	t73 = (x373*((x374&x375)+x376));

	if (t73 != -72600890LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x377 = -1;
	uint64_t x378 = 9566897720087LLU;
	volatile uint32_t x379 = 30U;
	static int16_t x380 = -1;
	volatile uint64_t t74 = 43626LLU;

	t74 = (x377*((x378&x379)+x380));

	if (t74 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x381 = 56U;
	static volatile int32_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	volatile int32_t x384 = INT32_MAX;
	volatile uint32_t t75 = 38789177U;

	t75 = (x381*((x382&x383)+x384));

	if (t75 != 4294967184U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = -1;
	static int8_t x402 = INT8_MIN;
	volatile int64_t x403 = -194211428LL;
	uint64_t t76 = 58295289400254LLU;

	t76 = (x401*((x402&x403)+x404));

	if (t76 != 132747010LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = INT16_MAX;
	static uint16_t x406 = UINT16_MAX;

	t77 = (x405*((x406&x407)+x408));

	if (t77 != 334190633LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x409 = 87;
	uint64_t x411 = 1876LLU;
	volatile int16_t x412 = INT16_MAX;
	uint64_t t78 = 28802231720533227LLU;

	t78 = (x409*((x410&x411)+x412));

	if (t78 != 3006633LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x413 = -3605817;
	uint16_t x414 = 263U;
	int32_t x415 = -1;
	int32_t x416 = 10;
	int32_t t79 = 3491573;

	t79 = (x413*((x414&x415)+x416));

	if (t79 != -984388041) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = -398;
	volatile uint8_t x418 = 1U;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = 797U;
	volatile int32_t t80 = -3844647;

	t80 = (x417*((x418&x419)+x420));

	if (t80 != -317206) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x425 = 12U;
	static volatile int32_t x426 = INT32_MAX;
	int64_t x427 = INT64_MIN;
	uint64_t x428 = 237562LLU;
	volatile uint64_t t81 = 274042231630LLU;

	t81 = (x425*((x426&x427)+x428));

	if (t81 != 2850744LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = -1;
	uint64_t x430 = 1LLU;
	static int16_t x431 = 985;
	static int8_t x432 = 2;
	uint64_t t82 = 29941618744LLU;

	t82 = (x429*((x430&x431)+x432));

	if (t82 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x433 = -1;
	static int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	int64_t t83 = 18387LL;

	t83 = (x433*((x434&x435)+x436));

	if (t83 != 66931742998528LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x437 = 124U;
	int16_t x438 = 0;
	int64_t x439 = INT64_MIN;
	volatile uint16_t x440 = UINT16_MAX;
	static volatile int64_t t84 = 255505966214LL;

	t84 = (x437*((x438&x439)+x440));

	if (t84 != 8126340LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x441 = UINT32_MAX;
	int32_t x442 = -939;
	static int16_t x443 = 22;
	uint8_t x444 = 2U;
	volatile uint32_t t85 = 1U;

	t85 = (x441*((x442&x443)+x444));

	if (t85 != 4294967274U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x446 = -121579005;
	int8_t x447 = 0;
	int8_t x448 = -16;
	volatile uint64_t t86 = 526256394648264770LLU;

	t86 = (x445*((x446&x447)+x448));

	if (t86 != 18445819695483846912LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x449 = UINT64_MAX;
	int8_t x450 = INT8_MAX;
	static volatile int64_t x451 = -131404077134378907LL;
	uint64_t t87 = 881LLU;

	t87 = (x449*((x450&x451)+x452));

	if (t87 != 9223372036854775707LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x455 = 3;
	int8_t x456 = INT8_MIN;

	t88 = (x453*((x454&x455)+x456));

	if (t88 != -31875) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = -1;
	static uint16_t x458 = 2U;
	int16_t x459 = INT16_MAX;
	int64_t x460 = -3596719624258773LL;
	static volatile int64_t t89 = 2895331412144LL;

	t89 = (x457*((x458&x459)+x460));

	if (t89 != 3596719624258771LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x461 = UINT64_MAX;
	static int32_t x462 = INT32_MIN;
	uint16_t x464 = UINT16_MAX;
	static uint64_t t90 = 359LLU;

	t90 = (x461*((x462&x463)+x464));

	if (t90 != 2147418113LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x465 = 106U;
	int16_t x466 = INT16_MIN;
	int32_t x467 = -1;
	int8_t x468 = -1;
	volatile int32_t t91 = -142846;

	t91 = (x465*((x466&x467)+x468));

	if (t91 != -3473514) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x469 = INT32_MAX;
	int8_t x470 = -1;
	static uint32_t x471 = 4317U;
	int16_t x472 = INT16_MAX;
	static uint32_t t92 = 217U;

	t92 = (x469*((x470&x471)+x472));

	if (t92 != 4294930212U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = -1;
	int8_t x478 = 1;
	int16_t x479 = 777;
	volatile int16_t x480 = 9834;
	volatile int32_t t93 = 18;

	t93 = (x477*((x478&x479)+x480));

	if (t93 != -9835) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x481 = -1;
	static int8_t x483 = -8;
	uint8_t x484 = UINT8_MAX;
	volatile uint64_t t94 = 10077744965LLU;

	t94 = (x481*((x482&x483)+x484));

	if (t94 != 18446744073704557697LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x485 = -1;
	int8_t x486 = INT8_MIN;
	int16_t x488 = -8;
	volatile int32_t t95 = 101338;

	t95 = (x485*((x486&x487)+x488));

	if (t95 != 136) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x493 = INT16_MIN;
	volatile uint32_t x494 = 1584279U;
	int16_t x495 = INT16_MIN;
	int32_t x496 = -1;
	static volatile uint32_t t96 = 96091879U;

	t96 = (x493*((x494&x495)+x496));

	if (t96 != 32768U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x499 = INT16_MIN;
	volatile uint16_t x500 = 132U;
	static int32_t t97 = -352992064;

	t97 = (x497*((x498&x499)+x500));

	if (t97 != -132) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x501 = 0;
	volatile int16_t x502 = INT16_MIN;
	int32_t x503 = -4712040;
	static int32_t x504 = 68;

	t98 = (x501*((x502&x503)+x504));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x505 = 3U;
	static volatile int8_t x506 = -1;
	volatile uint32_t t99 = 220738U;

	t99 = (x505*((x506&x507)+x508));

	if (t99 != 433467708U) { NG(); } else { ; }
	
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

