#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -6;
uint32_t x6 = UINT32_MAX;
int16_t x10 = -867;
int32_t x17 = INT32_MIN;
volatile int32_t x23 = 101;
int16_t x32 = INT16_MIN;
static uint16_t x33 = 6U;
uint64_t x34 = 1529LLU;
int32_t x42 = 1588;
volatile uint64_t x43 = 487LLU;
int64_t x47 = -1LL;
int32_t x48 = 0;
int64_t x49 = -19770184725604781LL;
int64_t x50 = INT64_MIN;
uint64_t x74 = UINT64_MAX;
static int8_t x83 = -3;
uint64_t t17 = 30480395879LLU;
int8_t x97 = INT8_MIN;
static volatile int8_t x98 = INT8_MIN;
int32_t x104 = 60213505;
static uint32_t x111 = 125U;
volatile uint32_t t20 = 1397281U;
volatile int8_t x119 = -1;
int32_t x131 = 29;
static volatile int64_t t23 = 720700727847644LL;
int32_t x134 = -1;
static volatile int16_t x146 = 792;
uint16_t x149 = UINT16_MAX;
int16_t x150 = INT16_MIN;
static int32_t x152 = -1;
static int64_t x160 = 14619617733104LL;
volatile uint32_t x164 = 6U;
static volatile uint32_t x165 = 602636U;
volatile int64_t t31 = 259LL;
volatile int8_t x182 = INT8_MIN;
uint64_t t33 = 862763773903506453LLU;
int64_t t36 = -1186765186134328356LL;
int16_t x201 = -14049;
volatile int32_t x216 = INT32_MAX;
volatile int8_t x217 = 37;
int64_t x218 = -11LL;
uint8_t x219 = 2U;
static uint16_t x220 = 2U;
volatile int64_t t40 = 359LL;
static volatile int64_t t43 = -35LL;
uint8_t x235 = 8U;
volatile int8_t x237 = INT8_MAX;
int16_t x239 = INT16_MAX;
uint64_t x251 = UINT64_MAX;
uint64_t t48 = 1959930475296LLU;
int8_t x255 = INT8_MIN;
int16_t x256 = INT16_MIN;
int8_t x258 = INT8_MIN;
volatile int8_t x275 = INT8_MIN;
volatile int64_t x277 = -7972LL;
uint32_t x280 = 21U;
static volatile int32_t t54 = 6;
int32_t x289 = -218915144;
int16_t x297 = 113;
uint8_t x299 = 4U;
volatile uint16_t x300 = 6265U;
static int32_t x301 = -24779;
static int64_t x303 = -1LL;
int8_t x305 = -1;
static int32_t x308 = INT32_MAX;
int32_t t59 = -71393;
int32_t x315 = -1;
volatile int64_t x316 = 9306834820LL;
int64_t t60 = -16478131744LL;
static int8_t x331 = INT8_MIN;
static int8_t x337 = -4;
uint32_t x339 = UINT32_MAX;
uint16_t x340 = UINT16_MAX;
int64_t x345 = -1LL;
static volatile uint64_t t71 = 2736099LLU;
int16_t x383 = INT16_MAX;
int16_t x390 = -1;
int8_t x391 = INT8_MIN;
volatile int16_t x395 = -1;
uint64_t t76 = 137220610878LLU;
int16_t x420 = INT16_MAX;
static uint16_t x421 = 13U;
int8_t x425 = -8;
int64_t x427 = INT64_MIN;
int8_t x431 = -1;
uint8_t x437 = 0U;
static volatile int32_t x440 = INT32_MAX;
uint16_t x452 = 5U;
static int64_t x453 = -1LL;
volatile int16_t x456 = INT16_MIN;
uint16_t x462 = 42U;
int32_t x471 = -1960775;
int32_t t87 = -17;
volatile int64_t t88 = 43639988LL;
int32_t x478 = 8297;
int64_t x482 = 15549554582077LL;
volatile uint32_t x486 = 1356274U;
int16_t x487 = -4;
volatile int64_t t91 = -1710LL;
uint16_t x489 = 12919U;
volatile int64_t x497 = 215353317LL;
uint8_t x499 = 13U;
static int32_t x519 = -2179841;
int32_t x522 = INT32_MIN;
uint64_t t99 = 38580459LLU;


void f0(void) {
	int32_t x2 = INT32_MIN;
	volatile uint32_t x3 = UINT32_MAX;
	static int16_t x4 = -1717;
	volatile uint32_t t0 = 14U;

	t0 = (((x1-x2)|x3)+x4);

	if (t0 != 4294965578U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2016332283U;
	volatile uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 482935LLU;
	static uint64_t t1 = 104LLU;

	t1 = (((x5-x6)|x7)+x8);

	if (t1 != 2016815222LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 58U;
	int16_t x11 = 15364;
	volatile uint32_t x12 = 61220U;
	uint32_t t2 = 487793362U;

	t2 = (((x9-x10)|x11)+x12);

	if (t2 != 77505U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint8_t x14 = 1U;
	int16_t x15 = 12;
	int64_t x16 = -33650883265LL;
	static volatile int64_t t3 = -18LL;

	t3 = (((x13-x14)|x15)+x16);

	if (t3 != -33650883267LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -664455101;
	volatile uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 908U;
	uint32_t t4 = 334908U;

	t4 = (((x17-x18)|x19)+x20);

	if (t4 != 2811954059U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static int32_t x22 = 3986780;
	static int8_t x24 = -1;
	static uint64_t t5 = 26805660927LLU;

	t5 = (((x21-x22)|x23)+x24);

	if (t5 != 18446744073705564902LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile uint8_t x26 = 13U;
	uint8_t x27 = 0U;
	int8_t x28 = -16;
	volatile int32_t t6 = -533559868;

	t6 = (((x25-x26)|x27)+x28);

	if (t6 != -157) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static uint64_t x30 = 7036077293309000867LLU;
	int16_t x31 = 0;
	uint64_t t7 = 908854400952323615LLU;

	t7 = (((x29-x30)|x31)+x32);

	if (t7 != 11410666784695485276LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = -10;
	static int64_t x36 = -1LL;
	volatile uint64_t t8 = 15570214LLU;

	t8 = (((x33-x34)|x35)+x36);

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	static uint64_t x44 = 35844LLU;
	uint64_t t9 = 319246334LLU;

	t9 = (((x41-x42)|x43)+x44);

	if (t9 != 1523LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x45 = 52518U;
	int8_t x46 = INT8_MAX;
	int64_t t10 = 329542798LL;

	t10 = (((x45-x46)|x47)+x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x51 = 0U;
	static volatile int64_t x52 = -11863078048332LL;
	int64_t t11 = 1LL;

	t11 = (((x49-x50)|x51)+x52);

	if (t11 != 9203589989051122695LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = 4679310U;
	static int8_t x67 = 11;
	volatile int8_t x68 = -5;
	uint32_t t12 = 0U;

	t12 = (((x65-x66)|x67)+x68);

	if (t12 != 4290287862U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MIN;
	static int8_t x71 = -2;
	static volatile int16_t x72 = 47;
	volatile int64_t t13 = 1410418185795LL;

	t13 = (((x69-x70)|x71)+x72);

	if (t13 != 45LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 46U;
	uint64_t t14 = 511903480LLU;

	t14 = (((x73-x74)|x75)+x76);

	if (t14 != 18446744071562133550LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -1077;
	int64_t x82 = -1LL;
	int32_t x84 = INT32_MIN;
	volatile int64_t t15 = -188909923461LL;

	t15 = (((x81-x82)|x83)+x84);

	if (t15 != -2147483651LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MAX;
	volatile uint64_t x90 = UINT64_MAX;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = INT16_MIN;
	volatile uint64_t t16 = 49125791LLU;

	t16 = (((x89-x90)|x91)+x92);

	if (t16 != 4294934527LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MIN;
	int8_t x95 = -12;
	uint8_t x96 = UINT8_MAX;

	t17 = (((x93-x94)|x95)+x96);

	if (t17 != 254LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x99 = 24;
	uint64_t x100 = 103487327571LLU;
	volatile uint64_t t18 = 9365862360918472LLU;

	t18 = (((x97-x98)|x99)+x100);

	if (t18 != 103487327595LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = INT8_MIN;
	uint16_t x102 = 3U;
	static int8_t x103 = INT8_MAX;
	int32_t t19 = -12;

	t19 = (((x101-x102)|x103)+x104);

	if (t19 != 60213376) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = -1;
	static int32_t x112 = -1;

	t20 = (((x109-x110)|x111)+x112);

	if (t20 != 2147483772U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = -4162097LL;
	int16_t x118 = -1;
	int32_t x120 = 671;
	int64_t t21 = 25765938LL;

	t21 = (((x117-x118)|x119)+x120);

	if (t21 != 670LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = 293U;
	int16_t x126 = 9;
	int64_t x127 = -1LL;
	int32_t x128 = INT32_MAX;
	int64_t t22 = -1439872372LL;

	t22 = (((x125-x126)|x127)+x128);

	if (t22 != 2147483646LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x129 = 8U;
	int16_t x130 = INT16_MAX;
	int64_t x132 = -1LL;

	t23 = (((x129-x130)|x131)+x132);

	if (t23 != -32740LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x133 = UINT64_MAX;
	uint16_t x135 = 23U;
	uint32_t x136 = UINT32_MAX;
	volatile uint64_t t24 = 48248609487188LLU;

	t24 = (((x133-x134)|x135)+x136);

	if (t24 != 4294967318LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MIN;
	static int16_t x139 = INT16_MIN;
	volatile uint32_t x140 = 233379504U;
	static volatile int64_t t25 = -14854437948LL;

	t25 = (((x137-x138)|x139)+x140);

	if (t25 != 233346736LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = 6;
	volatile int16_t x142 = -12915;
	static int16_t x143 = INT16_MIN;
	static int16_t x144 = INT16_MAX;
	int32_t t26 = 37005;

	t26 = (((x141-x142)|x143)+x144);

	if (t26 != 12920) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 1U;
	uint64_t x147 = UINT64_MAX;
	uint8_t x148 = 1U;
	uint64_t t27 = 42033804LLU;

	t27 = (((x145-x146)|x147)+x148);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x151 = INT16_MAX;
	int32_t t28 = -15820;

	t28 = (((x149-x150)|x151)+x152);

	if (t28 != 98302) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x157 = INT8_MIN;
	int8_t x158 = -4;
	int32_t x159 = INT32_MIN;
	volatile int64_t t29 = 1007536LL;

	t29 = (((x157-x158)|x159)+x160);

	if (t29 != 14619617732980LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x161 = 16U;
	int16_t x162 = INT16_MIN;
	int32_t x163 = -1;
	uint32_t t30 = 12185U;

	t30 = (((x161-x162)|x163)+x164);

	if (t30 != 5U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x166 = 116849360;
	int64_t x167 = INT64_MIN;
	static int8_t x168 = 1;

	t31 = (((x165-x166)|x167)+x168);

	if (t31 != -9223372032676055235LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = -3364910304LL;
	int32_t x171 = 14211563;
	int64_t x172 = INT64_MIN;
	int64_t t32 = -26303192LL;

	t32 = (((x169-x170)|x171)+x172);

	if (t32 != -9223372033485111809LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = 19U;
	static uint64_t x183 = 7660LLU;
	int32_t x184 = INT32_MAX;

	t33 = (((x181-x182)|x183)+x184);

	if (t33 != 2147491326LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x185 = INT16_MIN;
	static uint64_t x186 = 65980383001823396LLU;
	int16_t x187 = 1401;
	volatile int32_t x188 = -1;
	volatile uint64_t t34 = 6386995371969957457LLU;

	t34 = (((x185-x186)|x187)+x188);

	if (t34 != 18380763690707695484LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	static int16_t x192 = INT16_MIN;
	int64_t t35 = -10LL;

	t35 = (((x189-x190)|x191)+x192);

	if (t35 != -65663LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x197 = 26791U;
	static int64_t x198 = 54322174LL;
	volatile int8_t x199 = INT8_MAX;
	uint32_t x200 = 1U;

	t36 = (((x197-x198)|x199)+x200);

	if (t36 != -54295296LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x202 = UINT16_MAX;
	static uint8_t x203 = UINT8_MAX;
	static uint64_t x204 = 493LLU;
	static uint64_t t37 = 507LLU;

	t37 = (((x201-x202)|x203)+x204);

	if (t37 != 18446744073709472748LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x209 = 51200749LLU;
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MIN;
	static uint8_t x212 = 0U;
	volatile uint64_t t38 = 37639LLU;

	t38 = (((x209-x210)|x211)+x212);

	if (t38 != 18446744073709535982LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x213 = UINT8_MAX;
	static uint8_t x214 = 1U;
	uint64_t x215 = 11875377LLU;
	uint64_t t39 = 3751141493978238954LLU;

	t39 = (((x213-x214)|x215)+x216);

	if (t39 != 2159359230LLU) { NG(); } else { ; }
	
}

void f40(void) {


	t40 = (((x217-x218)|x219)+x220);

	if (t40 != 52LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x221 = 211U;
	uint32_t x222 = 230968U;
	static uint32_t x223 = 421245U;
	volatile uint16_t x224 = 59U;
	uint32_t t41 = 29U;

	t41 = (((x221-x222)|x223)+x224);

	if (t41 != 4294869050U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x225 = INT32_MAX;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t42 = 46534469974LL;

	t42 = (((x225-x226)|x227)+x228);

	if (t42 != -9223372034707357441LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x229 = 53U;
	static int64_t x230 = -1LL;
	int64_t x231 = INT64_MIN;
	int32_t x232 = -1;

	t43 = (((x229-x230)|x231)+x232);

	if (t43 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x233 = -41873498307107972LL;
	int32_t x234 = INT32_MAX;
	int32_t x236 = -1028365;
	volatile int64_t t44 = -25838630760421391LL;

	t44 = (((x233-x234)|x235)+x236);

	if (t44 != -41873500455619984LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x238 = -1;
	volatile int8_t x240 = INT8_MIN;
	int32_t t45 = -231;

	t45 = (((x237-x238)|x239)+x240);

	if (t45 != 32639) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = 57639943U;
	static int16_t x242 = -42;
	volatile int16_t x243 = INT16_MIN;
	static int32_t x244 = -26485;
	volatile uint32_t t46 = 36556886U;

	t46 = (((x241-x242)|x243)+x244);

	if (t46 != 4294909116U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int8_t x246 = -1;
	uint8_t x247 = 3U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t47 = -24694931968003LL;

	t47 = (((x245-x246)|x247)+x248);

	if (t47 != -9223372036854710269LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = -1LL;
	int32_t x250 = -1;
	int64_t x252 = INT64_MIN;

	t48 = (((x249-x250)|x251)+x252);

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = INT32_MIN;
	int64_t x254 = 388645376LL;
	int64_t t49 = -2LL;

	t49 = (((x253-x254)|x255)+x256);

	if (t49 != -32896LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x257 = UINT64_MAX;
	static uint64_t x259 = 339768940432169695LLU;
	int8_t x260 = -1;
	uint64_t t50 = 76LLU;

	t50 = (((x257-x258)|x259)+x260);

	if (t50 != 339768940432169726LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x269 = 1432865445U;
	volatile int16_t x270 = 1600;
	static volatile uint16_t x271 = 228U;
	int8_t x272 = INT8_MIN;
	uint32_t t51 = 84U;

	t51 = (((x269-x270)|x271)+x272);

	if (t51 != 1432863845U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MIN;
	volatile uint8_t x276 = UINT8_MAX;
	static volatile int32_t t52 = 16563;

	t52 = (((x273-x274)|x275)+x276);

	if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x278 = 13064U;
	int32_t x279 = -1;
	volatile int64_t t53 = 1937LL;

	t53 = (((x277-x278)|x279)+x280);

	if (t53 != 20LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = 13705;
	volatile int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	volatile int16_t x288 = -1;

	t54 = (((x285-x286)|x287)+x288);

	if (t54 != 13694) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x290 = UINT16_MAX;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t55 = 3318836054LLU;

	t55 = (((x289-x290)|x291)+x292);

	if (t55 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x298 = INT32_MAX;
	int32_t t56 = -17400;

	t56 = (((x297-x298)|x299)+x300);

	if (t56 != -2147477265) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x302 = -9429807126745802LL;
	int32_t x304 = 30440376;
	int64_t t57 = 45690227952LL;

	t57 = (((x301-x302)|x303)+x304);

	if (t57 != 30440375LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x306 = INT64_MAX;
	int64_t x307 = INT64_MIN;
	volatile int64_t t58 = 8385848708989LL;

	t58 = (((x305-x306)|x307)+x308);

	if (t58 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x309 = INT16_MIN;
	volatile uint16_t x310 = 60U;
	uint16_t x311 = UINT16_MAX;
	static uint16_t x312 = UINT16_MAX;

	t59 = (((x309-x310)|x311)+x312);

	if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x313 = 453662056599267LL;
	uint8_t x314 = UINT8_MAX;

	t60 = (((x313-x314)|x315)+x316);

	if (t60 != 9306834819LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x317 = INT8_MIN;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = 8;
	static int32_t x320 = INT32_MAX;
	volatile int32_t t61 = -1439;

	t61 = (((x317-x318)|x319)+x320);

	if (t61 != 2147417992) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	int64_t x323 = 942872794302LL;
	volatile int16_t x324 = INT16_MIN;
	int64_t t62 = -2104862LL;

	t62 = (((x321-x322)|x323)+x324);

	if (t62 != -32834LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x325 = 43U;
	volatile int16_t x326 = INT16_MAX;
	int64_t x327 = INT64_MAX;
	volatile uint32_t x328 = 10778406U;
	volatile int64_t t63 = 131506138LL;

	t63 = (((x325-x326)|x327)+x328);

	if (t63 != 10778405LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x329 = 795117U;
	volatile uint16_t x330 = UINT16_MAX;
	volatile int16_t x332 = -15;
	uint32_t t64 = 223U;

	t64 = (((x329-x330)|x331)+x332);

	if (t64 != 4294967263U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x338 = -4;
	volatile uint32_t t65 = 3U;

	t65 = (((x337-x338)|x339)+x340);

	if (t65 != 65534U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x346 = INT16_MIN;
	static uint64_t x347 = 23857453902674659LLU;
	int16_t x348 = -50;
	static volatile uint64_t t66 = 31132145984LLU;

	t66 = (((x345-x346)|x347)+x348);

	if (t66 != 23857453902692301LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x349 = -1;
	static uint16_t x350 = 30U;
	volatile int8_t x351 = INT8_MIN;
	volatile uint32_t x352 = 1413U;
	static uint32_t t67 = 35986U;

	t67 = (((x349-x350)|x351)+x352);

	if (t67 != 1382U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x353 = 429U;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	int32_t t68 = -90446;

	t68 = (((x353-x354)|x355)+x356);

	if (t68 != -2147450196) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = -357;
	volatile int32_t t69 = -300247764;

	t69 = (((x357-x358)|x359)+x360);

	if (t69 != -102) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 1101U;
	int32_t x364 = INT32_MAX;
	volatile uint32_t t70 = 32259282U;

	t70 = (((x361-x362)|x363)+x364);

	if (t70 != 2147484748U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	int8_t x367 = 23;
	volatile int16_t x368 = -23;

	t71 = (((x365-x366)|x367)+x368);

	if (t71 != 2147483624LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	volatile int8_t x371 = INT8_MIN;
	volatile int8_t x372 = INT8_MIN;
	int64_t t72 = 53606LL;

	t72 = (((x369-x370)|x371)+x372);

	if (t72 != -256LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = 262;
	uint8_t x374 = 62U;
	static volatile int16_t x375 = INT16_MIN;
	uint64_t x376 = UINT64_MAX;
	uint64_t t73 = 214864334835988469LLU;

	t73 = (((x373-x374)|x375)+x376);

	if (t73 != 18446744073709519047LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x381 = INT32_MIN;
	uint64_t x382 = UINT64_MAX;
	volatile int64_t x384 = 127LL;
	volatile uint64_t t74 = 118098162969675LLU;

	t74 = (((x381-x382)|x383)+x384);

	if (t74 != 18446744071562100862LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x389 = -1;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t75 = -681105031;

	t75 = (((x389-x390)|x391)+x392);

	if (t75 != 65407) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	volatile uint64_t x394 = UINT64_MAX;
	int8_t x396 = INT8_MIN;

	t76 = (((x393-x394)|x395)+x396);

	if (t76 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x397 = -1;
	static volatile int8_t x398 = 37;
	int8_t x399 = 7;
	volatile int8_t x400 = 1;
	volatile int32_t t77 = 24;

	t77 = (((x397-x398)|x399)+x400);

	if (t77 != -32) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = -92729736LL;
	uint16_t x419 = 23696U;
	volatile int64_t t78 = -1092LL;

	t78 = (((x417-x418)|x419)+x420);

	if (t78 != -2054718057LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x422 = 0;
	static uint64_t x423 = UINT64_MAX;
	uint16_t x424 = UINT16_MAX;
	volatile uint64_t t79 = 21415842010LLU;

	t79 = (((x421-x422)|x423)+x424);

	if (t79 != 65534LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x426 = INT8_MAX;
	uint32_t x428 = 1140975261U;
	int64_t t80 = 4340503810LL;

	t80 = (((x425-x426)|x427)+x428);

	if (t80 != 1140975126LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x429 = INT8_MAX;
	uint32_t x430 = 8576780U;
	int64_t x432 = INT64_MIN;
	volatile int64_t t81 = 1544780LL;

	t81 = (((x429-x430)|x431)+x432);

	if (t81 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x438 = UINT64_MAX;
	int16_t x439 = -10;
	static uint64_t t82 = 12817LLU;

	t82 = (((x437-x438)|x439)+x440);

	if (t82 != 2147483638LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x441 = 20944U;
	static volatile uint32_t x442 = 1240U;
	volatile int32_t x443 = INT32_MIN;
	volatile int64_t x444 = INT64_MIN;
	int64_t t83 = -106620269317963LL;

	t83 = (((x441-x442)|x443)+x444);

	if (t83 != -9223372034707272456LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = 9U;
	int16_t x450 = INT16_MIN;
	uint8_t x451 = 0U;
	volatile int32_t t84 = -43257609;

	t84 = (((x449-x450)|x451)+x452);

	if (t84 != 32782) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x454 = 1824U;
	static int64_t x455 = -1LL;
	volatile int64_t t85 = 8717651715LL;

	t85 = (((x453-x454)|x455)+x456);

	if (t85 != -32769LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = INT16_MAX;
	uint8_t x463 = 1U;
	volatile int32_t x464 = -71152;
	volatile int32_t t86 = 12006;

	t86 = (((x461-x462)|x463)+x464);

	if (t86 != -38427) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x469 = -248918;
	volatile int8_t x470 = INT8_MIN;
	volatile int16_t x472 = -4089;

	t87 = (((x469-x470)|x471)+x472);

	if (t87 != -121662) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x473 = -1LL;
	volatile int16_t x474 = INT16_MAX;
	volatile int16_t x475 = 2;
	static uint32_t x476 = 238667U;

	t88 = (((x473-x474)|x475)+x476);

	if (t88 != 205901LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x477 = -1;
	int32_t x479 = INT32_MIN;
	volatile int32_t x480 = 61957256;
	static volatile int32_t t89 = 250578;

	t89 = (((x477-x478)|x479)+x480);

	if (t89 != 61948958) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x481 = UINT16_MAX;
	int32_t x483 = 2466703;
	int64_t x484 = -1LL;
	int64_t t90 = 9232968814384LL;

	t90 = (((x481-x482)|x483)+x484);

	if (t90 != -15549552148530LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x485 = -3;
	int64_t x488 = INT64_MIN;

	t91 = (((x485-x486)|x487)+x488);

	if (t91 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x490 = 102U;
	uint64_t x491 = 128106947790LLU;
	volatile uint32_t x492 = UINT32_MAX;
	static volatile uint64_t t92 = 9401LLU;

	t92 = (((x489-x490)|x491)+x492);

	if (t92 != 132401919710LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x498 = 1U;
	int32_t x500 = INT32_MIN;
	int64_t t93 = 2LL;

	t93 = (((x497-x498)|x499)+x500);

	if (t93 != -1932130323LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x505 = INT16_MIN;
	int8_t x506 = INT8_MIN;
	volatile int64_t x507 = -14LL;
	uint16_t x508 = 18U;
	volatile int64_t t94 = 14945073LL;

	t94 = (((x505-x506)|x507)+x508);

	if (t94 != 4LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x509 = INT32_MIN;
	int16_t x510 = -206;
	static uint16_t x511 = UINT16_MAX;
	int8_t x512 = -1;
	int32_t t95 = -3;

	t95 = (((x509-x510)|x511)+x512);

	if (t95 != -2147418114) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x513 = 89407995U;
	static int16_t x514 = INT16_MIN;
	static int64_t x515 = INT64_MAX;
	int64_t x516 = INT64_MIN;
	volatile int64_t t96 = -18407147LL;

	t96 = (((x513-x514)|x515)+x516);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x517 = INT32_MIN;
	volatile uint32_t x518 = UINT32_MAX;
	volatile int8_t x520 = INT8_MIN;
	uint32_t t97 = 3584115U;

	t97 = (((x517-x518)|x519)+x520);

	if (t97 != 4292787327U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x521 = -59839;
	int8_t x523 = -1;
	int32_t x524 = -1;
	int32_t t98 = 872665605;

	t98 = (((x521-x522)|x523)+x524);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x525 = 0;
	uint64_t x526 = 1169484745348026808LLU;
	int32_t x527 = INT32_MIN;
	int8_t x528 = INT8_MAX;

	t99 = (((x525-x526)|x527)+x528);

	if (t99 != 18446744073697685191LLU) { NG(); } else { ; }
	
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

