#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 25U;
uint8_t x4 = UINT8_MAX;
uint64_t t0 = 245655302011452LLU;
volatile int8_t x6 = -1;
int8_t x8 = INT8_MIN;
int32_t x10 = -427;
uint64_t t3 = 7110635463006LLU;
int16_t x20 = INT16_MIN;
volatile int64_t t4 = 273169416211579LL;
int8_t x23 = 52;
int8_t x28 = 0;
int16_t x32 = 486;
volatile uint64_t t7 = 1495LLU;
volatile uint8_t x33 = 4U;
int8_t x35 = 0;
uint8_t x38 = 75U;
int8_t x39 = INT8_MIN;
volatile int16_t x50 = INT16_MIN;
int64_t x54 = -1LL;
volatile int8_t x65 = INT8_MIN;
uint64_t t16 = 7427893521LLU;
int16_t x73 = INT16_MIN;
int64_t x78 = INT64_MIN;
int64_t x81 = -1LL;
int32_t t21 = -3;
volatile uint32_t x92 = 10099897U;
volatile int8_t x98 = INT8_MAX;
int64_t x99 = INT64_MIN;
volatile int64_t t23 = 23072512238147302LL;
static int8_t x102 = -1;
int16_t x103 = INT16_MAX;
uint16_t x105 = UINT16_MAX;
int16_t x120 = INT16_MAX;
int8_t x123 = -4;
int8_t x125 = INT8_MIN;
static int8_t x128 = INT8_MIN;
static int64_t x152 = -1LL;
volatile int8_t x153 = -1;
int16_t x156 = 1;
static volatile uint64_t t33 = 12LLU;
int32_t x169 = INT32_MIN;
int8_t x171 = -17;
int8_t x173 = 1;
uint64_t x189 = UINT64_MAX;
int16_t x194 = -62;
volatile uint32_t t40 = 43U;
static uint8_t x202 = 0U;
volatile int32_t x213 = INT32_MIN;
int32_t t44 = -8074526;
int64_t x221 = INT64_MIN;
int32_t x234 = INT32_MAX;
int8_t x236 = -9;
uint64_t x242 = 9LLU;
int32_t x248 = -1;
uint64_t t51 = 137732833295LLU;
uint32_t x275 = 115U;
uint64_t t53 = 135020LLU;
volatile int64_t x283 = 98459374LL;
volatile int32_t x288 = -1;
uint64_t x302 = UINT64_MAX;
int8_t x306 = INT8_MAX;
int32_t t59 = 16;
int32_t x309 = -172827;
int8_t x312 = -1;
volatile int8_t x316 = -27;
static int8_t x318 = 19;
uint8_t x320 = 2U;
volatile uint32_t x322 = 95U;
volatile int64_t x326 = -46908429341LL;
int64_t x327 = INT64_MIN;
volatile uint64_t t65 = 2268785LLU;
static int64_t x335 = 429666LL;
volatile int32_t t67 = -4716;
int16_t x341 = INT16_MIN;
uint32_t x344 = 1U;
volatile uint64_t x349 = 3462660789007974LLU;
uint16_t x366 = UINT16_MAX;
static int8_t x376 = INT8_MAX;
int8_t x378 = -1;
static uint32_t x382 = 4060U;
int64_t x384 = 102545LL;
int32_t x390 = -1;
int16_t x391 = INT16_MIN;
static int64_t x393 = -2955288768104LL;
volatile uint8_t x400 = 117U;
int32_t x405 = -1;
volatile int64_t t81 = 0LL;
volatile int16_t x412 = INT16_MAX;
int16_t x417 = INT16_MAX;
int32_t x425 = -36;
volatile uint32_t x426 = UINT32_MAX;
uint8_t x428 = 0U;
uint32_t t84 = 1U;
volatile int32_t t86 = -985272772;
static int16_t x442 = INT16_MIN;
int32_t x445 = INT32_MIN;
static uint64_t x447 = 10886LLU;
int8_t x451 = INT8_MIN;
int32_t t89 = 891213;
uint64_t x458 = 53396538641LLU;
static uint32_t x460 = 503U;
volatile uint64_t t91 = 652324809592760LLU;
uint16_t x462 = 4975U;
volatile uint8_t x463 = 0U;
int8_t x478 = -13;
static int8_t x485 = INT8_MAX;
int8_t x486 = INT8_MIN;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	uint16_t x3 = UINT16_MAX;

	t0 = (x1+((x2|x3)+x4));

	if (t0 != 279LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 13593U;
	int64_t x7 = INT64_MAX;
	volatile int64_t t1 = 15224285LL;

	t1 = (x5+((x6|x7)+x8));

	if (t1 != 13464LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 509048;

	t2 = (x9+((x10|x11)+x12));

	if (t2 != 65661) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 191836337LLU;
	volatile int64_t x14 = -14LL;
	int8_t x15 = -1;
	int8_t x16 = -1;

	t3 = (x13+((x14|x15)+x16));

	if (t3 != 191836335LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = 83U;
	int64_t x19 = 1063230456152598177LL;

	t4 = (x17+((x18|x19)+x20));

	if (t4 != 1063230454005081843LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 1101509788U;
	int32_t x22 = -1;
	uint8_t x24 = 4U;
	static volatile uint32_t t5 = 1376406855U;

	t5 = (x21+((x22|x23)+x24));

	if (t5 != 1101509791U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = 0U;
	volatile int8_t x27 = INT8_MAX;
	volatile int32_t t6 = 3801;

	t6 = (x25+((x26|x27)+x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	int16_t x30 = -1;
	uint64_t x31 = 24554294LLU;

	t7 = (x29+((x30|x31)+x32));

	if (t7 != 33252LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x34 = INT16_MIN;
	uint64_t x36 = 952434231614782220LLU;
	static volatile uint64_t t8 = 5854031873LLU;

	t8 = (x33+((x34|x35)+x36));

	if (t8 != 952434231614749456LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int16_t x40 = -1;
	int32_t t9 = -6044;

	t9 = (x37+((x38|x39)+x40));

	if (t9 != -182) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 513444674U;
	static int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	volatile int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -8LL;

	t10 = (x41+((x42|x43)+x44));

	if (t10 != -1634071742LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 285;
	static volatile int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 3777U;
	volatile int32_t t11 = 15855326;

	t11 = (x45+((x46|x47)+x48));

	if (t11 != 4061) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = 1;
	static int64_t t12 = INT64_MIN;

	t12 = (x49+((x50|x51)+x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	int64_t t13 = 3398854221059138059LL;

	t13 = (x53+((x54|x55)+x56));

	if (t13 != 2147450878LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int16_t x58 = INT16_MAX;
	uint32_t x59 = 1920021219U;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -962599LL;

	t14 = (x57+((x58|x59)+x60));

	if (t14 != -9223372034934734594LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -266799768LL;
	int32_t x62 = -2307;
	int16_t x63 = -1;
	static uint8_t x64 = 93U;
	int64_t t15 = -499041176356707180LL;

	t15 = (x61+((x62|x63)+x64));

	if (t15 != -266799676LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	static int8_t x67 = INT8_MIN;
	volatile uint64_t x68 = UINT64_MAX;

	t16 = (x65+((x66|x67)+x68));

	if (t16 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 267737LLU;
	int64_t x70 = INT64_MAX;
	static volatile int16_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	uint64_t t17 = 538168959410LLU;

	t17 = (x69+((x70|x71)+x72));

	if (t17 != 333271LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	static uint64_t x75 = 5529969563LLU;
	uint16_t x76 = UINT16_MAX;
	static volatile uint64_t t18 = 232LLU;

	t18 = (x73+((x74|x75)+x76));

	if (t18 != 32766LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int32_t x79 = -112762;
	static volatile int64_t x80 = -24653197334196LL;
	volatile int64_t t19 = -3642LL;

	t19 = (x77+((x78|x79)+x80));

	if (t19 != -24653197446959LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	uint64_t x83 = UINT64_MAX;
	uint64_t x84 = 675LLU;
	volatile uint64_t t20 = 485892448046626265LLU;

	t20 = (x81+((x82|x83)+x84));

	if (t20 != 673LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	volatile int16_t x87 = -1;
	volatile int8_t x88 = 1;

	t21 = (x85+((x86|x87)+x88));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	static uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;
	uint32_t t22 = 595165U;

	t22 = (x89+((x90|x91)+x92));

	if (t22 != 10165431U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	static volatile int64_t x100 = 2366828214770160LL;

	t23 = (x97+((x98|x99)+x100));

	if (t23 != -9221005208640005649LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = 20493U;
	uint32_t x104 = 1049153810U;
	volatile uint32_t t24 = 2U;

	t24 = (x101+((x102|x103)+x104));

	if (t24 != 1049174302U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MIN;
	volatile int16_t x107 = 1;
	int32_t x108 = -4;
	volatile int32_t t25 = -1045555;

	t25 = (x105+((x106|x107)+x108));

	if (t25 != 32764) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x117 = INT64_MIN;
	static int8_t x118 = -1;
	int16_t x119 = -1;
	volatile int64_t t26 = 980690049822694LL;

	t26 = (x117+((x118|x119)+x120));

	if (t26 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = INT64_MIN;
	volatile int8_t x122 = 3;
	int16_t x124 = 13;
	int64_t t27 = -89065LL;

	t27 = (x121+((x122|x123)+x124));

	if (t27 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x126 = 2U;
	static int32_t x127 = 17490;
	int32_t t28 = -198297360;

	t28 = (x125+((x126|x127)+x128));

	if (t28 != 17234) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MAX;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	volatile uint32_t x136 = 223U;
	volatile uint64_t t29 = 7599156943540610385LLU;

	t29 = (x133+((x134|x135)+x136));

	if (t29 != 2147483869LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = INT8_MAX;
	static int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -1;
	int32_t t30 = -1;

	t30 = (x137+((x138|x139)+x140));

	if (t30 != 125) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	static int8_t x150 = INT8_MIN;
	volatile uint8_t x151 = UINT8_MAX;
	static volatile int64_t t31 = -15055649344LL;

	t31 = (x149+((x150|x151)+x152));

	if (t31 != 4294967293LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = 1U;
	static volatile int64_t x155 = -1LL;
	int64_t t32 = -16299LL;

	t32 = (x153+((x154|x155)+x156));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 3887113944LLU;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -3071LL;
	volatile int16_t x164 = -121;

	t33 = (x161+((x162|x163)+x164));

	if (t33 != 3887110752LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x165 = INT64_MAX;
	int32_t x166 = INT32_MIN;
	int32_t x167 = 97338083;
	static int16_t x168 = -1;
	int64_t t34 = -2LL;

	t34 = (x165+((x166|x167)+x168));

	if (t34 != 9223372034804630241LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x170 = 29U;
	uint8_t x172 = 27U;
	static int32_t t35 = 1;

	t35 = (x169+((x170|x171)+x172));

	if (t35 != -2147483622) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x174 = -1;
	volatile uint16_t x175 = 4U;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x173+((x174|x175)+x176));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = 0;
	int32_t x178 = 1;
	volatile uint32_t x179 = 21590U;
	volatile int8_t x180 = -1;
	uint32_t t37 = 1357726U;

	t37 = (x177+((x178|x179)+x180));

	if (t37 != 21590U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x185 = -1LL;
	int16_t x186 = 0;
	int16_t x187 = 216;
	int8_t x188 = INT8_MIN;
	int64_t t38 = 801615613LL;

	t38 = (x185+((x186|x187)+x188));

	if (t38 != 87LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x190 = 501;
	static int64_t x191 = -1LL;
	volatile int16_t x192 = 0;
	volatile uint64_t t39 = 554LLU;

	t39 = (x189+((x190|x191)+x192));

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = 6528182;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;

	t40 = (x193+((x194|x195)+x196));

	if (t40 != 6528053U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x201 = 0U;
	int32_t x203 = -1;
	static int64_t x204 = INT64_MAX;
	volatile int64_t t41 = -85091618493962LL;

	t41 = (x201+((x202|x203)+x204));

	if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x209 = INT8_MAX;
	uint64_t x210 = 258407331LLU;
	static int16_t x211 = INT16_MIN;
	int32_t x212 = -668;
	static uint64_t t42 = 5LLU;

	t42 = (x209+((x210|x211)+x212));

	if (t42 != 18446744073709549958LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x214 = INT16_MAX;
	int16_t x215 = 2856;
	uint64_t x216 = 7LLU;
	volatile uint64_t t43 = 26915600342147062LLU;

	t43 = (x213+((x214|x215)+x216));

	if (t43 != 18446744071562100742LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = 377793013;
	uint8_t x218 = 2U;
	static int8_t x219 = -57;
	volatile int16_t x220 = -1713;

	t44 = (x217+((x218|x219)+x220));

	if (t44 != 377791243) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x222 = 146869U;
	uint8_t x223 = 2U;
	static volatile int32_t x224 = -1;
	static int64_t t45 = -7764774753950225LL;

	t45 = (x221+((x222|x223)+x224));

	if (t45 != -9223372036854628938LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MAX;
	int64_t x235 = INT64_MIN;
	volatile int64_t t46 = -577649LL;

	t46 = (x233+((x234|x235)+x236));

	if (t46 != -9223372034707292043LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x237 = INT16_MAX;
	int64_t x238 = INT64_MIN;
	static volatile int8_t x239 = 3;
	uint8_t x240 = 5U;
	int64_t t47 = -160937153481LL;

	t47 = (x237+((x238|x239)+x240));

	if (t47 != -9223372036854743033LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = INT32_MIN;
	int64_t x243 = 206222967LL;
	volatile uint8_t x244 = 0U;
	volatile uint64_t t48 = 3041LLU;

	t48 = (x241+((x242|x243)+x244));

	if (t48 != 18446744071768290943LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = 139U;
	uint8_t x247 = 3U;
	static volatile int32_t t49 = -13;

	t49 = (x245+((x246|x247)+x248));

	if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MAX;
	int8_t x251 = -1;
	int8_t x252 = INT8_MAX;
	volatile int64_t t50 = 80919135209LL;

	t50 = (x249+((x250|x251)+x252));

	if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x253 = INT64_MIN;
	volatile int64_t x254 = -1LL;
	static uint64_t x255 = 1076132010932LLU;
	volatile int32_t x256 = INT32_MIN;

	t51 = (x253+((x254|x255)+x256));

	if (t51 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x257 = INT32_MIN;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = 50;
	int32_t x260 = -1;
	volatile uint32_t t52 = 795U;

	t52 = (x257+((x258|x259)+x260));

	if (t52 != 2147483646U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x273 = UINT32_MAX;
	int8_t x274 = -1;
	uint64_t x276 = 34665546009LLU;

	t53 = (x273+((x274|x275)+x276));

	if (t53 != 43255480599LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x277 = 0U;
	static volatile uint16_t x278 = 17U;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = UINT32_MAX;
	uint32_t t54 = 1570663396U;

	t54 = (x277+((x278|x279)+x280));

	if (t54 != 4294934544U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = 5;
	static uint64_t x282 = 1LLU;
	volatile int64_t x284 = INT64_MIN;
	uint64_t t55 = 321737LLU;

	t55 = (x281+((x282|x283)+x284));

	if (t55 != 9223372036953235188LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x285 = -1LL;
	static volatile int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MIN;
	volatile int64_t t56 = 263523374630LL;

	t56 = (x285+((x286|x287)+x288));

	if (t56 != -130LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x289 = 99043427482LLU;
	static uint8_t x290 = 88U;
	int64_t x291 = -1LL;
	static int8_t x292 = INT8_MAX;
	uint64_t t57 = 180872503LLU;

	t57 = (x289+((x290|x291)+x292));

	if (t57 != 99043427608LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x301 = 2990U;
	int8_t x303 = INT8_MAX;
	volatile int32_t x304 = INT32_MIN;
	uint64_t t58 = 28112825291881682LLU;

	t58 = (x301+((x302|x303)+x304));

	if (t58 != 18446744071562070957LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x305 = 2;
	static int16_t x307 = INT16_MIN;
	int16_t x308 = -1;

	t59 = (x305+((x306|x307)+x308));

	if (t59 != -32640) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x310 = -1;
	static volatile int64_t x311 = INT64_MIN;
	int64_t t60 = -4778725190LL;

	t60 = (x309+((x310|x311)+x312));

	if (t60 != -172829LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x313 = 77U;
	int8_t x314 = -1;
	int32_t x315 = INT32_MAX;
	volatile int32_t t61 = -53394;

	t61 = (x313+((x314|x315)+x316));

	if (t61 != 49) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x317 = -3LL;
	static uint64_t x319 = UINT64_MAX;
	uint64_t t62 = 1112601272601778LLU;

	t62 = (x317+((x318|x319)+x320));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x321 = -1;
	static uint64_t x323 = 476076LLU;
	uint32_t x324 = 90U;
	volatile uint64_t t63 = 48001029908237293LLU;

	t63 = (x321+((x322|x323)+x324));

	if (t63 != 476248LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x325 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	int64_t t64 = 9667613048631LL;

	t64 = (x325+((x326|x327)+x328));

	if (t64 != -46908461982LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = 21;
	uint8_t x331 = 36U;
	static uint64_t x332 = 48299LLU;

	t65 = (x329+((x330|x331)+x332));

	if (t65 != 15584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x333 = INT8_MAX;
	uint8_t x334 = UINT8_MAX;
	volatile int16_t x336 = 22;
	int64_t t66 = -167084933019433LL;

	t66 = (x333+((x334|x335)+x336));

	if (t66 != 429972LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x337 = 0;
	static uint16_t x338 = UINT16_MAX;
	volatile int8_t x339 = INT8_MAX;
	volatile int8_t x340 = INT8_MAX;

	t67 = (x337+((x338|x339)+x340));

	if (t67 != 65662) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x342 = -1;
	int16_t x343 = -1;
	uint32_t t68 = 132030716U;

	t68 = (x341+((x342|x343)+x344));

	if (t68 != 4294934528U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x345 = INT64_MAX;
	static volatile uint8_t x346 = 0U;
	int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MIN;
	int64_t t69 = -6488LL;

	t69 = (x345+((x346|x347)+x348));

	if (t69 != 32766LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x350 = INT16_MIN;
	volatile int64_t x351 = INT64_MIN;
	int32_t x352 = -77;
	volatile uint64_t t70 = 15083900LLU;

	t70 = (x349+((x350|x351)+x352));

	if (t70 != 3462660788975129LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = 77U;
	int16_t x354 = -10684;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile uint32_t t71 = 561656U;

	t71 = (x353+((x354|x355)+x356));

	if (t71 != 4294934604U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x365 = UINT64_MAX;
	static volatile int16_t x367 = INT16_MIN;
	int32_t x368 = 317;
	volatile uint64_t t72 = 322860811181792747LLU;

	t72 = (x365+((x366|x367)+x368));

	if (t72 != 315LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x369 = INT16_MAX;
	volatile int64_t x370 = 17986357378617LL;
	int32_t x371 = 19;
	int32_t x372 = INT32_MIN;
	volatile int64_t t73 = -12114764407385767LL;

	t73 = (x369+((x370|x371)+x372));

	if (t73 != 17984209927738LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = INT8_MAX;
	int32_t x374 = -26864;
	uint32_t x375 = 15430825U;
	volatile uint32_t t74 = 788U;

	t74 = (x373+((x374|x375)+x376));

	if (t74 != 4294965431U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x377 = UINT32_MAX;
	uint8_t x379 = 0U;
	uint16_t x380 = 155U;
	uint32_t t75 = 2U;

	t75 = (x377+((x378|x379)+x380));

	if (t75 != 153U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x381 = 73661025451741410LLU;
	uint8_t x383 = UINT8_MAX;
	uint64_t t76 = 740723LLU;

	t76 = (x381+((x382|x383)+x384));

	if (t76 != 73661025451848050LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x389 = 4U;
	volatile int16_t x392 = -1;
	int32_t t77 = 1;

	t77 = (x389+((x390|x391)+x392));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x394 = 598U;
	static uint32_t x395 = 733U;
	int64_t x396 = 278751975781854049LL;
	int64_t t78 = 3LL;

	t78 = (x393+((x394|x395)+x396));

	if (t78 != 278749020493086680LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x397 = 61351721117185LLU;
	int16_t x398 = 1;
	int64_t x399 = INT64_MIN;
	volatile uint64_t t79 = 19389387LLU;

	t79 = (x397+((x398|x399)+x400));

	if (t79 != 9223433388575893111LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = INT8_MIN;
	static volatile uint32_t x402 = 2401477U;
	int8_t x403 = INT8_MAX;
	static int32_t x404 = -1;
	volatile uint32_t t80 = 8791880U;

	t80 = (x401+((x402|x403)+x404));

	if (t80 != 2401406U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x406 = -2235145LL;
	volatile uint16_t x407 = UINT16_MAX;
	int32_t x408 = INT32_MIN;

	t81 = (x405+((x406|x407)+x408));

	if (t81 != -2149711874LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x409 = -29;
	uint16_t x410 = UINT16_MAX;
	static uint32_t x411 = 8U;
	static volatile uint32_t t82 = 28U;

	t82 = (x409+((x410|x411)+x412));

	if (t82 != 98273U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x418 = 11642U;
	int16_t x419 = INT16_MAX;
	volatile int16_t x420 = -1;
	uint32_t t83 = 3772924U;

	t83 = (x417+((x418|x419)+x420));

	if (t83 != 65533U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x427 = UINT32_MAX;

	t84 = (x425+((x426|x427)+x428));

	if (t84 != 4294967259U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x429 = UINT64_MAX;
	volatile int8_t x430 = 10;
	int32_t x431 = -1;
	int64_t x432 = -4053311645036LL;
	uint64_t t85 = 2LLU;

	t85 = (x429+((x430|x431)+x432));

	if (t85 != 18446740020397906578LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x437 = 15U;
	int32_t x438 = INT32_MAX;
	static int32_t x439 = INT32_MIN;
	uint8_t x440 = UINT8_MAX;

	t86 = (x437+((x438|x439)+x440));

	if (t86 != 269) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x441 = 1209U;
	int16_t x443 = INT16_MAX;
	volatile int16_t x444 = INT16_MIN;
	static volatile uint32_t t87 = 137878U;

	t87 = (x441+((x442|x443)+x444));

	if (t87 != 4294935736U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x446 = UINT16_MAX;
	static uint8_t x448 = 74U;
	volatile uint64_t t88 = 7516441549646530182LLU;

	t88 = (x445+((x446|x447)+x448));

	if (t88 != 18446744071562133577LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x449 = INT32_MAX;
	int16_t x450 = INT16_MIN;
	int32_t x452 = -1;

	t89 = (x449+((x450|x451)+x452));

	if (t89 != 2147483518) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x453 = INT64_MIN;
	uint64_t x454 = 1710064786193590LLU;
	int8_t x455 = -19;
	int32_t x456 = INT32_MIN;
	volatile uint64_t t90 = 141891958045367430LLU;

	t90 = (x453+((x454|x455)+x456));

	if (t90 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x457 = INT64_MIN;
	uint8_t x459 = 7U;

	t91 = (x457+((x458|x459)+x460));

	if (t91 != 9223372090251314958LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x461 = -1;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t92 = 117;

	t92 = (x461+((x462|x463)+x464));

	if (t92 != 5229) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x465 = INT16_MAX;
	volatile uint16_t x466 = UINT16_MAX;
	int8_t x467 = -1;
	uint64_t x468 = 3067856929034965LLU;
	volatile uint64_t t93 = 212865LLU;

	t93 = (x465+((x466|x467)+x468));

	if (t93 != 3067856929067731LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x473 = -3802;
	uint8_t x474 = 3U;
	volatile int16_t x475 = INT16_MAX;
	int16_t x476 = -15458;
	volatile int32_t t94 = 224552660;

	t94 = (x473+((x474|x475)+x476));

	if (t94 != 13507) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x477 = 1U;
	volatile int16_t x479 = -2939;
	uint32_t x480 = 71196110U;
	uint32_t t95 = 1629322U;

	t95 = (x477+((x478|x479)+x480));

	if (t95 != 71196102U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x481 = 2130327668LLU;
	int16_t x482 = 1;
	int16_t x483 = -1;
	uint16_t x484 = UINT16_MAX;
	uint64_t t96 = 5192353LLU;

	t96 = (x481+((x482|x483)+x484));

	if (t96 != 2130393202LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x487 = UINT32_MAX;
	volatile int8_t x488 = -1;
	uint32_t t97 = 20216600U;

	t97 = (x485+((x486|x487)+x488));

	if (t97 != 125U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x489 = 10;
	static int64_t x490 = -1LL;
	int8_t x491 = 1;
	static int8_t x492 = INT8_MIN;
	int64_t t98 = -8350683197LL;

	t98 = (x489+((x490|x491)+x492));

	if (t98 != -119LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x493 = INT8_MIN;
	int64_t x494 = 922274486568233LL;
	static volatile int8_t x495 = 1;
	volatile int64_t x496 = INT64_MIN;
	static volatile int64_t t99 = 36648422174LL;

	t99 = (x493+((x494|x495)+x496));

	if (t99 != -9222449762368207703LL) { NG(); } else { ; }
	
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

