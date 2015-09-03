#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x10 = 126U;
int64_t t1 = INT64_MAX;
int16_t x19 = INT16_MAX;
volatile uint8_t x20 = UINT8_MAX;
uint32_t t3 = 15105328U;
volatile int64_t t4 = -1436327655071LL;
uint8_t x43 = UINT8_MAX;
int32_t t6 = -11442;
volatile uint32_t x49 = 2130U;
int32_t x50 = INT32_MIN;
static uint32_t x57 = 19U;
int64_t x60 = INT64_MIN;
static int32_t x62 = INT32_MIN;
int8_t x75 = INT8_MIN;
int64_t x81 = -1LL;
static volatile uint64_t x83 = UINT64_MAX;
int8_t x86 = INT8_MIN;
int8_t x90 = 0;
int32_t x95 = INT32_MAX;
int16_t x96 = INT16_MIN;
uint8_t x101 = UINT8_MAX;
static volatile int32_t x106 = -1;
uint8_t x109 = UINT8_MAX;
uint64_t x113 = 62779723043633LLU;
volatile uint32_t x131 = 22U;
static int64_t x136 = -1LL;
volatile int16_t x143 = INT16_MIN;
uint8_t x144 = 17U;
static uint64_t t25 = 7692835687084902LLU;
volatile uint64_t x155 = UINT64_MAX;
uint64_t x157 = UINT64_MAX;
uint16_t x159 = 1676U;
uint16_t x164 = UINT16_MAX;
volatile uint64_t t31 = 229179117231LLU;
uint64_t t32 = 2985594218248364360LLU;
static int16_t x186 = -1;
volatile uint16_t x194 = UINT16_MAX;
int8_t x202 = INT8_MIN;
int64_t t40 = -8520981LL;
uint8_t x236 = UINT8_MAX;
static uint16_t x237 = 3409U;
uint32_t x242 = 24815U;
int32_t x243 = 451446;
uint16_t x246 = 24U;
int64_t x247 = -9900LL;
uint16_t x255 = 1U;
int64_t x256 = INT64_MAX;
uint64_t x257 = UINT64_MAX;
volatile uint8_t x262 = 49U;
static int32_t t53 = -1774969;
static uint16_t x270 = 815U;
int32_t t54 = -197224977;
uint64_t x278 = 989LLU;
int64_t x280 = -1LL;
static int32_t x288 = -5064778;
volatile int16_t x292 = INT16_MAX;
uint32_t t59 = 986991826U;
static uint8_t x302 = UINT8_MAX;
uint16_t x308 = 415U;
volatile int32_t t62 = -1845762;
int8_t x311 = 1;
uint32_t t63 = 382619U;
int8_t x313 = -1;
int64_t x314 = -1LL;
volatile uint64_t t64 = 188499369166LLU;
static int64_t x321 = -358383745LL;
int16_t x329 = -1;
int64_t x330 = -1LL;
volatile int64_t t67 = 4314679946LL;
volatile int16_t x335 = INT16_MIN;
volatile int64_t t68 = -11158796883915527LL;
int64_t x339 = -34191004456LL;
uint8_t x342 = UINT8_MAX;
static int32_t t70 = -3629;
static volatile int8_t x347 = -30;
int8_t x351 = 3;
uint64_t x358 = 13149907910912971LLU;
volatile uint8_t x364 = UINT8_MAX;
int8_t x380 = 0;
static volatile int32_t t77 = 113;
int8_t x385 = INT8_MAX;
uint32_t x390 = UINT32_MAX;
uint32_t x393 = 3U;
int32_t x396 = -1;
int32_t t81 = 174467360;
volatile int8_t x409 = 13;
int16_t x414 = -1;
volatile int64_t x419 = INT64_MIN;
static volatile int64_t t85 = -255258476405LL;
int64_t t86 = -6531718611334LL;
static int16_t x426 = 152;
uint32_t x437 = UINT32_MAX;
uint16_t x442 = UINT16_MAX;
uint64_t x443 = UINT64_MAX;
int32_t x445 = -247;
static int16_t x446 = INT16_MIN;
int16_t x483 = -1;
volatile uint32_t x490 = UINT32_MAX;
int16_t x492 = INT16_MIN;
uint32_t t93 = 64536U;
static uint32_t x496 = 19836747U;
static volatile int8_t x503 = INT8_MIN;
static volatile int8_t x505 = -7;


void f0(void) {
	int16_t x9 = -239;
	int32_t x11 = INT32_MIN;
	int16_t x12 = 5;
	static volatile int32_t t0 = 670;

	t0 = ((x9*x10)^(x11^x12));

	if (t0 != 2147453531) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 1U;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;

	t1 = ((x13*x14)^(x15^x16));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -513755132666562658LL;
	int8_t x18 = -1;
	int64_t t2 = -30620632264LL;

	t2 = ((x17*x18)^(x19^x20));

	if (t2 != 513755132666558306LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 0U;
	volatile uint16_t x22 = 53U;
	int8_t x23 = -3;
	static uint32_t x24 = 3023039U;

	t3 = ((x21*x22)^(x23^x24));

	if (t3 != 4291944258U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = -1;
	static uint32_t x26 = UINT32_MAX;
	uint8_t x27 = 1U;
	int64_t x28 = -1674122250LL;

	t4 = ((x25*x26)^(x27^x28));

	if (t4 != -1674122250LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 7702611558176LLU;
	int32_t x34 = INT32_MIN;
	static int16_t x35 = INT16_MIN;
	static int16_t x36 = INT16_MAX;
	static volatile uint64_t t5 = 2445LLU;

	t5 = ((x33*x34)^(x35^x36));

	if (t5 != 12949678035002458111LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MAX;
	volatile uint8_t x42 = 57U;
	volatile int8_t x44 = -1;

	t6 = ((x41*x42)^(x43^x44));

	if (t6 != -7353) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x45 = 1U;
	uint16_t x46 = 39U;
	static int64_t x47 = INT64_MIN;
	static int16_t x48 = 89;
	int64_t t7 = -120897LL;

	t7 = ((x45*x46)^(x47^x48));

	if (t7 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x51 = 91553;
	uint8_t x52 = 7U;
	static uint32_t t8 = 26633U;

	t8 = ((x49*x50)^(x51^x52));

	if (t8 != 91558U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 2U;
	uint64_t x54 = UINT64_MAX;
	uint16_t x55 = UINT16_MAX;
	static uint32_t x56 = 1737761U;
	uint64_t t9 = 1683946519643372LLU;

	t9 = ((x53*x54)^(x55^x56));

	if (t9 != 18446744073707815968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x58 = -3215960145LL;
	int32_t x59 = INT32_MAX;
	int64_t t10 = -13901065011254LL;

	t10 = ((x57*x58)^(x59^x60));

	if (t10 != 9223371975551450626LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = -2382329LL;
	static volatile int64_t x63 = -1LL;
	volatile uint16_t x64 = 9749U;
	int64_t t11 = -999780728LL;

	t11 = ((x61*x62)^(x63^x64));

	if (t11 != -5116012571665942LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = 27;
	int8_t x76 = -3;
	volatile int32_t t12 = -8726;

	t12 = ((x73*x74)^(x75^x76));

	if (t12 != -3331) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = 48;
	static volatile int8_t x78 = -3;
	volatile uint8_t x79 = 10U;
	static int8_t x80 = 21;
	volatile int32_t t13 = -826457;

	t13 = ((x77*x78)^(x79^x80));

	if (t13 != -145) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = -622;
	static volatile int8_t x84 = -1;
	static uint64_t t14 = 1495907053LLU;

	t14 = ((x81*x82)^(x83^x84));

	if (t14 != 622LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = -31LL;
	static int32_t x87 = INT32_MIN;
	static uint16_t x88 = UINT16_MAX;
	volatile int64_t t15 = 304480LL;

	t15 = ((x85*x86)^(x87^x88));

	if (t15 != -2147422081LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x91 = 2U;
	static volatile int8_t x92 = INT8_MAX;
	int32_t t16 = -861;

	t16 = ((x89*x90)^(x91^x92));

	if (t16 != 125) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = 1885LLU;
	int64_t x94 = -1LL;
	volatile uint64_t t17 = 59349612LLU;

	t17 = ((x93*x94)^(x95^x96));

	if (t17 != 2147452764LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x102 = -468285459436LL;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t18 = 46377702LL;

	t18 = ((x101*x102)^(x103^x104));

	if (t18 != -119411011821549LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 3U;
	int32_t x107 = -1;
	uint32_t x108 = 276115200U;
	static volatile uint32_t t19 = 156759U;

	t19 = ((x105*x106)^(x107^x108));

	if (t19 != 276115202U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x110 = 1U;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 3535614265311224956LLU;
	static uint64_t t20 = 769088455662LLU;

	t20 = ((x109*x110)^(x111^x112));

	if (t20 != 14911129808398326531LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x114 = 0U;
	int8_t x115 = -1;
	static int16_t x116 = -11;
	volatile uint64_t t21 = 701299485LLU;

	t21 = ((x113*x114)^(x115^x116));

	if (t21 != 10LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = -43957392LL;
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = -1;
	static int16_t x120 = -1;
	volatile int64_t t22 = -1360842451386LL;

	t22 = ((x117*x118)^(x119^x120));

	if (t22 != -2880747684720LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint32_t t23 = 127512392U;

	t23 = ((x129*x130)^(x131^x132));

	if (t23 != 4294901782U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = 12U;
	static int32_t x134 = -112324846;
	static uint8_t x135 = UINT8_MAX;
	int64_t t24 = 5LL;

	t24 = ((x133*x134)^(x135^x136));

	if (t24 != 1347898328LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x141 = 48LLU;
	int8_t x142 = 53;

	t25 = ((x141*x142)^(x143^x144));

	if (t25 != 18446744073709521377LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x145 = 0LLU;
	volatile uint32_t x146 = UINT32_MAX;
	int16_t x147 = -1;
	volatile uint32_t x148 = UINT32_MAX;
	uint64_t t26 = 24483603559552778LLU;

	t26 = ((x145*x146)^(x147^x148));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x149 = 210446799666LLU;
	uint64_t x150 = UINT64_MAX;
	static int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t27 = 837065683582LLU;

	t27 = ((x149*x150)^(x151^x152));

	if (t27 != 18446743863262751950LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	static uint16_t x156 = UINT16_MAX;
	static volatile uint64_t t28 = 3LLU;

	t28 = ((x153*x154)^(x155^x156));

	if (t28 != 1073709056LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x158 = 8183860959486773LLU;
	int16_t x160 = -1;
	volatile uint64_t t29 = 2827481467153LLU;

	t29 = ((x157*x158)^(x159^x160));

	if (t29 != 8183860959487416LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = -1513;
	volatile int8_t x162 = 31;
	int8_t x163 = -17;
	int32_t t30 = 498806;

	t30 = ((x161*x162)^(x163^x164));

	if (t30 != 18649) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	volatile int16_t x168 = -1;

	t31 = ((x165*x166)^(x167^x168));

	if (t31 != 2147450879LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 120530LLU;
	uint64_t x170 = 221517730521315LLU;
	uint64_t x171 = 67537LLU;
	static int16_t x172 = INT16_MIN;

	t32 = ((x169*x170)^(x171^x172));

	if (t32 != 10193956087684938727LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = -188;
	int32_t x174 = -1;
	volatile int64_t x175 = INT64_MIN;
	volatile int64_t x176 = INT64_MIN;
	int64_t t33 = -34LL;

	t33 = ((x173*x174)^(x175^x176));

	if (t33 != 188LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x177 = -1;
	uint8_t x178 = 3U;
	int64_t x179 = INT64_MIN;
	int8_t x180 = -2;
	volatile int64_t t34 = 10615467742057957LL;

	t34 = ((x177*x178)^(x179^x180));

	if (t34 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x181 = 33595906;
	uint16_t x182 = 12U;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = UINT64_MAX;
	static uint64_t t35 = 73114550052959LLU;

	t35 = ((x181*x182)^(x183^x184));

	if (t35 != 1744332775LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = -212306450652LL;
	uint16_t x187 = 260U;
	uint64_t x188 = 0LLU;
	uint64_t t36 = 3209970909873681436LLU;

	t36 = ((x185*x186)^(x187^x188));

	if (t36 != 212306450904LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x189 = 151;
	uint64_t x190 = 37062LLU;
	volatile int32_t x191 = -100688;
	static volatile int16_t x192 = -18;
	uint64_t t37 = 1347891693056812834LLU;

	t37 = ((x189*x190)^(x191^x192));

	if (t37 != 5565844LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = 19865137LLU;
	int8_t x195 = INT8_MIN;
	static volatile uint64_t x196 = 54657428729647813LLU;
	uint64_t t38 = 738946LLU;

	t38 = ((x193*x194)^(x195^x196));

	if (t38 != 18392085652792036490LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = INT32_MIN;
	uint64_t t39 = 4334LLU;

	t39 = ((x201*x202)^(x203^x204));

	if (t39 != 18446744071562084223LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = 0;
	volatile int64_t x206 = -8163541540LL;
	int32_t x207 = -62155;
	uint8_t x208 = UINT8_MAX;

	t40 = ((x205*x206)^(x207^x208));

	if (t40 != -62006LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = 1887658515120425LL;
	int32_t x210 = -531;
	volatile int8_t x211 = -12;
	int32_t x212 = INT32_MAX;
	static volatile int64_t t41 = -6252833659124335LL;

	t41 = ((x209*x210)^(x211^x212));

	if (t41 != 1002346671989381118LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t42 = -3709120117832LL;

	t42 = ((x217*x218)^(x219^x220));

	if (t42 != 9223372036854743168LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = UINT16_MAX;
	uint16_t x222 = 170U;
	volatile uint64_t x223 = 132LLU;
	int32_t x224 = 646;
	uint64_t t43 = 48LLU;

	t43 = ((x221*x222)^(x223^x224));

	if (t43 != 11140436LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x230 = 493U;
	int32_t x231 = INT32_MIN;
	uint8_t x232 = UINT8_MAX;
	uint32_t t44 = 43U;

	t44 = ((x229*x230)^(x231^x232));

	if (t44 != 2131329279U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x233 = -1;
	uint8_t x234 = 1U;
	static int64_t x235 = -1LL;
	static volatile int64_t t45 = -1196404443LL;

	t45 = ((x233*x234)^(x235^x236));

	if (t45 != 255LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x238 = 1167U;
	uint16_t x239 = 5781U;
	volatile int64_t x240 = INT64_MIN;
	static volatile int64_t t46 = -329462691090LL;

	t46 = ((x237*x238)^(x239^x240));

	if (t46 != -9223372036850802006LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x241 = UINT64_MAX;
	int64_t x244 = INT64_MIN;
	uint64_t t47 = 864216LLU;

	t47 = ((x241*x242)^(x243^x244));

	if (t47 != 9223372036854348903LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x245 = INT8_MIN;
	static volatile int64_t x248 = INT64_MAX;
	volatile int64_t t48 = -109761LL;

	t48 = ((x245*x246)^(x247^x248));

	if (t48 != 9223372036854764203LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = INT16_MIN;
	volatile int16_t x250 = INT16_MIN;
	uint64_t x251 = 272LLU;
	int8_t x252 = INT8_MIN;
	uint64_t t49 = 65307252098LLU;

	t49 = ((x249*x250)^(x251^x252));

	if (t49 != 18446744072635809424LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x253 = -1LL;
	volatile int32_t x254 = INT32_MIN;
	volatile int64_t t50 = -39LL;

	t50 = ((x253*x254)^(x255^x256));

	if (t50 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x258 = INT16_MIN;
	volatile uint64_t x259 = 1LLU;
	uint8_t x260 = 0U;
	volatile uint64_t t51 = 893216372LLU;

	t51 = ((x257*x258)^(x259^x260));

	if (t51 != 32769LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x261 = INT16_MIN;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	uint64_t t52 = 453LLU;

	t52 = ((x261*x262)^(x263^x264));

	if (t52 != 18446744073707978751LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = -1554;
	int16_t x266 = INT16_MAX;
	uint16_t x267 = 21U;
	int16_t x268 = 0;

	t53 = ((x265*x266)^(x267^x268));

	if (t53 != -50919929) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x269 = INT16_MIN;
	int32_t x271 = -1;
	static int32_t x272 = INT32_MAX;

	t54 = ((x269*x270)^(x271^x272));

	if (t54 != 2120777728) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x273 = -1;
	static uint32_t x274 = 1071405U;
	uint64_t x275 = 2606266LLU;
	volatile int8_t x276 = INT8_MIN;
	volatile uint64_t t55 = 55792228LLU;

	t55 = ((x273*x274)^(x275^x276));

	if (t55 != 18446744069418229225LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x277 = -1LL;
	static int8_t x279 = -59;
	uint64_t t56 = 1540LLU;

	t56 = ((x277*x278)^(x279^x280));

	if (t56 != 18446744073709550617LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x285 = 26720LL;
	int32_t x286 = -448;
	uint16_t x287 = UINT16_MAX;
	int64_t t57 = 1626178528939516916LL;

	t57 = ((x285*x286)^(x287^x288));

	if (t57 != 16453705LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = UINT8_MAX;
	volatile uint16_t x290 = 4025U;
	int8_t x291 = INT8_MIN;
	volatile int32_t t58 = 33636863;

	t58 = ((x289*x290)^(x291^x292));

	if (t58 != -1038024) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x293 = UINT32_MAX;
	static volatile uint8_t x294 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;

	t59 = ((x293*x294)^(x295^x296));

	if (t59 != 2147516161U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = INT8_MIN;
	static int64_t x298 = -3016LL;
	volatile int32_t x299 = -15852403;
	static volatile uint8_t x300 = 113U;
	volatile int64_t t60 = -28450LL;

	t60 = ((x297*x298)^(x299^x300));

	if (t60 != -15992580LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = -1;
	int8_t x303 = -1;
	static int32_t x304 = -229448;
	volatile int32_t t61 = 18955839;

	t61 = ((x301*x302)^(x303^x304));

	if (t61 != -229562) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	volatile int16_t x307 = -294;

	t62 = ((x305*x306)^(x307^x308));

	if (t62 != 68) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = 3;
	int16_t x310 = INT16_MIN;
	uint32_t x312 = 4107325U;

	t63 = ((x309*x310)^(x311^x312));

	if (t63 != 4290784316U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = 4787U;

	t64 = ((x313*x314)^(x315^x316));

	if (t64 != 18446744073709546829LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x317 = -1;
	int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	volatile int32_t x320 = INT32_MIN;
	int64_t t65 = -105797698LL;

	t65 = ((x317*x318)^(x319^x320));

	if (t65 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x322 = 0;
	static volatile uint16_t x323 = 19688U;
	uint32_t x324 = UINT32_MAX;
	int64_t t66 = -1532212456607LL;

	t66 = ((x321*x322)^(x323^x324));

	if (t66 != 4294947607LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x331 = INT32_MIN;
	volatile int32_t x332 = INT32_MAX;

	t67 = ((x329*x330)^(x331^x332));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x333 = 7878U;
	volatile int16_t x334 = INT16_MIN;
	int64_t x336 = INT64_MAX;

	t68 = ((x333*x334)^(x335^x336));

	if (t68 != 9223372036596662271LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x337 = 674104337U;
	uint16_t x338 = UINT16_MAX;
	uint16_t x340 = 6555U;
	volatile int64_t t69 = 2452929817363114LL;

	t69 = ((x337*x338)^(x339^x340));

	if (t69 != -30837813588LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x341 = 206;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MAX;

	t70 = ((x341*x342)^(x343^x344));

	if (t70 != 45618) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x345 = -1LL;
	static int32_t x346 = INT32_MAX;
	int64_t x348 = 57LL;
	volatile int64_t t71 = 910332426502LL;

	t71 = ((x345*x346)^(x347^x348));

	if (t71 != 2147483610LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x349 = -1LL;
	uint8_t x350 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	volatile int64_t t72 = -1606967811LL;

	t72 = ((x349*x350)^(x351^x352));

	if (t72 != 2147483394LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x357 = 1U;
	volatile uint8_t x359 = UINT8_MAX;
	int64_t x360 = 25LL;
	volatile uint64_t t73 = 2764217345108353LLU;

	t73 = ((x357*x358)^(x359^x360));

	if (t73 != 13149907910912813LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x361 = -8672796638789LL;
	uint16_t x362 = 27417U;
	int16_t x363 = -1;
	int64_t t74 = 698965257831026018LL;

	t74 = ((x361*x362)^(x363^x364));

	if (t74 != 237782065445677891LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x365 = 248769084U;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MAX;
	volatile int16_t x368 = INT16_MIN;
	int64_t t75 = -48923098LL;

	t75 = ((x365*x366)^(x367^x368));

	if (t75 != -9223372033548210629LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x373 = UINT16_MAX;
	uint64_t x374 = UINT64_MAX;
	volatile int8_t x375 = -1;
	volatile uint32_t x376 = 44767U;
	uint64_t t76 = 1556723265367183435LLU;

	t76 = ((x373*x374)^(x375^x376));

	if (t76 != 18446744069414605089LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x377 = INT8_MAX;
	volatile uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MIN;

	t77 = ((x377*x378)^(x379^x380));

	if (t77 != -8290431) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x386 = UINT16_MAX;
	uint64_t x387 = 53253327766LLU;
	uint16_t x388 = 3830U;
	uint64_t t78 = 2LLU;

	t78 = ((x385*x386)^(x387^x388));

	if (t78 != 53256895201LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x389 = 1;
	uint8_t x391 = 10U;
	uint32_t x392 = UINT32_MAX;
	static volatile uint32_t t79 = 2126510894U;

	t79 = ((x389*x390)^(x391^x392));

	if (t79 != 10U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 524U;
	volatile uint32_t t80 = 168444883U;

	t80 = ((x393*x394)^(x395^x396));

	if (t80 != 526U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;
	static int32_t x399 = -184452;
	int32_t x400 = -1;

	t81 = ((x397*x398)^(x399^x400));

	if (t81 != 168067) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x401 = 15032LLU;
	int16_t x402 = INT16_MIN;
	volatile int32_t x403 = -1;
	static uint32_t x404 = 1U;
	static uint64_t t82 = 4850733LLU;

	t82 = ((x401*x402)^(x403^x404));

	if (t82 != 18446744069907152894LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x410 = 1026417174U;
	int16_t x411 = -1;
	int16_t x412 = 97;
	static uint32_t t83 = 204269U;

	t83 = ((x409*x410)^(x411^x412));

	if (t83 != 3836445824U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 12803313761954LLU;
	volatile int64_t x415 = INT64_MIN;
	uint32_t x416 = 16U;
	volatile uint64_t t84 = 59261730LLU;

	t84 = ((x413*x414)^(x415^x416));

	if (t84 != 9223359233541013838LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x417 = 130U;
	int8_t x418 = INT8_MAX;
	uint16_t x420 = UINT16_MAX;

	t85 = ((x417*x418)^(x419^x420));

	if (t85 != -9223372036854726783LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x421 = 195874U;
	static int8_t x422 = 0;
	volatile int64_t x423 = INT64_MAX;
	static volatile int16_t x424 = INT16_MIN;

	t86 = ((x421*x422)^(x423^x424));

	if (t86 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x425 = UINT8_MAX;
	int8_t x427 = -34;
	int16_t x428 = -1;
	volatile int32_t t87 = -150;

	t87 = ((x425*x426)^(x427^x428));

	if (t87 != 38729) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x438 = UINT64_MAX;
	static int64_t x439 = INT64_MIN;
	int16_t x440 = -1;
	volatile uint64_t t88 = 7057159345680742LLU;

	t88 = ((x437*x438)^(x439^x440));

	if (t88 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x441 = INT16_MIN;
	static int64_t x444 = INT64_MIN;
	volatile uint64_t t89 = 11170354LLU;

	t89 = ((x441*x442)^(x443^x444));

	if (t89 != 9223372039002226687LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x447 = 558272445742LLU;
	static int64_t x448 = INT64_MIN;
	uint64_t t90 = 180061800LLU;

	t90 = ((x445*x446)^(x447^x448));

	if (t90 != 9223372595130989870LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x461 = -1;
	static uint64_t x462 = 4205990LLU;
	int16_t x463 = -1;
	uint32_t x464 = 21U;
	uint64_t t91 = 377336595521LLU;

	t91 = ((x461*x462)^(x463^x464));

	if (t91 != 18446744069418790320LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x481 = 10U;
	static volatile uint16_t x482 = 60U;
	int8_t x484 = 6;
	int32_t t92 = 277;

	t92 = ((x481*x482)^(x483^x484));

	if (t92 != -607) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = INT16_MAX;
	int32_t x491 = 98;

	t93 = ((x489*x490)^(x491^x492));

	if (t93 != 99U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x493 = 1011U;
	uint32_t x494 = 3832U;
	volatile uint16_t x495 = 399U;
	volatile uint32_t t94 = 28015468U;

	t94 = ((x493*x494)^(x495^x496));

	if (t94 != 18199468U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x501 = INT64_MIN;
	uint64_t x502 = 217928868LLU;
	volatile uint32_t x504 = 17606582U;
	static volatile uint64_t t95 = 45LLU;

	t95 = ((x501*x502)^(x503^x504));

	if (t95 != 4277360694LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	volatile int8_t x508 = 2;
	uint32_t t96 = 650U;

	t96 = ((x505*x506)^(x507^x508));

	if (t96 != 2147483653U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x517 = INT8_MAX;
	int64_t x518 = -1LL;
	int64_t x519 = 363839306697022LL;
	int8_t x520 = INT8_MIN;
	int64_t t97 = 46652310357223950LL;

	t97 = ((x517*x518)^(x519^x520));

	if (t97 != 363839306697023LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x521 = 34U;
	int16_t x522 = INT16_MIN;
	uint16_t x523 = UINT16_MAX;
	static int8_t x524 = INT8_MIN;
	int32_t t98 = 12;

	t98 = ((x521*x522)^(x523^x524));

	if (t98 != 1048703) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x525 = -1;
	static int32_t x526 = 9;
	uint64_t x527 = UINT64_MAX;
	int64_t x528 = INT64_MIN;
	uint64_t t99 = 84377387875851LLU;

	t99 = ((x525*x526)^(x527^x528));

	if (t99 != 9223372036854775816LLU) { NG(); } else { ; }
	
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

