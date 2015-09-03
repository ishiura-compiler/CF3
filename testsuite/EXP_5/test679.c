#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = 18;
volatile uint32_t t0 = 734250U;
int32_t x5 = -3342301;
int8_t x6 = INT8_MIN;
static volatile int16_t x18 = INT16_MAX;
static volatile int16_t x21 = 101;
uint32_t x23 = UINT32_MAX;
int64_t x28 = 23193901LL;
uint64_t x30 = UINT64_MAX;
static uint64_t t7 = 8224650857378225LLU;
int32_t x42 = 0;
static int8_t x53 = 5;
volatile int64_t t13 = 133332LL;
uint8_t x64 = UINT8_MAX;
int8_t x69 = -15;
static int8_t x75 = -1;
volatile int8_t x76 = -1;
int64_t x81 = -1LL;
int64_t t18 = 193LL;
uint32_t x93 = 398U;
int64_t x94 = INT64_MAX;
int8_t x97 = -16;
int8_t x100 = INT8_MIN;
static volatile int32_t x109 = -1;
volatile uint32_t x111 = 7U;
volatile uint16_t x112 = 193U;
volatile uint32_t t22 = 58942U;
static uint64_t x115 = 3868324957987206055LLU;
int64_t x117 = 7274511LL;
volatile uint64_t x119 = UINT64_MAX;
int32_t x135 = -1;
volatile uint16_t x136 = 0U;
int64_t t27 = -2252212913026612078LL;
uint16_t x156 = UINT16_MAX;
static volatile uint64_t x157 = 41124047952702LLU;
static int16_t x165 = 2440;
static int64_t x166 = INT64_MIN;
static volatile uint64_t t35 = 92163LLU;
int64_t x181 = -6LL;
int16_t x183 = 1797;
int64_t t37 = -34931279576LL;
int32_t x188 = -26849638;
static uint64_t t38 = 221686099643792LLU;
int8_t x192 = -1;
int32_t x199 = -60759;
int8_t x200 = INT8_MIN;
volatile int32_t x207 = -1;
static uint64_t x211 = 13865LLU;
int64_t x212 = -1LL;
uint16_t x213 = 41U;
static uint64_t x220 = UINT64_MAX;
static uint64_t t44 = 23849969777LLU;
static uint8_t x244 = 5U;
volatile int16_t x252 = 10124;
static int64_t t50 = -4418LL;
static int32_t t51 = 5584;
int16_t x265 = INT16_MIN;
uint8_t x266 = 1U;
volatile uint16_t x267 = UINT16_MAX;
volatile uint32_t t54 = 648200111U;
volatile uint16_t x269 = UINT16_MAX;
uint8_t x273 = 3U;
int16_t x274 = INT16_MIN;
volatile int8_t x286 = INT8_MIN;
int32_t x294 = -3822;
volatile int64_t x297 = -21185494624LL;
volatile int64_t t60 = 1713218444LL;
uint32_t x305 = 2U;
volatile uint64_t t61 = 34772760LLU;
uint64_t x311 = 5147638140LLU;
uint64_t t64 = 288697800136LLU;
uint16_t x321 = 8211U;
uint16_t x326 = UINT16_MAX;
volatile int16_t x328 = INT16_MIN;
volatile int64_t x339 = -1LL;
static volatile uint8_t x342 = 8U;
static int32_t x347 = INT32_MAX;
static uint64_t t72 = 2702579969509741LLU;
int64_t x358 = INT64_MAX;
volatile int64_t t73 = -23296LL;
int16_t x367 = INT16_MAX;
int8_t x371 = 1;
volatile int8_t x382 = -1;
uint64_t x384 = 448538999378926LLU;
int32_t x389 = INT32_MAX;
int8_t x391 = -1;
static int16_t x392 = 44;
int32_t x395 = INT32_MIN;
volatile int32_t x421 = INT32_MAX;
int8_t x444 = 36;
int8_t x461 = INT8_MIN;
static int32_t t93 = -140;
int64_t x465 = -1LL;
int64_t x469 = -1LL;
int64_t x470 = 438LL;
volatile int64_t x472 = 127522LL;
volatile int32_t x475 = 202651508;
volatile uint64_t t96 = 1651744116682702LLU;


void f0(void) {
	int32_t x2 = -15765787;
	int8_t x3 = -29;
	uint32_t x4 = 2182119U;

	t0 = (x1*((x2%x3)+x4));

	if (t0 != 39277710U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x7 = 30U;
	volatile uint8_t x8 = UINT8_MAX;
	uint32_t t1 = 24373U;

	t1 = (x5*((x6%x7)+x8));

	if (t1 != 3415942133U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = 0;
	int16_t x11 = 237;
	volatile uint8_t x12 = 109U;
	volatile uint32_t t2 = 803U;

	t2 = (x9*((x10%x11)+x12));

	if (t2 != 4294967187U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1721;
	volatile uint32_t x14 = 85517461U;
	uint8_t x15 = UINT8_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 864U;

	t3 = (x13*((x14%x15)+x16));

	if (t3 != 258150U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x19 = 57U;
	volatile int8_t x20 = 4;
	int32_t t4 = -37435;

	t4 = (x17*((x18%x19)+x20));

	if (t4 != -1736704) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	static uint32_t t5 = 2402187U;

	t5 = (x21*((x22%x23)+x24));

	if (t5 != 2144173979U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 101U;
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = -241LL;
	int64_t t6 = 223135003LL;

	t6 = (x25*((x26%x27)+x28));

	if (t6 != 2342585415LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 48552375U;
	volatile uint64_t x31 = UINT64_MAX;
	int64_t x32 = 70199703747166814LL;

	t7 = (x29*((x30%x31)+x32));

	if (t7 != 12778954255617449778LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	static int8_t x34 = -2;
	uint64_t x35 = 14423397178LLU;
	int16_t x36 = INT16_MIN;
	static volatile uint64_t t8 = 9523LLU;

	t8 = (x33*((x34%x35)+x36));

	if (t8 != 1148197767100LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 746577640U;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 0U;
	volatile uint32_t t9 = 151U;

	t9 = (x37*((x38%x39)+x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 39109991664179LL;
	int32_t x43 = INT32_MIN;
	int8_t x44 = -1;
	volatile int64_t t10 = -528906LL;

	t10 = (x41*((x42%x43)+x44));

	if (t10 != -39109991664179LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x51 = -66285792;
	int8_t x52 = 0;
	int32_t t11 = 2779;

	t11 = (x49*((x50%x51)+x52));

	if (t11 != 2147385345) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x54 = UINT8_MAX;
	uint8_t x55 = UINT8_MAX;
	volatile uint32_t x56 = 14648975U;
	uint32_t t12 = 3568038U;

	t12 = (x53*((x54%x55)+x56));

	if (t12 != 73244875U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 2;
	volatile int8_t x58 = INT8_MIN;
	static int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MIN;

	t13 = (x57*((x58%x59)+x60));

	if (t13 != -512LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 3U;
	static int8_t x62 = 3;
	static volatile uint64_t x63 = UINT64_MAX;
	uint64_t t14 = 8402150168157430689LLU;

	t14 = (x61*((x62%x63)+x64));

	if (t14 != 774LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 0U;
	volatile int32_t x66 = INT32_MIN;
	static uint64_t x67 = 1239LLU;
	int64_t x68 = -7047674LL;
	volatile uint64_t t15 = 1057829549104864723LLU;

	t15 = (x65*((x66%x67)+x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	int32_t x71 = INT32_MIN;
	static uint8_t x72 = 15U;
	int32_t t16 = -465493106;

	t16 = (x69*((x70%x71)+x72));

	if (t16 != -210) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -20;
	int16_t x74 = INT16_MAX;
	int32_t t17 = -4544758;

	t17 = (x73*((x74%x75)+x76));

	if (t17 != 20) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x82 = 16030LL;
	int32_t x83 = INT32_MIN;
	static int32_t x84 = INT32_MAX;

	t18 = (x81*((x82%x83)+x84));

	if (t18 != -2147499677LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x89 = 2170438505468164684LLU;
	static volatile uint64_t x90 = 92711000594LLU;
	int32_t x91 = -30151;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t19 = 236LLU;

	t19 = (x89*((x90%x91)+x92));

	if (t19 != 270571957706544908LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x95 = 7U;
	int64_t x96 = -1LL;
	int64_t t20 = 2625368083LL;

	t20 = (x93*((x94%x95)+x96));

	if (t20 != -398LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x98 = INT8_MAX;
	volatile int64_t x99 = -1LL;
	static volatile int64_t t21 = -64013380LL;

	t21 = (x97*((x98%x99)+x100));

	if (t21 != 2048LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x110 = 3001400U;

	t22 = (x109*((x110%x111)+x112));

	if (t22 != 4294967100U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MAX;
	int32_t x114 = -1;
	static int64_t x116 = INT64_MAX;
	static volatile uint64_t t23 = 0LLU;

	t23 = (x113*((x114%x115)+x116));

	if (t23 != 17915909266276122526LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x118 = UINT32_MAX;
	uint32_t x120 = 115992851U;
	static volatile uint64_t t24 = 8497LLU;

	t24 = (x117*((x118%x119)+x120));

	if (t24 != 32087578102638606LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = 101265;
	int64_t x122 = 27LL;
	uint8_t x123 = UINT8_MAX;
	uint64_t x124 = 13750LLU;
	uint64_t t25 = 11964177008LLU;

	t25 = (x121*((x122%x123)+x124));

	if (t25 != 1395127905LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = 29;
	uint64_t x130 = 431268252420278218LLU;
	int8_t x131 = INT8_MAX;
	volatile int32_t x132 = -1;
	volatile uint64_t t26 = 626867609536005LLU;

	t26 = (x129*((x130%x131)+x132));

	if (t26 != 174LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = 28LL;
	int16_t x134 = INT16_MIN;

	t27 = (x133*((x134%x135)+x136));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = 360161LLU;
	uint16_t x139 = UINT16_MAX;
	volatile int8_t x140 = 4;
	uint64_t t28 = 1960360LLU;

	t28 = (x137*((x138%x139)+x140));

	if (t28 != 1064599830LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = 8038928071409LL;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = UINT32_MAX;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t29 = 242474399846838LLU;

	t29 = (x141*((x142%x143)+x144));

	if (t29 != 13073962665715354767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = 128247321U;
	uint32_t x146 = 18869U;
	int16_t x147 = 15680;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t30 = 20U;

	t30 = (x145*((x146%x147)+x148));

	if (t30 != 830566228U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	int64_t x150 = -344167LL;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MAX;
	int64_t t31 = 1113256235LL;

	t31 = (x149*((x150%x151)+x152));

	if (t31 != -2147139480LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = -3;
	volatile int16_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int32_t t32 = -85;

	t32 = (x153*((x154%x155)+x156));

	if (t32 != -196602) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x158 = INT16_MAX;
	volatile int8_t x159 = 3;
	int16_t x160 = INT16_MIN;
	uint64_t t33 = 54295108LLU;

	t33 = (x157*((x158%x159)+x160));

	if (t33 != 17099232394443365182LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x167 = 24511640U;
	int32_t x168 = INT32_MAX;
	volatile int64_t t34 = -371LL;

	t34 = (x165*((x166%x167)+x168));

	if (t34 != 5211253226360LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = INT64_MIN;
	uint64_t x170 = 104051928465349598LLU;
	static volatile int8_t x171 = 6;
	uint32_t x172 = 1304880U;

	t35 = (x169*((x170%x171)+x172));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = UINT8_MAX;
	uint8_t x174 = 8U;
	uint16_t x175 = 325U;
	int32_t x176 = -1;
	int32_t t36 = -163;

	t36 = (x173*((x174%x175)+x176));

	if (t36 != 1785) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x182 = UINT32_MAX;
	uint16_t x184 = UINT16_MAX;

	t37 = (x181*((x182%x183)+x184));

	if (t37 != -397548LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = -31296;
	static uint64_t x186 = 431LLU;
	int64_t x187 = INT64_MAX;

	t38 = (x185*((x186%x187)+x188));

	if (t38 != 840272782272LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = -1;
	int32_t x190 = -1;
	int16_t x191 = INT16_MAX;
	int32_t t39 = 1861;

	t39 = (x189*((x190%x191)+x192));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x197 = INT16_MAX;
	uint64_t x198 = 1LLU;
	uint64_t t40 = 21343515618259049LLU;

	t40 = (x197*((x198%x199)+x200));

	if (t40 != 18446744073705390207LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x205 = INT8_MAX;
	volatile int32_t x206 = 16167;
	static int32_t x208 = 25531;
	static volatile int32_t t41 = 56;

	t41 = (x205*((x206%x207)+x208));

	if (t41 != 3242437) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x209 = 66331863041LLU;
	int64_t x210 = 66644155373305554LL;
	uint64_t t42 = 196275267LLU;

	t42 = (x209*((x210%x211)+x212));

	if (t42 != 724542939996843LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x214 = INT64_MAX;
	uint64_t x215 = 1977616955LLU;
	int16_t x216 = INT16_MAX;
	volatile uint64_t t43 = 402919321213881021LLU;

	t43 = (x213*((x214%x215)+x216));

	if (t43 != 24411838044LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x217 = 27U;
	uint32_t x218 = UINT32_MAX;
	static int64_t x219 = -1LL;

	t44 = (x217*((x218%x219)+x220));

	if (t44 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 38U;
	uint8_t x222 = 3U;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MAX;
	volatile int32_t t45 = 378170;

	t45 = (x221*((x222%x223)+x224));

	if (t45 != 1245260) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MAX;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MAX;
	volatile int64_t t46 = 2619438014560636423LL;

	t46 = (x225*((x226%x227)+x228));

	if (t46 != 4177538LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x237 = 399U;
	uint8_t x238 = 59U;
	int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	int64_t t47 = -78383180381LL;

	t47 = (x237*((x238%x239)+x240));

	if (t47 != -856845952011LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x241 = -3;
	static int32_t x242 = INT32_MAX;
	volatile uint16_t x243 = 32U;
	int32_t t48 = 1897672;

	t48 = (x241*((x242%x243)+x244));

	if (t48 != -108) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = -1;
	volatile int32_t x247 = INT32_MAX;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t49 = 0;

	t49 = (x245*((x246%x247)+x248));

	if (t49 != -8388352) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x249 = -1LL;
	uint16_t x250 = 17U;
	int16_t x251 = INT16_MIN;

	t50 = (x249*((x250%x251)+x252));

	if (t50 != -10141LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MIN;
	static int32_t x254 = 27;
	int32_t x255 = INT32_MIN;
	static int16_t x256 = -1;

	t51 = (x253*((x254%x255)+x256));

	if (t51 != -851968) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = 603497778LLU;
	int16_t x258 = INT16_MAX;
	int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MIN;
	uint64_t t52 = 1607424732990LLU;

	t52 = (x257*((x258%x259)+x260));

	if (t52 != 19774811691726LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = -1;
	static int64_t x263 = INT64_MIN;
	static int16_t x264 = INT16_MIN;
	static volatile int64_t t53 = -1869686360336LL;

	t53 = (x261*((x262%x263)+x264));

	if (t53 != 70370891661312LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x268 = 103046U;

	t54 = (x265*((x266%x267)+x268));

	if (t54 != 918323200U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x270 = INT32_MIN;
	int64_t x271 = -1LL;
	volatile int8_t x272 = 11;
	int64_t t55 = -611038155LL;

	t55 = (x269*((x270%x271)+x272));

	if (t55 != 720885LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x275 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;
	volatile int64_t t56 = -2621257048093LL;

	t56 = (x273*((x274%x275)+x276));

	if (t56 != -97539LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x285 = 338624502U;
	int32_t x287 = -1;
	int32_t x288 = 413;
	volatile uint32_t t57 = 158667370U;

	t57 = (x285*((x286%x287)+x288));

	if (t57 != 2412965854U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MAX;
	static int64_t x290 = INT64_MIN;
	static int32_t x291 = INT32_MIN;
	uint64_t x292 = 12743329920LLU;
	volatile uint64_t t58 = 8LLU;

	t58 = (x289*((x290%x291)+x292));

	if (t58 != 1618402899840LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x293 = 12144899172LL;
	uint64_t x295 = 14082232685695796LLU;
	int32_t x296 = -45922399;
	static uint64_t t59 = 1039639264756229492LLU;

	t59 = (x293*((x294%x295)+x296));

	if (t59 != 5452542232169863388LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x298 = -1;
	int32_t x299 = 417;
	int16_t x300 = INT16_MIN;

	t60 = (x297*((x298%x299)+x300));

	if (t60 != 694227473333856LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x306 = 0U;
	int32_t x307 = 18976;
	volatile uint64_t x308 = 1368187220852887LLU;

	t61 = (x305*((x306%x307)+x308));

	if (t61 != 2736374441705774LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x309 = 193556U;
	static int64_t x310 = INT64_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile uint64_t t62 = 5LLU;

	t62 = (x309*((x310%x311)+x312));

	if (t62 != 618346703002952LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -1;
	static int16_t x316 = INT16_MIN;
	static volatile int32_t t63 = 5;

	t63 = (x313*((x314%x315)+x316));

	if (t63 != -8355840) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x317 = 1;
	int8_t x318 = 0;
	uint64_t x319 = 15625799568LLU;
	static int8_t x320 = -2;

	t64 = (x317*((x318%x319)+x320));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x322 = 1765344732844659610LLU;
	static int8_t x323 = INT8_MIN;
	volatile int8_t x324 = 62;
	uint64_t t65 = 4207049061591LLU;

	t65 = (x321*((x322%x323)+x324));

	if (t65 != 14551503525502548232LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x325 = 863U;
	static int16_t x327 = -1;
	static volatile int32_t t66 = 4510;

	t66 = (x325*((x326%x327)+x328));

	if (t66 != -28278784) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x329 = 306946512U;
	static int16_t x330 = -1;
	int64_t x331 = -1LL;
	static volatile int64_t x332 = -1LL;
	int64_t t67 = -7586950LL;

	t67 = (x329*((x330%x331)+x332));

	if (t67 != -306946512LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x337 = UINT8_MAX;
	static volatile int64_t x338 = 19417916LL;
	int16_t x340 = 150;
	static int64_t t68 = -518289454559448357LL;

	t68 = (x337*((x338%x339)+x340));

	if (t68 != 38250LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x341 = INT16_MAX;
	int8_t x343 = -1;
	int8_t x344 = INT8_MAX;
	int32_t t69 = -331;

	t69 = (x341*((x342%x343)+x344));

	if (t69 != 4161409) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x345 = INT64_MAX;
	uint64_t x346 = 255LLU;
	static int8_t x348 = INT8_MIN;
	uint64_t t70 = 3669531LLU;

	t70 = (x345*((x346%x347)+x348));

	if (t70 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x349 = 28727021139LLU;
	static uint16_t x350 = 0U;
	uint8_t x351 = 126U;
	static uint16_t x352 = 62U;
	uint64_t t71 = 46217934817335LLU;

	t71 = (x349*((x350%x351)+x352));

	if (t71 != 1781075310618LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MIN;
	static uint64_t x355 = 2329059LLU;
	static uint64_t x356 = UINT64_MAX;

	t72 = (x353*((x354%x355)+x356));

	if (t72 != 18445423266039332864LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x357 = 0U;
	volatile int16_t x359 = INT16_MIN;
	uint32_t x360 = UINT32_MAX;

	t73 = (x357*((x358%x359)+x360));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x365 = 1957125LLU;
	static int32_t x366 = 34653;
	static uint16_t x368 = 641U;
	uint64_t t74 = 5424952LLU;

	t74 = (x365*((x366%x367)+x368));

	if (t74 != 4945654875LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x369 = UINT8_MAX;
	static int64_t x370 = -1LL;
	uint8_t x372 = UINT8_MAX;
	int64_t t75 = -1635149LL;

	t75 = (x369*((x370%x371)+x372));

	if (t75 != 65025LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	static int32_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	volatile int64_t t76 = 7028649531LL;

	t76 = (x373*((x374%x375)+x376));

	if (t76 != 9223372030412324865LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x381 = UINT64_MAX;
	int8_t x383 = 7;
	uint64_t t77 = 6054LLU;

	t77 = (x381*((x382%x383)+x384));

	if (t77 != 18446295534710172691LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x390 = UINT64_MAX;
	uint64_t t78 = 361955LLU;

	t78 = (x389*((x390%x391)+x392));

	if (t78 != 94489280468LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x393 = 1;
	volatile int32_t x394 = INT32_MIN;
	uint32_t x396 = 4206323U;
	uint32_t t79 = 27U;

	t79 = (x393*((x394%x395)+x396));

	if (t79 != 4206323U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x401 = -7868109119802LL;
	int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	volatile int64_t t80 = -7LL;

	t80 = (x401*((x402%x403)+x404));

	if (t80 != 7868109119802LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x405 = INT8_MIN;
	static volatile int64_t x406 = -1LL;
	int64_t x407 = INT64_MAX;
	static uint32_t x408 = 102U;
	int64_t t81 = 2764985819LL;

	t81 = (x405*((x406%x407)+x408));

	if (t81 != -12928LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = 27U;
	static int32_t x410 = 232;
	int16_t x411 = -1;
	int8_t x412 = -2;
	int32_t t82 = -61621086;

	t82 = (x409*((x410%x411)+x412));

	if (t82 != -54) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x413 = 0U;
	int32_t x414 = -65;
	int64_t x415 = 12855LL;
	int8_t x416 = -1;
	volatile int64_t t83 = 128155935399845LL;

	t83 = (x413*((x414%x415)+x416));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x417 = UINT64_MAX;
	uint8_t x418 = UINT8_MAX;
	uint64_t x419 = 168371LLU;
	int8_t x420 = INT8_MAX;
	static volatile uint64_t t84 = 454798LLU;

	t84 = (x417*((x418%x419)+x420));

	if (t84 != 18446744073709551234LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x422 = 1887;
	int32_t x423 = INT32_MIN;
	static volatile uint64_t x424 = 1429635984365LLU;
	volatile uint64_t t85 = 60LLU;

	t85 = (x421*((x422%x423)+x424));

	if (t85 != 7960385403101252788LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x429 = UINT8_MAX;
	static int64_t x430 = INT64_MIN;
	static int8_t x431 = INT8_MIN;
	uint64_t x432 = 15380LLU;
	volatile uint64_t t86 = 13253180LLU;

	t86 = (x429*((x430%x431)+x432));

	if (t86 != 3921900LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x437 = -3;
	int8_t x438 = 4;
	int32_t x439 = INT32_MIN;
	uint16_t x440 = 6380U;
	static volatile int32_t t87 = 30043;

	t87 = (x437*((x438%x439)+x440));

	if (t87 != -19152) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x441 = 139246120LLU;
	uint64_t x442 = 11710796032062147LLU;
	uint32_t x443 = 44831082U;
	volatile uint64_t t88 = 694212776LLU;

	t88 = (x441*((x442%x443)+x444));

	if (t88 != 4905810270128040LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x445 = INT32_MAX;
	uint64_t x446 = 21377011762LLU;
	int16_t x447 = INT16_MIN;
	static int8_t x448 = -1;
	uint64_t t89 = 1561422LLU;

	t89 = (x445*((x446%x447)+x448));

	if (t89 != 9013295031055069135LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x449 = 6295;
	volatile uint16_t x450 = UINT16_MAX;
	volatile int64_t x451 = 20174390LL;
	int8_t x452 = -18;
	int64_t t90 = 357657500887LL;

	t90 = (x449*((x450%x451)+x452));

	if (t90 != 412429515LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = -3053319949935LL;
	int8_t x454 = INT8_MIN;
	volatile int16_t x455 = INT16_MAX;
	static int32_t x456 = -541819;
	int64_t t91 = 17097859813165656LL;

	t91 = (x453*((x454%x455)+x456));

	if (t91 != 1654737586907423445LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x457 = 95979066U;
	int16_t x458 = 339;
	static uint32_t x459 = 297181808U;
	static uint16_t x460 = 16137U;
	uint32_t t92 = 412311373U;

	t92 = (x457*((x458%x459)+x460));

	if (t92 != 803126488U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x462 = -3;
	static uint16_t x463 = UINT16_MAX;
	static int8_t x464 = INT8_MAX;

	t93 = (x461*((x462%x463)+x464));

	if (t93 != -15872) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x466 = INT16_MAX;
	uint64_t x467 = 7LLU;
	int8_t x468 = INT8_MIN;
	uint64_t t94 = 229155237029LLU;

	t94 = (x465*((x466%x467)+x468));

	if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x471 = INT64_MAX;
	int64_t t95 = -1949261166304LL;

	t95 = (x469*((x470%x471)+x472));

	if (t95 != -127960LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x473 = UINT64_MAX;
	int64_t x474 = INT64_MAX;
	volatile int16_t x476 = INT16_MIN;

	t96 = (x473*((x474%x475)+x476));

	if (t96 != 18446744073548296029LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x477 = -1LL;
	int8_t x478 = INT8_MIN;
	int16_t x479 = -2;
	volatile uint32_t x480 = 6U;
	volatile int64_t t97 = 899LL;

	t97 = (x477*((x478%x479)+x480));

	if (t97 != -6LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x481 = -11;
	int32_t x482 = 913248902;
	int64_t x483 = -636888LL;
	static int8_t x484 = INT8_MAX;
	int64_t t98 = -542205610LL;

	t98 = (x481*((x482%x483)+x484));

	if (t98 != -6473775LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = -1;
	static int8_t x486 = INT8_MIN;
	int32_t x487 = INT32_MAX;
	static uint64_t x488 = 495508046LLU;
	volatile uint64_t t99 = 258394774794LLU;

	t99 = (x485*((x486%x487)+x488));

	if (t99 != 18446744073214043698LLU) { NG(); } else { ; }
	
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

