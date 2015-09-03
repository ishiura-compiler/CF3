#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 9LL;
volatile uint32_t x5 = 26543027U;
int8_t x8 = INT8_MAX;
static int32_t x14 = 0;
volatile uint32_t t3 = 226U;
volatile int64_t t4 = 7105LL;
int32_t x25 = INT32_MAX;
volatile int64_t x30 = -1LL;
static int16_t x33 = INT16_MIN;
uint32_t t8 = 8052111U;
int16_t x37 = -1;
int64_t x38 = INT64_MIN;
uint8_t x43 = 105U;
uint16_t x45 = 16U;
int64_t x47 = 159346695LL;
int16_t x52 = INT16_MIN;
uint64_t x53 = UINT64_MAX;
volatile uint64_t t13 = UINT64_MAX;
static int64_t x59 = INT64_MIN;
int8_t x61 = -1;
int64_t x69 = INT64_MIN;
int16_t x72 = 365;
volatile uint32_t x74 = 12U;
volatile int32_t x78 = -1;
int32_t x82 = 8450674;
uint16_t x88 = 75U;
volatile int64_t x93 = INT64_MIN;
static volatile uint32_t x96 = 7958491U;
int32_t x100 = -1;
int64_t t25 = -138664481685600734LL;
volatile uint32_t x106 = UINT32_MAX;
int16_t x111 = 51;
static uint64_t t29 = UINT64_MAX;
uint16_t x123 = 19338U;
uint16_t x138 = 209U;
static uint16_t x141 = UINT16_MAX;
uint64_t x150 = UINT64_MAX;
int8_t x158 = 15;
static volatile uint64_t x164 = 194467794599204719LLU;
volatile uint64_t t41 = 799247257LLU;
int32_t x174 = 6408;
int64_t x178 = INT64_MIN;
int8_t x179 = INT8_MIN;
int64_t t44 = -404657870116195530LL;
volatile int32_t x185 = -1;
uint32_t x190 = UINT32_MAX;
uint8_t x194 = 2U;
int16_t x203 = INT16_MAX;
uint64_t x209 = 1154071LLU;
int64_t x216 = INT64_MIN;
volatile int64_t t55 = -66540628659794776LL;
volatile int8_t x225 = -3;
static volatile int16_t x231 = -1;
volatile uint8_t x234 = 41U;
static int8_t x236 = INT8_MAX;
int16_t x237 = INT16_MAX;
volatile int64_t t59 = -465679014642LL;
uint64_t t61 = UINT64_MAX;
volatile int64_t t63 = -1892369LL;
int8_t x260 = INT8_MIN;
static int16_t x262 = -1;
static int64_t x270 = -1LL;
int16_t x274 = INT16_MIN;
int8_t x278 = INT8_MIN;
static volatile uint64_t t69 = 16710135547411871LLU;
uint32_t x281 = UINT32_MAX;
int16_t x282 = -1;
volatile uint32_t t70 = UINT32_MAX;
uint16_t x286 = UINT16_MAX;
int32_t t71 = 1660785;
static uint32_t x295 = 115U;
uint8_t x296 = 0U;
static uint8_t x300 = 39U;
int32_t t75 = -5;
volatile uint64_t x312 = UINT64_MAX;
volatile uint64_t x318 = 41334437247LLU;
int32_t x319 = INT32_MAX;
int8_t x322 = -1;
int8_t x325 = INT8_MIN;
uint16_t x327 = UINT16_MAX;
int16_t x337 = -11179;
volatile uint64_t t84 = 124248LLU;
uint8_t x344 = UINT8_MAX;
uint16_t x348 = UINT16_MAX;
static volatile uint32_t t86 = 6046U;
int8_t x349 = INT8_MIN;
int64_t x357 = -68460878042138LL;
int8_t x361 = 0;
int32_t x363 = -1637;
uint32_t x369 = 231U;
uint64_t t92 = 58567682243LLU;
volatile int16_t x373 = INT16_MAX;
int32_t x392 = INT32_MIN;
uint64_t x394 = UINT64_MAX;
int64_t x396 = 3307235574368000LL;
uint64_t t98 = 751319570741975LLU;
int16_t x398 = 10838;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -30;

	t0 = (x1|(x2&(x3^x4)));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -1;
	static int32_t x7 = 30649794;
	static volatile uint32_t t1 = 15214993U;

	t1 = (x5|(x6&(x7^x8)));

	if (t1 != 30912447U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 0U;
	int64_t t2 = INT64_MIN;

	t2 = (x9|(x10&(x11^x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x15 = 81;
	static volatile uint32_t x16 = 1682473573U;

	t3 = (x13|(x14&(x15^x16)));

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 235U;
	int8_t x18 = 0;
	int32_t x19 = -1;
	int64_t x20 = INT64_MIN;

	t4 = (x17|(x18&(x19^x20)));

	if (t4 != 235LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 211522U;
	int64_t x22 = INT64_MIN;
	int16_t x23 = -1207;
	static int32_t x24 = -237942658;
	volatile int64_t t5 = 122252484517476351LL;

	t5 = (x21|(x22&(x23^x24)));

	if (t5 != 211522LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = 119892LLU;
	volatile uint8_t x28 = UINT8_MAX;
	static volatile uint64_t t6 = 1510724287649071LLU;

	t6 = (x25|(x26&(x27^x28)));

	if (t6 != 2147483647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 19U;
	int64_t t7 = 510436LL;

	t7 = (x29|(x30&(x31^x32)));

	if (t7 != -20LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 42439U;
	int32_t x35 = -1472640;
	int16_t x36 = -1;

	t8 = (x33|(x34&(x35^x36)));

	if (t8 != 4294942791U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = -1;
	uint64_t x40 = 2833LLU;
	static uint64_t t9 = UINT64_MAX;

	t9 = (x37|(x38&(x39^x40)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -6824065198LL;
	uint16_t x42 = 1988U;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -2132462LL;

	t10 = (x41|(x42&(x43^x44)));

	if (t10 != -6824065198LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -1;
	volatile uint16_t x48 = 6607U;
	volatile int64_t t11 = 1900040655611LL;

	t11 = (x45|(x46&(x47^x48)));

	if (t11 != 159345112LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 730694U;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 1270669511LL;
	volatile int64_t t12 = -1291632419530751073LL;

	t12 = (x49|(x50&(x51^x52)));

	if (t12 != -1270143418LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	static volatile int16_t x56 = INT16_MAX;

	t13 = (x53|(x54&(x55^x56)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	uint32_t x60 = 3447U;
	int64_t t14 = -198273623469LL;

	t14 = (x57|(x58&(x59^x60)));

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = 0U;
	int16_t x63 = 4435;
	volatile int64_t x64 = -1LL;
	volatile int64_t t15 = 11LL;

	t15 = (x61|(x62&(x63^x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int32_t x67 = -1;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = -3669972145LL;

	t16 = (x65|(x66&(x67^x68)));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 0;
	int64_t x71 = -1LL;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x69|(x70&(x71^x72)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 496591902U;
	int32_t x75 = 52178;
	volatile int16_t x76 = INT16_MIN;
	static uint32_t t18 = 2U;

	t18 = (x73|(x74&(x75^x76)));

	if (t18 != 496591902U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 457914294;
	uint16_t x79 = UINT16_MAX;
	static volatile uint16_t x80 = 10812U;
	int32_t t19 = -82912;

	t19 = (x77|(x78&(x79^x80)));

	if (t19 != 457963511) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 4U;
	static int16_t x83 = INT16_MIN;
	int64_t x84 = 1875354840LL;
	int64_t t20 = 511146LL;

	t20 = (x81|(x82&(x83^x84)));

	if (t20 != 8276LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 319978807LLU;
	int64_t x86 = INT64_MAX;
	int32_t x87 = 216556638;
	uint64_t t21 = 10274199033291LLU;

	t21 = (x85|(x86&(x87^x88)));

	if (t21 != 536509751LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -9;
	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = 2904270;

	t22 = (x89|(x90&(x91^x92)));

	if (t22 != -9) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	static int8_t x95 = INT8_MAX;
	static int64_t t23 = INT64_MIN;

	t23 = (x93|(x94&(x95^x96)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int32_t x98 = -1;
	static volatile int16_t x99 = -1;
	volatile int32_t t24 = 2;

	t24 = (x97|(x98&(x99^x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -306311;
	int64_t x102 = -1LL;
	static volatile uint16_t x103 = 10697U;
	uint8_t x104 = 7U;

	t25 = (x101|(x102&(x103^x104)));

	if (t25 != -295937LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	uint32_t x107 = 6353899U;
	int16_t x108 = -1;
	uint32_t t26 = 263478240U;

	t26 = (x105|(x106&(x107^x108)));

	if (t26 != 4288613396U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 107U;
	static volatile uint16_t x110 = 2U;
	uint32_t x112 = 430U;
	volatile uint32_t t27 = 4736515U;

	t27 = (x109|(x110&(x111^x112)));

	if (t27 != 107U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int64_t x114 = -8589218520474260LL;
	int16_t x115 = 3;
	int64_t x116 = -2245133LL;
	int64_t t28 = 1366459185LL;

	t28 = (x113|(x114&(x115^x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int64_t x118 = -8754LL;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = -15;

	t29 = (x117|(x118&(x119^x120)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 336523525898LLU;
	static int8_t x122 = INT8_MIN;
	uint64_t x124 = 884760542129007LLU;
	volatile uint64_t t30 = 5048324050534LLU;

	t30 = (x121|(x122&(x123^x124)));

	if (t30 != 885035454398346LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MAX;
	int32_t x128 = 27;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125|(x126&(x127^x128)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 12LLU;
	uint16_t x130 = 131U;
	int8_t x131 = -1;
	uint16_t x132 = 3959U;
	uint64_t t32 = 135068323834LLU;

	t32 = (x129|(x130&(x131^x132)));

	if (t32 != 140LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	uint16_t x134 = 3U;
	uint8_t x135 = UINT8_MAX;
	uint16_t x136 = 2U;
	int64_t t33 = INT64_MAX;

	t33 = (x133|(x134&(x135^x136)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 8759U;
	uint32_t x139 = 5525U;
	int64_t x140 = INT64_MIN;
	int64_t t34 = -1912999268LL;

	t34 = (x137|(x138&(x139^x140)));

	if (t34 != 8887LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = 29;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = 330;
	int32_t t35 = -5;

	t35 = (x141|(x142&(x143^x144)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MIN;
	static volatile int8_t x146 = -1;
	uint16_t x147 = 2U;
	static int16_t x148 = -1;
	static volatile int32_t t36 = 1;

	t36 = (x145|(x146&(x147^x148)));

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 893334810239LL;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MAX;
	volatile uint64_t t37 = 2004038LLU;

	t37 = (x149|(x150&(x151^x152)));

	if (t37 != 18446744073709547135LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 0;
	int16_t x154 = -647;
	uint8_t x155 = UINT8_MAX;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = 24718;

	t38 = (x153|(x154&(x155^x156)));

	if (t38 != -32647) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 8372U;
	int64_t x159 = 202988437964967107LL;
	int64_t x160 = -1LL;
	volatile int64_t t39 = -401039708804761380LL;

	t39 = (x157|(x158&(x159^x160)));

	if (t39 != 8380LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = UINT8_MAX;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	static volatile uint64_t t40 = 3194953LLU;

	t40 = (x161|(x162&(x163^x164)));

	if (t40 != 18252276279110347007LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	static uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MAX;
	int32_t x168 = -2627269;

	t41 = (x165|(x166&(x167^x168)));

	if (t41 != 18446744071564695237LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static int64_t x170 = INT64_MIN;
	uint16_t x171 = 350U;
	static volatile int8_t x172 = -1;
	volatile int64_t t42 = -7931LL;

	t42 = (x169|(x170&(x171^x172)));

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int64_t x175 = 219799958740LL;
	static int16_t x176 = -591;
	volatile int64_t t43 = 1049939874434673612LL;

	t43 = (x173|(x174&(x175^x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 26U;
	int32_t x180 = INT32_MIN;

	t44 = (x177|(x178&(x179^x180)));

	if (t44 != 26LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 159244425647101LLU;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -495;
	uint64_t x184 = 190310866117444LLU;
	uint64_t t45 = 4843209777305LLU;

	t45 = (x181|(x182&(x183^x184)));

	if (t45 != 159244492857341LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 61U;
	volatile uint32_t x187 = UINT32_MAX;
	volatile int8_t x188 = 9;
	static volatile uint32_t t46 = UINT32_MAX;

	t46 = (x185|(x186&(x187^x188)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	int16_t x192 = 0;
	uint32_t t47 = UINT32_MAX;

	t47 = (x189|(x190&(x191^x192)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = -85110409;

	t48 = (x193|(x194&(x195^x196)));

	if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static int8_t x198 = 50;
	int16_t x199 = -1;
	uint8_t x200 = 1U;
	static int32_t t49 = 338864;

	t49 = (x197|(x198&(x199^x200)));

	if (t49 != -32718) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 7;
	uint32_t x202 = UINT32_MAX;
	static volatile int32_t x204 = -1;
	static volatile uint32_t t50 = 12U;

	t50 = (x201|(x202&(x203^x204)));

	if (t50 != 4294934535U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 836LLU;
	int32_t x206 = 1144344;
	volatile int16_t x207 = INT16_MIN;
	volatile int16_t x208 = INT16_MIN;
	volatile uint64_t t51 = 824623105138436996LLU;

	t51 = (x205|(x206&(x207^x208)));

	if (t51 != 836LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MAX;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = -1;
	volatile uint64_t t52 = 494334670534881219LLU;

	t52 = (x209|(x210&(x211^x212)));

	if (t52 != 1154071LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 11835241LLU;
	uint8_t x214 = UINT8_MAX;
	volatile uint16_t x215 = UINT16_MAX;
	uint64_t t53 = 61602031279064LLU;

	t53 = (x213|(x214&(x215^x216)));

	if (t53 != 11835391LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 32U;
	int64_t x218 = INT64_MIN;
	int8_t x219 = -4;
	uint64_t x220 = 296LLU;
	volatile uint64_t t54 = 1950782LLU;

	t54 = (x217|(x218&(x219^x220)));

	if (t54 != 9223372036854775840LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MAX;
	volatile uint32_t x223 = 82539833U;
	int8_t x224 = INT8_MIN;

	t55 = (x221|(x222&(x223^x224)));

	if (t55 != -9223372036854773063LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	static int32_t t56 = 22;

	t56 = (x225|(x226&(x227^x228)));

	if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -1;
	static uint8_t x230 = UINT8_MAX;
	static int32_t x232 = -1;
	int32_t t57 = -49404;

	t57 = (x229|(x230&(x231^x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	int32_t x235 = 380178868;
	volatile int32_t t58 = -47040;

	t58 = (x233|(x234&(x235^x236)));

	if (t58 != -32759) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = UINT8_MAX;
	static volatile int64_t x239 = -1LL;
	volatile int8_t x240 = -1;

	t59 = (x237|(x238&(x239^x240)));

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	volatile uint8_t x243 = 126U;
	volatile int64_t x244 = -1LL;
	int64_t t60 = -463507426497221863LL;

	t60 = (x241|(x242&(x243^x244)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -17;
	uint64_t x246 = UINT64_MAX;
	static volatile int8_t x247 = -2;
	int64_t x248 = INT64_MIN;

	t61 = (x245|(x246&(x247^x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 46466947927LLU;
	uint64_t x250 = 11123376LLU;
	uint8_t x251 = 5U;
	volatile int8_t x252 = 1;
	uint64_t t62 = 486890LLU;

	t62 = (x249|(x250&(x251^x252)));

	if (t62 != 46466947927LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 62U;
	int64_t x254 = INT64_MAX;
	static int32_t x255 = 150522;
	int8_t x256 = -1;

	t63 = (x253|(x254&(x255^x256)));

	if (t63 != 9223372036854625343LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	int64_t t64 = INT64_MIN;

	t64 = (x257|(x258&(x259^x260)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int16_t x263 = -196;
	int8_t x264 = INT8_MAX;
	int32_t t65 = 29567069;

	t65 = (x261|(x262&(x263^x264)));

	if (t65 != -189) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -6;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -68;

	t66 = (x265|(x266&(x267^x268)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -2;
	uint32_t x271 = UINT32_MAX;
	static volatile int32_t x272 = INT32_MIN;
	int64_t t67 = -960482327596647711LL;

	t67 = (x269|(x270&(x271^x272)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	uint32_t x275 = UINT32_MAX;
	volatile int8_t x276 = INT8_MIN;
	static uint32_t t68 = UINT32_MAX;

	t68 = (x273|(x274&(x275^x276)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 378209403632236LLU;
	uint32_t x279 = 2189U;
	int16_t x280 = INT16_MAX;

	t69 = (x277|(x278&(x279^x280)));

	if (t69 != 378209403633516LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x283 = 1U;
	int16_t x284 = -1;

	t70 = (x281|(x282&(x283^x284)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 1U;
	static int8_t x287 = INT8_MAX;
	int16_t x288 = 93;

	t71 = (x285|(x286&(x287^x288)));

	if (t71 != 35) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 12964387LLU;
	volatile uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	int16_t x292 = -1838;
	uint64_t t72 = 1124LLU;

	t72 = (x289|(x290&(x291^x292)));

	if (t72 != 12964595LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	uint32_t t73 = UINT32_MAX;

	t73 = (x293|(x294&(x295^x296)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 2U;
	int16_t x298 = INT16_MIN;
	int16_t x299 = -4376;
	volatile int32_t t74 = -458;

	t74 = (x297|(x298&(x299^x300)));

	if (t74 != -32766) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = 6900;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 122U;
	uint8_t x304 = 3U;

	t75 = (x301|(x302&(x303^x304)));

	if (t75 != 6900) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	int16_t x306 = 1;
	static uint8_t x307 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t76 = INT32_MAX;

	t76 = (x305|(x306&(x307^x308)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 3098U;
	volatile int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	uint64_t t77 = 1827LLU;

	t77 = (x309|(x310&(x311^x312)));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = 87;
	int16_t x314 = 1337;
	int32_t x315 = 530606659;
	volatile int64_t x316 = INT64_MAX;
	static int64_t t78 = 11739059808780LL;

	t78 = (x313|(x314&(x315^x316)));

	if (t78 != 1407LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t79 = 17734621691LLU;

	t79 = (x317|(x318&(x319^x320)));

	if (t79 != 42949672959LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1047597584U;
	static int16_t x323 = INT16_MIN;
	int16_t x324 = 16;
	static volatile uint32_t t80 = 554457984U;

	t80 = (x321|(x322&(x323^x324)));

	if (t80 != 4294939152U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 25U;
	int8_t x328 = INT8_MIN;
	int32_t t81 = -6555;

	t81 = (x325|(x326&(x327^x328)));

	if (t81 != -103) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 0U;
	int32_t x330 = 812361574;
	static int8_t x331 = INT8_MIN;
	static uint16_t x332 = UINT16_MAX;
	int32_t t82 = 11682504;

	t82 = (x329|(x330&(x331^x332)));

	if (t82 != 812318822) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	static int64_t x335 = -8063515033800LL;
	volatile uint16_t x336 = 9U;
	int64_t t83 = 15237229479238LL;

	t83 = (x333|(x334&(x335^x336)));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	static int8_t x340 = INT8_MAX;

	t84 = (x337|(x338&(x339^x340)));

	if (t84 != 18446744073709540437LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	volatile uint64_t x342 = 265LLU;
	volatile uint8_t x343 = UINT8_MAX;
	static volatile uint64_t t85 = 810LLU;

	t85 = (x341|(x342&(x343^x344)));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 1918U;
	static uint16_t x346 = 3528U;
	volatile uint32_t x347 = 11U;

	t86 = (x345|(x346&(x347^x348)));

	if (t86 != 4094U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = 0;
	static int32_t x351 = INT32_MAX;
	uint64_t x352 = 63845006656803LLU;
	uint64_t t87 = 3209499036966LLU;

	t87 = (x349|(x350&(x351^x352)));

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	static int8_t x355 = -1;
	uint64_t x356 = 69333998LLU;
	volatile uint64_t t88 = 40830426306949LLU;

	t88 = (x353|(x354&(x355^x356)));

	if (t88 != 18446744073640214528LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x358 = 1;
	int32_t x359 = -7980;
	uint64_t x360 = UINT64_MAX;
	static uint64_t t89 = 51666714692LLU;

	t89 = (x357|(x358&(x359^x360)));

	if (t89 != 18446675612831509479LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 1U;
	volatile int16_t x364 = 266;
	int32_t t90 = 90;

	t90 = (x361|(x362&(x363^x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = 480609542;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	volatile int32_t x368 = 1000;
	int32_t t91 = 122722407;

	t91 = (x365|(x366&(x367^x368)));

	if (t91 != -31482) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	uint64_t x371 = 17223932123190LLU;
	volatile int8_t x372 = 1;

	t92 = (x369|(x370&(x371^x372)));

	if (t92 != 17223932123367LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x374 = 3709;
	static volatile int8_t x375 = -1;
	int64_t x376 = -1LL;
	int64_t t93 = -1051988936LL;

	t93 = (x373|(x374&(x375^x376)));

	if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int16_t x378 = -41;
	static int64_t x379 = INT64_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	static volatile int64_t t94 = 161768046838678LL;

	t94 = (x377|(x378&(x379^x380)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 24U;
	static int16_t x382 = INT16_MAX;
	static int64_t x383 = INT64_MIN;
	uint64_t x384 = 8693LLU;
	volatile uint64_t t95 = 1LLU;

	t95 = (x381|(x382&(x383^x384)));

	if (t95 != 8701LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	uint16_t x386 = 189U;
	static volatile uint16_t x387 = 0U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 67718650;

	t96 = (x385|(x386&(x387^x388)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = 2663553;
	int16_t x390 = 1968;
	int32_t x391 = -1;
	volatile int32_t t97 = 23197;

	t97 = (x389|(x390&(x391^x392)));

	if (t97 != 2664369) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	volatile uint32_t x395 = 3U;

	t98 = (x393|(x394&(x395^x396)));

	if (t98 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = -1;
	int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MIN;
	int64_t t99 = -14LL;

	t99 = (x397|(x398&(x399^x400)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

