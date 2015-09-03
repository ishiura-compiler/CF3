#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
volatile int8_t x3 = INT8_MIN;
int64_t x4 = INT64_MIN;
uint8_t x5 = UINT8_MAX;
int64_t x8 = INT64_MIN;
static int8_t x11 = -1;
int32_t x16 = INT32_MIN;
volatile int8_t x20 = INT8_MAX;
uint64_t x22 = 3LLU;
int16_t x28 = INT16_MIN;
uint32_t x33 = 16248319U;
volatile int64_t t8 = -5509463855LL;
uint16_t x37 = 3U;
static int16_t x39 = INT16_MIN;
uint64_t x40 = 30810168005430825LLU;
int64_t t11 = -137391LL;
uint32_t x53 = UINT32_MAX;
volatile uint32_t t13 = 253U;
int16_t x61 = INT16_MIN;
uint8_t x67 = 1U;
int64_t x68 = -1LL;
int16_t x71 = -11113;
static int16_t x78 = INT16_MIN;
uint32_t x79 = 3U;
static volatile int8_t x81 = -1;
int32_t x82 = INT32_MIN;
int64_t x84 = INT64_MAX;
int64_t t19 = -5LL;
int8_t x85 = -1;
int16_t x86 = 6;
static volatile int8_t x91 = INT8_MIN;
int8_t x104 = -1;
int16_t x105 = INT16_MIN;
static volatile uint64_t x110 = 140002579570906883LLU;
volatile int8_t x115 = 1;
int64_t t27 = -3968352990LL;
int64_t x117 = INT64_MAX;
int32_t x118 = INT32_MAX;
volatile int64_t t28 = 126LL;
int16_t x125 = -1;
uint64_t x127 = 948138027855712434LLU;
int8_t x128 = 7;
uint32_t x130 = UINT32_MAX;
static uint32_t x133 = UINT32_MAX;
int16_t x136 = 715;
volatile uint32_t t32 = 91U;
volatile int8_t x140 = 13;
int8_t x147 = 1;
static int16_t x158 = INT16_MIN;
uint8_t x159 = 7U;
uint64_t x160 = UINT64_MAX;
int32_t x161 = 1028999800;
int16_t x166 = 99;
static int8_t x177 = 37;
uint16_t x178 = 3286U;
volatile uint64_t t44 = 1025320597530LLU;
volatile uint64_t x201 = 85981LLU;
int16_t x203 = INT16_MIN;
int8_t x204 = INT8_MAX;
uint64_t t49 = 56LLU;
int64_t t50 = 302LL;
static int16_t x226 = -1;
volatile int16_t x228 = 442;
int32_t x248 = -1;
volatile int32_t x249 = -505282157;
int16_t x250 = INT16_MIN;
volatile int64_t t56 = 67015876LL;
static uint32_t x262 = UINT32_MAX;
uint64_t x263 = UINT64_MAX;
int8_t x266 = -37;
int16_t x267 = INT16_MIN;
static int8_t x268 = 1;
int32_t t59 = -224427;
int16_t x269 = -27;
uint16_t x270 = 15318U;
int16_t x271 = INT16_MIN;
volatile int64_t t61 = -10171094530568735LL;
volatile int64_t t62 = 1LL;
int64_t x281 = INT64_MIN;
static uint64_t t63 = 960331774974398LLU;
uint8_t x298 = UINT8_MAX;
int32_t x300 = -11025623;
int16_t x303 = INT16_MAX;
volatile uint16_t x304 = 27563U;
uint32_t x307 = 75257U;
int16_t x312 = INT16_MIN;
volatile int64_t t70 = -322199603214LL;
int32_t x324 = -53874649;
uint32_t t72 = 586027U;
uint64_t x334 = 6680819199039LLU;
static volatile uint8_t x336 = 1U;
static int16_t x337 = -1;
int8_t x339 = 14;
volatile int16_t x341 = INT16_MIN;
int64_t x353 = INT64_MIN;
uint64_t x359 = 278413004LLU;
static int64_t x361 = 754929LL;
int8_t x366 = INT8_MIN;
uint8_t x368 = 3U;
int8_t x370 = INT8_MAX;
int64_t t85 = -808LL;
int64_t x378 = 0LL;
static int32_t x386 = 653199846;
volatile uint64_t t88 = 1LLU;
int32_t x399 = INT32_MAX;
int16_t x409 = -2;
int64_t x411 = -8770049LL;
volatile int64_t t93 = -1264508LL;
uint32_t x416 = 19U;
int32_t x418 = -1;
int8_t x425 = INT8_MAX;
int64_t x427 = 199486350789020566LL;
static uint16_t x436 = 9936U;
uint64_t t99 = 124LLU;


void f0(void) {
	volatile uint8_t x1 = 8U;
	int64_t t0 = -23038885807106677LL;

	t0 = (((x1&x2)-x3)%x4);

	if (t0 != 136LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MAX;
	uint16_t x7 = 829U;
	volatile int64_t t1 = -1216319141LL;

	t1 = (((x5&x6)-x7)%x8);

	if (t1 != -702LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MIN;
	static int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = 30LL;

	t2 = (((x9&x10)-x11)%x12);

	if (t2 != 2147450881LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 11434U;
	int16_t x14 = 11889;
	int8_t x15 = -14;
	volatile uint32_t t3 = 3U;

	t3 = (((x13&x14)-x15)%x16);

	if (t3 != 11310U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = 59LL;
	int64_t x19 = -1LL;
	volatile int64_t t4 = -425455537LL;

	t4 = (((x17&x18)-x19)%x20);

	if (t4 != 60LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint32_t x23 = UINT32_MAX;
	uint16_t x24 = 421U;
	volatile uint64_t t5 = 28780714LLU;

	t5 = (((x21&x22)-x23)%x24);

	if (t5 != 217LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 2;
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	int64_t t6 = 0LL;

	t6 = (((x25&x26)-x27)%x28);

	if (t6 != 128LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MAX;
	int64_t x31 = 103382489LL;
	int32_t x32 = INT32_MIN;
	int64_t t7 = -120068460845LL;

	t7 = (((x29&x30)-x31)%x32);

	if (t7 != -103382489LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = 250LL;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;

	t8 = (((x33&x34)-x35)%x36);

	if (t8 != -32517LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	volatile uint64_t t9 = 492325LLU;

	t9 = (((x37&x38)-x39)%x40);

	if (t9 != 32768LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = -11490LL;
	static uint64_t x43 = 42339LLU;
	uint8_t x44 = 110U;
	volatile uint64_t t10 = 33299479878932702LLU;

	t10 = (((x41&x42)-x43)%x44);

	if (t10 != 57LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 435560092;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = 8167;
	volatile int16_t x48 = INT16_MAX;

	t11 = (((x45&x46)-x47)%x48);

	if (t11 != -8167LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 870U;
	uint8_t x50 = UINT8_MAX;
	volatile uint16_t x51 = 1U;
	int64_t x52 = -12663996064558LL;
	int64_t t12 = 906907703818553334LL;

	t12 = (((x49&x50)-x51)%x52);

	if (t12 != 101LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = 50;
	static uint8_t x55 = 0U;
	volatile uint8_t x56 = UINT8_MAX;

	t13 = (((x53&x54)-x55)%x56);

	if (t13 != 50U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 22U;
	volatile uint64_t x59 = UINT64_MAX;
	static uint64_t x60 = UINT64_MAX;
	static volatile uint64_t t14 = 218716LLU;

	t14 = (((x57&x58)-x59)%x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 36569U;
	int8_t x63 = INT8_MIN;
	volatile uint64_t x64 = UINT64_MAX;
	static uint64_t t15 = 1228LLU;

	t15 = (((x61&x62)-x63)%x64);

	if (t15 != 32896LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 11801433992020LL;
	int64_t x66 = INT64_MIN;
	static volatile int64_t t16 = -7299505082944088LL;

	t16 = (((x65&x66)-x67)%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = INT16_MAX;
	uint16_t x72 = 2934U;
	volatile int32_t t17 = -47418485;

	t17 = (((x69&x70)-x71)%x72);

	if (t17 != 2804) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	int64_t x80 = INT64_MAX;
	static volatile int64_t t18 = -3895LL;

	t18 = (((x77&x78)-x79)%x80);

	if (t18 != 4294934525LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x83 = -1;

	t19 = (((x81&x82)-x83)%x84);

	if (t19 != -2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MIN;
	uint64_t t20 = 57654593018139465LLU;

	t20 = (((x85&x86)-x87)%x88);

	if (t20 != 7LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -72;
	int64_t x90 = INT64_MIN;
	uint8_t x92 = 2U;
	static volatile int64_t t21 = -80129056LL;

	t21 = (((x89&x90)-x91)%x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -297313617;
	static int8_t x94 = INT8_MAX;
	int8_t x95 = 1;
	volatile int16_t x96 = -69;
	int32_t t22 = 222336841;

	t22 = (((x93&x94)-x95)%x96);

	if (t22 != 46) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	int32_t x99 = -1;
	int16_t x100 = 6;
	volatile int32_t t23 = 1;

	t23 = (((x97&x98)-x99)%x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MAX;
	static int32_t x102 = INT32_MIN;
	uint64_t x103 = 57968608516LLU;
	uint64_t t24 = 235137291878LLU;

	t24 = (((x101&x102)-x103)%x104);

	if (t24 != 18446744015740943100LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = -689;
	int16_t x107 = -1;
	volatile int8_t x108 = 1;
	static int32_t t25 = -95;

	t25 = (((x105&x106)-x107)%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 37U;
	uint64_t t26 = 2293630LLU;

	t26 = (((x109&x110)-x111)%x112);

	if (t26 != 25LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 16692U;
	int64_t x114 = INT64_MAX;
	int16_t x116 = INT16_MAX;

	t27 = (((x113&x114)-x115)%x116);

	if (t27 != 16691LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x119 = INT64_MAX;
	volatile int8_t x120 = INT8_MAX;

	t28 = (((x117&x118)-x119)%x120);

	if (t28 != -120LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MIN;
	int16_t x122 = -140;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = -19;
	uint64_t t29 = 11939LLU;

	t29 = (((x121&x122)-x123)%x124);

	if (t29 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x126 = 7U;
	static uint64_t t30 = 444799755236LLU;

	t30 = (((x125&x126)-x127)%x128);

	if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x129 = 3766676494LLU;
	int32_t x131 = INT32_MIN;
	int32_t x132 = 32215788;
	uint64_t t31 = 2237990LLU;

	t31 = (((x129&x130)-x131)%x132);

	if (t31 != 18670938LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x134 = 4U;
	int16_t x135 = INT16_MAX;

	t32 = (((x133&x134)-x135)%x136);

	if (t32 != 318U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -811471761419406209LL;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	int64_t t33 = -115636739530865291LL;

	t33 = (((x137&x138)-x139)%x140);

	if (t33 != 6LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = INT16_MAX;
	int64_t x142 = -1LL;
	int16_t x143 = INT16_MAX;
	int64_t x144 = -1LL;
	int64_t t34 = 4638946282977LL;

	t34 = (((x141&x142)-x143)%x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 0;
	int8_t x146 = -1;
	int32_t x148 = -1;
	volatile int32_t t35 = 3490;

	t35 = (((x145&x146)-x147)%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 99194579U;
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	static int64_t x152 = -230622037959318011LL;
	uint64_t t36 = 7076LLU;

	t36 = (((x149&x150)-x151)%x152);

	if (t36 != 2246678227LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 13;
	uint8_t x154 = UINT8_MAX;
	static int8_t x155 = -1;
	volatile int8_t x156 = -1;
	volatile int32_t t37 = 256;

	t37 = (((x153&x154)-x155)%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 1;
	static uint64_t t38 = 1289685781353470896LLU;

	t38 = (((x157&x158)-x159)%x160);

	if (t38 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x162 = 1LLU;
	static int64_t x163 = INT64_MIN;
	static int16_t x164 = INT16_MIN;
	uint64_t t39 = 1LLU;

	t39 = (((x161&x162)-x163)%x164);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = -1;
	volatile uint16_t x167 = 29562U;
	int8_t x168 = -2;
	int32_t t40 = 3228337;

	t40 = (((x165&x166)-x167)%x168);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = -5;
	static int16_t x170 = -110;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -201;
	int32_t t41 = 0;

	t41 = (((x169&x170)-x171)%x172);

	if (t41 != 96) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -6;
	static uint32_t x174 = UINT32_MAX;
	int8_t x175 = 1;
	uint8_t x176 = UINT8_MAX;
	uint32_t t42 = 37121419U;

	t42 = (((x173&x174)-x175)%x176);

	if (t42 != 249U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x179 = -1LL;
	volatile uint32_t x180 = 452U;
	volatile int64_t t43 = -298566821400464172LL;

	t43 = (((x177&x178)-x179)%x180);

	if (t43 != 5LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = 117069308;
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = -1733;
	uint64_t x184 = 28638268621LLU;

	t44 = (((x181&x182)-x183)%x184);

	if (t44 != 1985LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 60U;
	volatile uint8_t x188 = UINT8_MAX;
	static int32_t t45 = -99;

	t45 = (((x185&x186)-x187)%x188);

	if (t45 != 195) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MAX;
	static int16_t x190 = 12;
	volatile uint16_t x191 = 15U;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t46 = 1943LLU;

	t46 = (((x189&x190)-x191)%x192);

	if (t46 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1;
	static uint16_t x194 = 6784U;
	volatile uint16_t x195 = UINT16_MAX;
	static volatile uint16_t x196 = 52U;
	static volatile int32_t t47 = -5;

	t47 = (((x193&x194)-x195)%x196);

	if (t47 != -43) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = -1LL;
	static uint8_t x199 = 52U;
	volatile int8_t x200 = -8;
	volatile int64_t t48 = 535516990199015LL;

	t48 = (((x197&x198)-x199)%x200);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = 89834998436842413LL;

	t49 = (((x201&x202)-x203)%x204);

	if (t49 != 43LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	static int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -1;

	t50 = (((x205&x206)-x207)%x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = UINT8_MAX;
	int32_t x210 = -24549235;
	volatile uint8_t x211 = 24U;
	uint8_t x212 = 22U;
	volatile int32_t t51 = -57339;

	t51 = (((x209&x210)-x211)%x212);

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 229U;
	int8_t x227 = -1;
	static int32_t t52 = -143716;

	t52 = (((x225&x226)-x227)%x228);

	if (t52 != 230) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 9839LLU;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	volatile int16_t x244 = INT16_MIN;
	volatile uint64_t t53 = 49709870919556LLU;

	t53 = (((x241&x242)-x243)%x244);

	if (t53 != 9840LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	static int64_t x246 = -1526467448723294467LL;
	int8_t x247 = -1;
	int64_t t54 = 0LL;

	t54 = (((x245&x246)-x247)%x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x251 = INT8_MIN;
	volatile int8_t x252 = 1;
	volatile int32_t t55 = 14;

	t55 = (((x249&x250)-x251)%x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = -6;
	uint32_t x254 = UINT32_MAX;
	static int32_t x255 = INT32_MIN;
	int64_t x256 = -278157205355232LL;

	t56 = (((x253&x254)-x255)%x256);

	if (t56 != 2147483642LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = 15753LL;
	static uint32_t x258 = 9U;
	uint32_t x259 = 449081U;
	int64_t x260 = INT64_MIN;
	volatile int64_t t57 = -31818118101648LL;

	t57 = (((x257&x258)-x259)%x260);

	if (t57 != -449072LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 3U;
	volatile uint32_t x264 = 2073137857U;
	volatile uint64_t t58 = 1365840837LLU;

	t58 = (((x261&x262)-x263)%x264);

	if (t58 != 4LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = -1;

	t59 = (((x265&x266)-x267)%x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x272 = 1;
	volatile int32_t t60 = -2036372;

	t60 = (((x269&x270)-x271)%x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = INT8_MIN;
	volatile int32_t x274 = -412;
	static int8_t x275 = 1;
	int64_t x276 = 10LL;

	t61 = (((x273&x274)-x275)%x276);

	if (t61 != -3LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MIN;
	int64_t x280 = -1164320949LL;

	t62 = (((x277&x278)-x279)%x280);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x282 = 0LL;
	int16_t x283 = -1;
	uint64_t x284 = 958280082911171LLU;

	t63 = (((x281&x282)-x283)%x284);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 1U;
	int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	uint32_t t64 = 32U;

	t64 = (((x285&x286)-x287)%x288);

	if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = 148835953;
	int64_t x290 = INT64_MAX;
	static int64_t x291 = -877883LL;
	uint32_t x292 = UINT32_MAX;
	int64_t t65 = 2LL;

	t65 = (((x289&x290)-x291)%x292);

	if (t65 != 149713836LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = 1;
	static int32_t x299 = -413807458;
	volatile int32_t t66 = 246406;

	t66 = (((x297&x298)-x299)%x300);

	if (t66 != 5859408) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = 57793253LLU;
	static int16_t x302 = 1;
	static volatile uint64_t t67 = 38748730873104LLU;

	t67 = (((x301&x302)-x303)%x304);

	if (t67 != 15951LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 18U;
	int32_t x308 = 11;
	volatile uint32_t t68 = 5589415U;

	t68 = (((x305&x306)-x307)%x308);

	if (t68 != 9U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	int8_t x311 = 1;
	int32_t t69 = 3217177;

	t69 = (((x309&x310)-x311)%x312);

	if (t69 != 32639) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x313 = 36U;
	volatile int32_t x314 = -1;
	static uint8_t x315 = 0U;
	int64_t x316 = -1LL;

	t70 = (((x313&x314)-x315)%x316);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -23;
	int16_t x318 = INT16_MIN;
	uint8_t x319 = 45U;
	int8_t x320 = INT8_MAX;
	int32_t t71 = 25108182;

	t71 = (((x317&x318)-x319)%x320);

	if (t71 != -47) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = 11;
	uint32_t x323 = 40252U;

	t72 = (((x321&x322)-x323)%x324);

	if (t72 != 53834397U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x325 = -1481;
	int32_t x326 = INT32_MAX;
	static int64_t x327 = -586430784LL;
	int64_t x328 = -1LL;
	int64_t t73 = -242751601681733860LL;

	t73 = (((x325&x326)-x327)%x328);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = 132;
	uint8_t x330 = 41U;
	int16_t x331 = INT16_MAX;
	volatile uint8_t x332 = 45U;
	volatile int32_t t74 = -47804851;

	t74 = (((x329&x330)-x331)%x332);

	if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x333 = 121U;
	uint16_t x335 = 14U;
	uint64_t t75 = 281876369602099234LLU;

	t75 = (((x333&x334)-x335)%x336);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x338 = INT64_MAX;
	volatile int8_t x340 = INT8_MIN;
	static volatile int64_t t76 = -1LL;

	t76 = (((x337&x338)-x339)%x340);

	if (t76 != 113LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -579569;
	static int32_t t77 = 16215;

	t77 = (((x341&x342)-x343)%x344);

	if (t77 != -180375) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x345 = 11U;
	int32_t x346 = 156;
	volatile int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MAX;
	uint32_t t78 = 41499U;

	t78 = (((x345&x346)-x347)%x348);

	if (t78 != 2147483530U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = 2U;
	uint16_t x350 = 171U;
	uint16_t x351 = 51U;
	volatile int32_t x352 = 192;
	static volatile int32_t t79 = 5396;

	t79 = (((x349&x350)-x351)%x352);

	if (t79 != -49) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x354 = -1;
	volatile uint64_t x355 = 3552LLU;
	int32_t x356 = 593198;
	uint64_t t80 = 1512041531799180220LLU;

	t80 = (((x353&x354)-x355)%x356);

	if (t80 != 98576LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x357 = INT16_MAX;
	volatile int32_t x358 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	static volatile uint64_t t81 = 61762914724LLU;

	t81 = (((x357&x358)-x359)%x360);

	if (t81 != 9223372036576362804LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x362 = 5;
	volatile int8_t x363 = -1;
	volatile int64_t x364 = -236326939474129585LL;
	int64_t t82 = -24LL;

	t82 = (((x361&x362)-x363)%x364);

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 31608U;
	int32_t x367 = INT32_MAX;
	volatile int32_t t83 = -20;

	t83 = (((x365&x366)-x367)%x368);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x369 = 3LLU;
	volatile int32_t x371 = -1;
	int16_t x372 = INT16_MIN;
	uint64_t t84 = 427095136LLU;

	t84 = (((x369&x370)-x371)%x372);

	if (t84 != 4LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = -1LL;
	uint32_t x374 = 3535670U;
	static volatile int32_t x375 = -1;
	int64_t x376 = INT64_MIN;

	t85 = (((x373&x374)-x375)%x376);

	if (t85 != 3535671LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int32_t x379 = INT32_MIN;
	uint8_t x380 = UINT8_MAX;
	volatile uint64_t t86 = 169418041LLU;

	t86 = (((x377&x378)-x379)%x380);

	if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x381 = -1LL;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	static int8_t x384 = INT8_MAX;
	static uint64_t t87 = 187941LLU;

	t87 = (((x381&x382)-x383)%x384);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = -1;
	static uint64_t x387 = 2812800956846148010LLU;
	volatile int16_t x388 = INT16_MIN;

	t88 = (((x385&x386)-x387)%x388);

	if (t88 != 15633943117516603452LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int8_t x390 = 0;
	int32_t x391 = 1006401659;
	static uint32_t x392 = 40999671U;
	static uint32_t t89 = 96355U;

	t89 = (((x389&x390)-x391)%x392);

	if (t89 != 8591957U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MAX;
	int64_t x395 = -1LL;
	int32_t x396 = -1;
	volatile int64_t t90 = -20805507489034LL;

	t90 = (((x393&x394)-x395)%x396);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 47106U;
	static uint32_t x400 = 1444U;
	static uint32_t t91 = 277884223U;

	t91 = (((x397&x398)-x399)%x400);

	if (t91 != 1061U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x401 = INT64_MIN;
	int64_t x402 = -1LL;
	int8_t x403 = -1;
	int8_t x404 = INT8_MIN;
	int64_t t92 = 2601971LL;

	t92 = (((x401&x402)-x403)%x404);

	if (t92 != -127LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x410 = INT64_MIN;
	int16_t x412 = -1;

	t93 = (((x409&x410)-x411)%x412);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = 63U;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = INT64_MAX;
	int64_t t94 = 20687749LL;

	t94 = (((x413&x414)-x415)%x416);

	if (t94 != -11LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x417 = 4U;
	uint64_t x419 = 20783642LLU;
	uint64_t x420 = 3829344461756LLU;
	volatile uint64_t t95 = 4087559561959494070LLU;

	t95 = (((x417&x418)-x419)%x420);

	if (t95 != 2956450994242LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x421 = INT64_MAX;
	int16_t x422 = -4418;
	int8_t x423 = INT8_MAX;
	int64_t x424 = INT64_MIN;
	volatile int64_t t96 = -1154462805792890LL;

	t96 = (((x421&x422)-x423)%x424);

	if (t96 != 9223372036854771263LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x426 = 3804123909855LLU;
	int16_t x428 = -1;
	static uint64_t t97 = 77856010180247599LLU;

	t97 = (((x425&x426)-x427)%x428);

	if (t97 != 18247257722920531145LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = -13;
	volatile int16_t x430 = INT16_MIN;
	int16_t x431 = 1528;
	int32_t x432 = INT32_MIN;
	volatile int32_t t98 = 54737095;

	t98 = (((x429&x430)-x431)%x432);

	if (t98 != -34296) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x433 = 81618LLU;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = -1;

	t99 = (((x433&x434)-x435)%x436);

	if (t99 != 2049LLU) { NG(); } else { ; }
	
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

