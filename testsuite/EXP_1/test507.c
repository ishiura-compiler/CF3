#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 1392978U;
int32_t x4 = INT32_MIN;
int8_t x11 = -57;
int64_t x24 = INT64_MIN;
static int64_t t5 = 2779363LL;
int32_t x32 = INT32_MAX;
uint64_t t7 = 1931245477756LLU;
int64_t x33 = INT64_MAX;
volatile int8_t x34 = -1;
int32_t x38 = 35;
static volatile int64_t x41 = -1LL;
uint64_t x42 = 411290257765LLU;
uint16_t x43 = 21878U;
int16_t x66 = INT16_MIN;
volatile int32_t t12 = 69894;
int8_t x72 = 1;
uint16_t x78 = 396U;
uint8_t x80 = 9U;
int16_t x84 = 0;
int32_t x85 = -1;
int64_t x107 = 116008810268LL;
volatile uint64_t t21 = 549438384515160495LLU;
uint32_t x115 = 3594U;
volatile uint32_t t22 = 28U;
int32_t x131 = INT32_MIN;
int16_t x132 = INT16_MIN;
int16_t x136 = INT16_MAX;
uint64_t x140 = UINT64_MAX;
volatile int8_t x144 = -1;
int16_t x149 = 0;
int8_t x150 = -7;
int64_t t31 = 132041603LL;
static int16_t x168 = INT16_MAX;
volatile int8_t x170 = INT8_MIN;
int16_t x171 = -16012;
int16_t x178 = -24;
int8_t x179 = INT8_MAX;
uint16_t x180 = 4U;
uint64_t t39 = 60922385443913327LLU;
static int64_t x211 = -320563968899LL;
int8_t x215 = -1;
int16_t x216 = INT16_MIN;
uint16_t x224 = 0U;
int32_t x236 = INT32_MAX;
uint16_t x242 = UINT16_MAX;
static volatile int64_t x243 = INT64_MAX;
uint64_t t49 = 506271079LLU;
static int16_t x260 = INT16_MIN;
int16_t x273 = 6;
int64_t t54 = -575523LL;
int64_t x290 = -1LL;
uint64_t x296 = UINT64_MAX;
uint32_t x308 = 740160561U;
static int16_t x317 = INT16_MAX;
static int16_t x319 = INT16_MIN;
int32_t x322 = INT32_MIN;
int8_t x323 = INT8_MIN;
uint64_t t61 = 1157983733355LLU;
uint16_t x340 = 9114U;
int32_t t66 = -439407147;
int32_t x371 = -1;
static volatile int8_t x384 = INT8_MAX;
uint16_t x385 = 1U;
int32_t x404 = -1;
static int32_t t75 = 1;
static uint32_t x410 = UINT32_MAX;
uint8_t x412 = 7U;
volatile uint32_t t76 = 401894650U;
int64_t t77 = 2390799692113LL;
int16_t x425 = INT16_MAX;
int64_t x432 = -1857743187262168LL;
volatile int16_t x438 = INT16_MIN;
volatile uint64_t x444 = UINT64_MAX;
int16_t x457 = 2;
int32_t x464 = 1517;
int16_t x468 = INT16_MIN;
volatile int16_t x476 = -22;
volatile int64_t x486 = -113449710462180LL;
int64_t t92 = -1419472208991LL;
int32_t x493 = -1;
int16_t x496 = 10613;
int32_t t94 = -243332211;
int32_t x500 = INT32_MIN;
static int32_t x511 = -1;
int64_t x512 = 26288434858021LL;
volatile int64_t t97 = 10249705LL;
int8_t x521 = -13;


void f0(void) {
	int8_t x2 = -1;
	uint8_t x3 = 24U;
	volatile uint32_t t0 = 21845U;

	t0 = (((x1*x2)^x3)^x4);

	if (t0 != 2146090678U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1324162;
	volatile uint32_t x6 = 99U;
	int8_t x7 = -1;
	volatile int32_t x8 = 266754280;
	uint32_t t1 = 43U;

	t1 = (((x5*x6)^x7)^x8);

	if (t1 != 137762477U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	int32_t x10 = 893;
	int8_t x12 = 0;
	static int32_t t2 = -5206;

	t2 = (((x9*x10)^x11)^x12);

	if (t2 != -57) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = 0;
	int8_t x15 = -1;
	uint16_t x16 = 70U;
	volatile uint64_t t3 = 930994178LLU;

	t3 = (((x13*x14)^x15)^x16);

	if (t3 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile uint16_t x18 = 1088U;
	volatile int64_t x19 = INT64_MAX;
	int8_t x20 = -1;
	static volatile int64_t t4 = 657LL;

	t4 = (((x17*x18)^x19)^x20);

	if (t4 != -9223372036854498368LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int8_t x22 = 1;
	int16_t x23 = INT16_MIN;

	t5 = (((x21*x22)^x23)^x24);

	if (t5 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 23U;
	uint16_t x26 = UINT16_MAX;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = 28;
	uint32_t t6 = 67751154U;

	t6 = (((x25*x26)^x27)^x28);

	if (t6 != 1507082U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 111905LLU;
	volatile uint64_t x30 = UINT64_MAX;
	volatile uint16_t x31 = UINT16_MAX;

	t7 = (((x29*x30)^x31)^x32);

	if (t7 != 18446744071562152671LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x35 = 30U;
	int64_t x36 = 29348054295749846LL;
	int64_t t8 = -3684794071010805LL;

	t8 = (((x33*x34)^x35)^x36);

	if (t8 != -9194023982559025975LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 5349585LL;
	int8_t x39 = -4;
	int64_t x40 = INT64_MIN;
	int64_t t9 = 3998548014142545LL;

	t9 = (((x37*x38)^x39)^x40);

	if (t9 != 9223372036667540335LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x44 = -1LL;
	uint64_t t10 = 40285391LLU;

	t10 = (((x41*x42)^x43)^x44);

	if (t10 != 411290246162LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -893;
	static int8_t x46 = INT8_MAX;
	int16_t x47 = -3;
	static uint64_t x48 = 23LLU;
	uint64_t t11 = 730LLU;

	t11 = (((x45*x46)^x47)^x48);

	if (t11 != 113431LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 1U;
	uint8_t x67 = 0U;
	int8_t x68 = INT8_MIN;

	t12 = (((x65*x66)^x67)^x68);

	if (t12 != 32640) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = -1;
	int64_t x70 = -7705448271LL;
	int32_t x71 = -1;
	static int64_t t13 = 142LL;

	t13 = (((x69*x70)^x71)^x72);

	if (t13 != -7705448271LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MAX;
	static uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MAX;
	volatile uint32_t x76 = 9676U;
	volatile uint64_t t14 = 3751181502LLU;

	t14 = (((x73*x74)^x75)^x76);

	if (t14 != 18446744073709541938LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 5U;
	volatile int8_t x79 = INT8_MIN;
	static volatile int32_t t15 = 313;

	t15 = (((x77*x78)^x79)^x80);

	if (t15 != -1995) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 1331041LLU;
	static volatile uint64_t x82 = 363LLU;
	uint32_t x83 = UINT32_MAX;
	uint64_t t16 = 6786665011836LLU;

	t16 = (((x81*x82)^x83)^x84);

	if (t16 != 3811799412LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t17 = 140999657252LLU;

	t17 = (((x85*x86)^x87)^x88);

	if (t17 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = 18314679U;
	int16_t x94 = -1;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MAX;
	volatile uint32_t t18 = 25418179U;

	t18 = (((x93*x94)^x95)^x96);

	if (t18 != 2165798345U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 10U;
	uint64_t x98 = 18304659427610LLU;
	int16_t x99 = INT16_MIN;
	static uint32_t x100 = UINT32_MAX;
	volatile uint64_t t19 = 505428156181148LLU;

	t19 = (((x97*x98)^x99)^x100);

	if (t19 != 18446561030176429307LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = INT64_MAX;
	volatile uint64_t x106 = 90232LLU;
	uint32_t x108 = 1296071U;
	uint64_t t20 = 143850007506LLU;

	t20 = (((x105*x106)^x107)^x108);

	if (t20 != 18446743957699604051LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = 6;
	static int16_t x110 = -1;
	uint64_t x111 = 2989LLU;
	uint32_t x112 = UINT32_MAX;

	t21 = (((x109*x110)^x111)^x112);

	if (t21 != 18446744069414587304LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -1;
	int8_t x114 = INT8_MIN;
	static uint8_t x116 = UINT8_MAX;

	t22 = (((x113*x114)^x115)^x116);

	if (t22 != 3701U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MAX;
	int8_t x122 = INT8_MAX;
	volatile int8_t x123 = -9;
	static int32_t x124 = 3;
	volatile int32_t t23 = 274;

	t23 = (((x121*x122)^x123)^x124);

	if (t23 != -4161419) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x129 = -3;
	int64_t x130 = 13LL;
	volatile int64_t t24 = 28389303937368229LL;

	t24 = (((x129*x130)^x131)^x132);

	if (t24 != -2147450919LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = -1;
	int32_t x134 = -29349;
	uint64_t x135 = 1040290064509709LLU;
	uint64_t t25 = 22250649LLU;

	t25 = (((x133*x134)^x135)^x136);

	if (t25 != 1040290064508503LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MIN;
	static int64_t x138 = 505627871LL;
	uint16_t x139 = 0U;
	uint64_t t26 = 2LLU;

	t26 = (((x137*x138)^x139)^x140);

	if (t26 != 1085827584945553407LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 32446U;
	volatile uint16_t x142 = 25U;
	uint16_t x143 = 82U;
	static volatile int32_t t27 = 635747;

	t27 = (((x141*x142)^x143)^x144);

	if (t27 != -811229) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = 29390U;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	static uint64_t x148 = 4793834803739736676LLU;
	uint64_t t28 = 2558LLU;

	t28 = (((x145*x146)^x147)^x148);

	if (t28 != 4793834803739740374LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x151 = -1758LL;
	volatile uint32_t x152 = UINT32_MAX;
	volatile int64_t t29 = -11477502530640LL;

	t29 = (((x149*x150)^x151)^x152);

	if (t29 != -4294965539LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x153 = -1;
	int64_t x154 = -121829931270LL;
	uint32_t x155 = 473384709U;
	uint64_t x156 = 543904736415085111LLU;
	uint64_t t30 = 3389798221LLU;

	t30 = (((x153*x154)^x155)^x156);

	if (t30 != 543904649417722932LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x161 = -1LL;
	int64_t x162 = 11643684329036LL;
	static int16_t x163 = -1;
	int32_t x164 = INT32_MIN;

	t31 = (((x161*x162)^x163)^x164);

	if (t31 != -11645775833525LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	static uint64_t t32 = 5858026626127388LLU;

	t32 = (((x165*x166)^x167)^x168);

	if (t32 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x169 = INT16_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t33 = -175;

	t33 = (((x169*x170)^x171)^x172);

	if (t33 != 4178315) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -1LL;
	volatile int32_t x174 = -1;
	int64_t x175 = INT64_MAX;
	int32_t x176 = INT32_MIN;
	int64_t t34 = -1234489431096877LL;

	t34 = (((x173*x174)^x175)^x176);

	if (t34 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1666;
	int32_t t35 = 5889969;

	t35 = (((x177*x178)^x179)^x180);

	if (t35 != 40011) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 3270;
	static volatile int8_t x183 = -1;
	int32_t x184 = 1128;
	static volatile int32_t t36 = -10;

	t36 = (((x181*x182)^x183)^x184);

	if (t36 != 107150231) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x185 = INT16_MIN;
	uint64_t x186 = 4LLU;
	int16_t x187 = -14592;
	int32_t x188 = -3395568;
	uint64_t t37 = 0LLU;

	t37 = (((x185*x186)^x187)^x188);

	if (t37 != 18446744073706272528LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x189 = INT16_MIN;
	int16_t x190 = 2482;
	int16_t x191 = 0;
	volatile int64_t x192 = -622228376042LL;
	int64_t t38 = 73764699935LL;

	t38 = (((x189*x190)^x191)^x192);

	if (t38 != 622156543510LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x193 = 114U;
	uint8_t x194 = 2U;
	static int16_t x195 = INT16_MIN;
	volatile uint64_t x196 = 15738284LLU;

	t39 = (((x193*x194)^x195)^x196);

	if (t39 != 18446744073693799752LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x197 = 1U;
	int32_t x198 = INT32_MAX;
	static uint8_t x199 = 74U;
	int64_t x200 = -946880305031505749LL;
	static volatile int64_t t40 = -437225924LL;

	t40 = (((x197*x198)^x199)^x200);

	if (t40 != -946880303883393250LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = INT16_MAX;
	uint32_t x202 = UINT32_MAX;
	int16_t x203 = -17;
	static int16_t x204 = 15;
	uint32_t t41 = 734746415U;

	t41 = (((x201*x202)^x203)^x204);

	if (t41 != 32737U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 1671302176U;
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 72288527U;
	static uint8_t x208 = 3U;
	uint32_t t42 = 77154826U;

	t42 = (((x205*x206)^x207)^x208);

	if (t42 != 2899245804U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x209 = 99U;
	int8_t x210 = -1;
	static volatile int8_t x212 = INT8_MAX;
	static int64_t t43 = 4LL;

	t43 = (((x209*x210)^x211)^x212);

	if (t43 != 320563968927LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = 33U;
	static int32_t x214 = -1;
	static volatile int32_t t44 = -58404;

	t44 = (((x213*x214)^x215)^x216);

	if (t44 != -32736) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -1;
	volatile uint32_t x222 = 0U;
	static int32_t x223 = 1982917;
	uint32_t t45 = 31956496U;

	t45 = (((x221*x222)^x223)^x224);

	if (t45 != 1982917U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x233 = INT64_MIN;
	uint64_t x234 = 171540766LLU;
	int32_t x235 = INT32_MIN;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (((x233*x234)^x235)^x236);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x241 = INT8_MIN;
	static uint32_t x244 = 15908788U;
	volatile int64_t t47 = -11533545958LL;

	t47 = (((x241*x242)^x243)^x244);

	if (t47 != -9223372036845518645LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x245 = INT16_MAX;
	uint16_t x246 = 1266U;
	static volatile uint16_t x247 = UINT16_MAX;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t48 = 2;

	t48 = (((x245*x246)^x247)^x248);

	if (t48 != -41419919) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x249 = INT16_MAX;
	uint64_t x250 = 1020159998LLU;
	static int32_t x251 = -1;
	uint8_t x252 = 32U;

	t49 = (((x249*x250)^x251)^x252);

	if (t49 != 18446710646126897117LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x253 = 8LLU;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t50 = 22947LLU;

	t50 = (((x253*x254)^x255)^x256);

	if (t50 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = INT16_MIN;
	static int16_t x258 = INT16_MIN;
	uint32_t x259 = 7U;
	uint32_t t51 = 3871U;

	t51 = (((x257*x258)^x259)^x260);

	if (t51 != 3221192711U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t52 = -30261;

	t52 = (((x273*x274)^x275)^x276);

	if (t52 != -6) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x277 = 80U;
	volatile int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MAX;
	int32_t t53 = 2760;

	t53 = (((x277*x278)^x279)^x280);

	if (t53 != 2144894975) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x285 = INT32_MIN;
	volatile int64_t x286 = -1LL;
	volatile int32_t x287 = -128635;
	static int32_t x288 = INT32_MAX;

	t54 = (((x285*x286)^x287)^x288);

	if (t54 != -4294838662LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x291 = 42U;
	static int16_t x292 = INT16_MIN;
	volatile int64_t t55 = -1784172288180104544LL;

	t55 = (((x289*x290)^x291)^x292);

	if (t55 != -32598LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x293 = INT16_MIN;
	volatile int8_t x294 = -1;
	volatile int32_t x295 = 3368707;
	uint64_t t56 = 188961974531619532LLU;

	t56 = (((x293*x294)^x295)^x296);

	if (t56 != 18446744073706150140LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x297 = 6U;
	int64_t x298 = 32329393LL;
	int8_t x299 = 20;
	int64_t x300 = -1LL;
	int64_t t57 = 1389929710317542287LL;

	t57 = (((x297*x298)^x299)^x300);

	if (t57 != -193976371LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x305 = 112866686549LLU;
	static int8_t x306 = 6;
	volatile int16_t x307 = INT16_MIN;
	uint64_t t58 = 1935LLU;

	t58 = (((x305*x306)^x307)^x308);

	if (t58 != 18446743397246415311LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x318 = 27264LLU;
	uint16_t x320 = 103U;
	static volatile uint64_t t59 = 110317657LLU;

	t59 = (((x317*x318)^x319)^x320);

	if (t59 != 18446744072816170471LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x321 = 7111386LLU;
	int32_t x324 = INT32_MIN;
	uint64_t t60 = 62587139098878144LLU;

	t60 = (((x321*x322)^x323)^x324);

	if (t60 != 18431472490707419008LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x325 = INT32_MIN;
	static uint64_t x326 = UINT64_MAX;
	static volatile int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;

	t61 = (((x325*x326)^x327)^x328);

	if (t61 != 2147516288LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x333 = INT32_MAX;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MAX;
	volatile int8_t x336 = -1;
	volatile uint32_t t62 = 2137423830U;

	t62 = (((x333*x334)^x335)^x336);

	if (t62 != 2147483521U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x337 = 1U;
	int8_t x338 = -1;
	uint8_t x339 = 100U;
	int32_t t63 = -47135626;

	t63 = (((x337*x338)^x339)^x340);

	if (t63 != -9215) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x345 = INT16_MAX;
	static uint32_t x346 = UINT32_MAX;
	int64_t x347 = -181643995LL;
	uint64_t x348 = 251760032LLU;
	volatile uint64_t t64 = 1927961180344516LLU;

	t64 = (((x345*x346)^x347)^x348);

	if (t64 != 18446744069512255620LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x349 = 1;
	uint8_t x350 = 0U;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	static int32_t t65 = -16239;

	t65 = (((x349*x350)^x351)^x352);

	if (t65 != 32640) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x357 = 26;
	static int32_t x358 = 43552557;
	int8_t x359 = INT8_MIN;
	volatile int16_t x360 = 992;

	t66 = (((x357*x358)^x359)^x360);

	if (t66 != -1132366094) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x365 = INT8_MAX;
	static int16_t x366 = 6969;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t67 = -4986;

	t67 = (((x365*x366)^x367)^x368);

	if (t67 != -884424) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x369 = 946U;
	uint8_t x370 = 30U;
	static uint16_t x372 = 9U;
	volatile int32_t t68 = 18;

	t68 = (((x369*x370)^x371)^x372);

	if (t68 != -28374) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x373 = INT64_MIN;
	static uint64_t x374 = UINT64_MAX;
	volatile uint16_t x375 = 1557U;
	volatile int64_t x376 = 2386783LL;
	uint64_t t69 = 754190LLU;

	t69 = (((x373*x374)^x375)^x376);

	if (t69 != 9223372036857163082LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x381 = -2747;
	static uint8_t x382 = UINT8_MAX;
	int64_t x383 = 352LL;
	int64_t t70 = -18049LL;

	t70 = (((x381*x382)^x383)^x384);

	if (t70 != -700764LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x386 = 6836617261333117LL;
	int16_t x387 = 1;
	int16_t x388 = 104;
	volatile int64_t t71 = 100LL;

	t71 = (((x385*x386)^x387)^x388);

	if (t71 != 6836617261333012LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 4U;
	int32_t x391 = -1;
	uint64_t x392 = 751LLU;
	uint64_t t72 = 2893525087151809LLU;

	t72 = (((x389*x390)^x391)^x392);

	if (t72 != 748LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = INT8_MAX;
	int16_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	int32_t x396 = -1;
	volatile int32_t t73 = 3910;

	t73 = (((x393*x394)^x395)^x396);

	if (t73 != 65409) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x401 = 15U;
	uint8_t x402 = 87U;
	static int64_t x403 = -251562LL;
	volatile int64_t t74 = 43607610LL;

	t74 = (((x401*x402)^x403)^x404);

	if (t74 != 250800LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x405 = -69;
	static uint16_t x406 = UINT16_MAX;
	static volatile int8_t x407 = INT8_MIN;
	static int16_t x408 = INT16_MIN;

	t75 = (((x405*x406)^x407)^x408);

	if (t75 != -4489275) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x409 = -1;
	volatile int16_t x411 = INT16_MAX;

	t76 = (((x409*x410)^x411)^x412);

	if (t76 != 32761U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x413 = -1;
	uint8_t x414 = UINT8_MAX;
	static volatile int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MAX;

	t77 = (((x413*x414)^x415)^x416);

	if (t77 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	volatile int8_t x423 = INT8_MIN;
	uint32_t x424 = 221933U;
	static volatile uint32_t t78 = 0U;

	t78 = (((x421*x422)^x423)^x424);

	if (t78 != 4290551149U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x426 = UINT8_MAX;
	static uint64_t x427 = UINT64_MAX;
	uint64_t x428 = UINT64_MAX;
	uint64_t t79 = 1520895150088566LLU;

	t79 = (((x425*x426)^x427)^x428);

	if (t79 != 8355585LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = -1;
	int64_t x430 = INT64_MAX;
	static int16_t x431 = 3;
	int64_t t80 = -1560953LL;

	t80 = (((x429*x430)^x431)^x432);

	if (t80 != 9221514293667513642LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x433 = 30345534979908LL;
	static int32_t x434 = 31711;
	volatile int16_t x435 = 2587;
	int16_t x436 = -677;
	int64_t t81 = 136LL;

	t81 = (((x433*x434)^x435)^x436);

	if (t81 != -962287259747860612LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x437 = UINT8_MAX;
	int16_t x439 = INT16_MIN;
	int64_t x440 = 1LL;
	volatile int64_t t82 = -622202890LL;

	t82 = (((x437*x438)^x439)^x440);

	if (t82 != 8323073LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x441 = 1977;
	int8_t x442 = -1;
	volatile int8_t x443 = -1;
	uint64_t t83 = 1983903031208LLU;

	t83 = (((x441*x442)^x443)^x444);

	if (t83 != 18446744073709549639LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = -1LL;
	static volatile int32_t x446 = INT32_MIN;
	int64_t x447 = INT64_MIN;
	int32_t x448 = 0;
	volatile int64_t t84 = -951239LL;

	t84 = (((x445*x446)^x447)^x448);

	if (t84 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x449 = 1U;
	int8_t x450 = INT8_MAX;
	int8_t x451 = -1;
	uint64_t x452 = 2460LLU;
	static uint64_t t85 = 154641005LLU;

	t85 = (((x449*x450)^x451)^x452);

	if (t85 != 18446744073709549084LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = -1;
	int32_t x454 = -1;
	static uint8_t x455 = UINT8_MAX;
	int32_t x456 = 2116;
	int32_t t86 = -1;

	t86 = (((x453*x454)^x455)^x456);

	if (t86 != 2234) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x458 = INT16_MIN;
	static uint8_t x459 = UINT8_MAX;
	static int32_t x460 = 953895;
	int32_t t87 = -9350055;

	t87 = (((x457*x458)^x459)^x460);

	if (t87 != -946472) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = 11;
	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	volatile int32_t t88 = -12511;

	t88 = (((x461*x462)^x463)^x464);

	if (t88 != 237) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x465 = INT16_MIN;
	volatile int8_t x466 = -1;
	uint16_t x467 = UINT16_MAX;
	volatile int32_t t89 = 250;

	t89 = (((x465*x466)^x467)^x468);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x473 = UINT8_MAX;
	int8_t x474 = INT8_MAX;
	static int32_t x475 = -1;
	static volatile int32_t t90 = -246;

	t90 = (((x473*x474)^x475)^x476);

	if (t90 != 32404) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x477 = 188U;
	volatile int16_t x478 = -5930;
	static volatile uint16_t x479 = 218U;
	int16_t x480 = -1;
	volatile int32_t t91 = -104547579;

	t91 = (((x477*x478)^x479)^x480);

	if (t91 != 1114637) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x485 = -1;
	volatile int16_t x487 = -1;
	volatile int8_t x488 = -1;

	t92 = (((x485*x486)^x487)^x488);

	if (t92 != 113449710462180LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x489 = INT8_MIN;
	int8_t x490 = 21;
	uint8_t x491 = UINT8_MAX;
	volatile uint32_t x492 = 414U;
	uint32_t t93 = 16959U;

	t93 = (((x489*x490)^x491)^x492);

	if (t93 != 4294964449U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x494 = 9U;
	uint8_t x495 = 13U;

	t94 = (((x493*x494)^x495)^x496);

	if (t94 != -10609) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x497 = 657U;
	int8_t x498 = INT8_MIN;
	volatile int8_t x499 = -1;
	int32_t t95 = -29324114;

	t95 = (((x497*x498)^x499)^x500);

	if (t95 != -2147399553) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x505 = INT32_MIN;
	uint32_t x506 = UINT32_MAX;
	static int16_t x507 = INT16_MIN;
	static volatile int32_t x508 = INT32_MAX;
	static uint32_t t96 = 78768362U;

	t96 = (((x505*x506)^x507)^x508);

	if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x509 = 502U;
	int8_t x510 = INT8_MIN;

	t97 = (((x509*x510)^x511)^x512);

	if (t97 != 26288434885338LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x517 = UINT64_MAX;
	int16_t x518 = -2002;
	int64_t x519 = -1LL;
	static int32_t x520 = INT32_MAX;
	uint64_t t98 = 1057295540158571159LLU;

	t98 = (((x517*x518)^x519)^x520);

	if (t98 != 18446744071562069970LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x522 = -235912;
	static int64_t x523 = INT64_MAX;
	static int64_t x524 = INT64_MIN;
	volatile int64_t t99 = 57LL;

	t99 = (((x521*x522)^x523)^x524);

	if (t99 != -3066857LL) { NG(); } else { ; }
	
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

