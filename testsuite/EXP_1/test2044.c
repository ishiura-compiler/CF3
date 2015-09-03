#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x17 = INT32_MIN;
volatile uint32_t x18 = 776826U;
static int16_t x20 = 14;
int32_t x27 = INT32_MIN;
int64_t t5 = -1939LL;
int32_t x43 = -631;
uint16_t x46 = UINT16_MAX;
uint32_t x56 = 12677U;
volatile int16_t x64 = INT16_MIN;
volatile uint64_t t9 = 294563752844566386LLU;
volatile int32_t x66 = INT32_MIN;
int64_t x74 = -1LL;
volatile int16_t x82 = INT16_MAX;
static int16_t x87 = 16;
int8_t x92 = -1;
uint8_t x106 = 25U;
int64_t x108 = -1LL;
int32_t x125 = INT32_MIN;
int32_t x133 = -3232;
volatile int32_t t22 = -98885;
int8_t x137 = INT8_MAX;
uint16_t x141 = UINT16_MAX;
static int32_t x143 = -1;
static int8_t x152 = INT8_MIN;
uint8_t x169 = UINT8_MAX;
static int8_t x194 = -1;
int8_t x210 = -1;
int64_t t35 = 1LL;
static int8_t x229 = INT8_MAX;
int8_t x230 = INT8_MIN;
uint32_t x241 = 124U;
uint32_t t40 = 1169744728U;
int32_t x246 = INT32_MIN;
int8_t x254 = INT8_MIN;
uint64_t x260 = UINT64_MAX;
int32_t t46 = 1;
static int32_t x282 = -1;
int32_t x293 = -1;
static uint32_t t50 = 31711U;
int16_t x299 = 644;
uint32_t x301 = UINT32_MAX;
int32_t x302 = -24;
static volatile int32_t x305 = INT32_MAX;
volatile int64_t t53 = -4155417390LL;
volatile uint64_t x313 = 145263352954761820LLU;
static int16_t x316 = 19;
uint64_t t54 = 0LLU;
int8_t x328 = INT8_MAX;
static uint8_t x335 = UINT8_MAX;
volatile int8_t x337 = 7;
static volatile int16_t x343 = INT16_MAX;
static volatile uint32_t x345 = 104818U;
int8_t x346 = INT8_MAX;
int32_t x349 = INT32_MAX;
uint64_t x360 = 22561LLU;
uint8_t x361 = UINT8_MAX;
static int16_t x364 = INT16_MAX;
uint32_t x378 = UINT32_MAX;
static int64_t x380 = 697512703239LL;
static int64_t x393 = INT64_MAX;
volatile int64_t x394 = INT64_MIN;
uint32_t x395 = UINT32_MAX;
int16_t x397 = INT16_MIN;
int64_t x410 = INT64_MIN;
int64_t x422 = 657303588LL;
int8_t x424 = INT8_MIN;
uint8_t x425 = 51U;
int64_t x436 = INT64_MIN;
uint8_t x452 = 9U;
uint32_t x455 = UINT32_MAX;
int8_t x457 = INT8_MAX;
static volatile int32_t x460 = -313493621;
volatile uint32_t t84 = 1871271U;
volatile int16_t x463 = -1;
int8_t x471 = INT8_MIN;
int8_t x475 = INT8_MIN;
uint8_t x478 = 103U;
int16_t x481 = -1;
int64_t x482 = INT64_MAX;
uint64_t x489 = 0LLU;
static volatile uint64_t t91 = 491481747995LLU;
uint16_t x498 = 571U;
static uint8_t x500 = UINT8_MAX;
uint64_t x501 = 3750283042734987LLU;
static int32_t x508 = INT32_MIN;
volatile uint32_t t94 = 10645U;
uint64_t t95 = 98041LLU;
int16_t x518 = INT16_MAX;
int16_t x531 = INT16_MIN;
int32_t x536 = -258913;


void f0(void) {
	static volatile int16_t x1 = -9891;
	uint64_t x2 = 720976653082838LLU;
	int16_t x3 = INT16_MIN;
	static uint32_t x4 = 0U;
	uint64_t t0 = 2004090355LLU;

	t0 = (((x1^x2)-x3)*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x13 = 103U;
	int16_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	volatile uint16_t x16 = 337U;
	int32_t t1 = 1933205;

	t1 = (((x13^x14)-x15)*x16);

	if (t1 != -22120343) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x19 = -7210;
	static volatile uint32_t t2 = 1807597462U;

	t2 = (((x17^x18)-x19)*x20);

	if (t2 != 10976504U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 21722LLU;
	int64_t x22 = INT64_MAX;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MAX;
	static volatile uint64_t t3 = 25593LLU;

	t3 = (((x21^x22)-x23)*x24);

	if (t3 != 9223372033995592922LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t4 = 170099287812LLU;

	t4 = (((x25^x26)-x27)*x28);

	if (t4 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 53U;
	int16_t x34 = INT16_MIN;
	int64_t x35 = -3769046104LL;
	volatile int32_t x36 = INT32_MIN;

	t5 = (((x33^x34)-x35)*x36);

	if (t5 != -8093894621970563072LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MAX;
	volatile uint32_t x42 = 813599501U;
	volatile int32_t x44 = INT32_MIN;
	volatile uint32_t t6 = 74546123U;

	t6 = (((x41^x42)-x43)*x44);

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;
	volatile uint64_t t7 = 7174020904527564LLU;

	t7 = (((x45^x46)-x47)*x48);

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = -1;
	uint32_t x55 = 11085U;
	uint32_t t8 = 7639U;

	t8 = (((x53^x54)-x55)*x56);

	if (t8 != 2006959103U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = INT32_MAX;
	static int32_t x62 = -1;
	uint64_t x63 = UINT64_MAX;

	t9 = (((x61^x62)-x63)*x64);

	if (t9 != 70368744144896LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x65 = -3475272738LL;
	int32_t x67 = -1;
	static int16_t x68 = INT16_MIN;
	static volatile int64_t t10 = -14012913223092622LL;

	t10 = (((x65^x66)-x67)*x68);

	if (t10 != -97228495486976LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = 65726260LL;
	static int16_t x75 = -56;
	int32_t x76 = -26;
	volatile int64_t t11 = -28984LL;

	t11 = (((x73^x74)-x75)*x76);

	if (t11 != 1708881330LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x77 = 0U;
	static uint32_t x78 = 1510506063U;
	int16_t x79 = INT16_MIN;
	static uint16_t x80 = 0U;
	volatile uint32_t t12 = 32171U;

	t12 = (((x77^x78)-x79)*x80);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 52U;
	int32_t x83 = INT32_MAX;
	int8_t x84 = 0;
	static volatile uint32_t t13 = 1531U;

	t13 = (((x81^x82)-x83)*x84);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x85 = INT8_MIN;
	volatile uint8_t x86 = 3U;
	static volatile int32_t x88 = -1;
	volatile int32_t t14 = -4;

	t14 = (((x85^x86)-x87)*x88);

	if (t14 != 141) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x89 = -504251;
	int8_t x90 = -1;
	volatile uint8_t x91 = 1U;
	int32_t t15 = -19;

	t15 = (((x89^x90)-x91)*x92);

	if (t15 != -504249) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x93 = 267950398740640LLU;
	uint8_t x94 = 0U;
	volatile int8_t x95 = INT8_MIN;
	int64_t x96 = -1LL;
	uint64_t t16 = 21LLU;

	t16 = (((x93^x94)-x95)*x96);

	if (t16 != 18446476123310810848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = 937436;
	uint64_t x98 = 3226407299827LLU;
	volatile int16_t x99 = INT16_MAX;
	int64_t x100 = INT64_MIN;
	static uint64_t t17 = 102369086499411714LLU;

	t17 = (((x97^x98)-x99)*x100);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MAX;
	static int32_t x107 = -1;
	int64_t t18 = 5LL;

	t18 = (((x105^x106)-x107)*x108);

	if (t18 != -103LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 0U;
	uint64_t x116 = 3027382165488LLU;
	volatile uint64_t t19 = 29210808056104085LLU;

	t19 = (((x113^x114)-x115)*x116);

	if (t19 != 18347539787528675344LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = UINT32_MAX;
	static int32_t x118 = INT32_MAX;
	static int8_t x119 = INT8_MAX;
	int8_t x120 = INT8_MIN;
	static uint32_t t20 = 2U;

	t20 = (((x117^x118)-x119)*x120);

	if (t20 != 16256U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x126 = 4219390789647LLU;
	static volatile int32_t x127 = -1;
	uint8_t x128 = 7U;
	uint64_t t21 = 46319729744331LLU;

	t21 = (((x125^x126)-x127)*x128);

	if (t21 != 18446714547202308208LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x134 = INT8_MIN;
	int32_t x135 = -411;
	static volatile int16_t x136 = -1;

	t22 = (((x133^x134)-x135)*x136);

	if (t22 != -3707) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x138 = 3084144789838LL;
	volatile int8_t x139 = INT8_MAX;
	static int64_t x140 = 96LL;
	volatile int64_t t23 = -381498693LL;

	t23 = (((x137^x138)-x139)*x140);

	if (t23 != 296077899809472LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x142 = INT8_MAX;
	uint64_t x144 = 993727802137503LLU;
	static uint64_t t24 = 920011878LLU;

	t24 = (((x141^x142)-x143)*x144);

	if (t24 != 9658509588883278879LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x145 = 17546;
	int16_t x146 = INT16_MIN;
	volatile int8_t x147 = INT8_MIN;
	static uint8_t x148 = UINT8_MAX;
	volatile int32_t t25 = 1;

	t25 = (((x145^x146)-x147)*x148);

	if (t25 != -3848970) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = 194;
	int16_t x151 = 3;
	int32_t t26 = -640736221;

	t26 = (((x149^x150)-x151)*x152);

	if (t26 != 4169856) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x165 = -1062461149580643845LL;
	int32_t x166 = 3500199;
	uint64_t x167 = UINT64_MAX;
	volatile int8_t x168 = INT8_MIN;
	static volatile uint64_t t27 = 117082715LLU;

	t27 = (((x165^x166)-x167)*x168);

	if (t27 != 6867818630261985664LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x170 = -7697000603559LL;
	int8_t x171 = -28;
	uint64_t x172 = 1045LLU;
	volatile uint64_t t28 = 4414802651463704218LLU;

	t28 = (((x169^x170)-x171)*x172);

	if (t28 != 18438700708078942186LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t x174 = 2LL;
	static uint64_t x175 = UINT64_MAX;
	uint16_t x176 = 3U;
	uint64_t t29 = 248569LLU;

	t29 = (((x173^x174)-x175)*x176);

	if (t29 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x177 = UINT32_MAX;
	volatile uint64_t x178 = 2204478LLU;
	volatile uint8_t x179 = 26U;
	static int64_t x180 = INT64_MIN;
	volatile uint64_t t30 = 595511LLU;

	t30 = (((x177^x178)-x179)*x180);

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x181 = 3LLU;
	int8_t x182 = -1;
	int32_t x183 = -16;
	int64_t x184 = INT64_MIN;
	static uint64_t t31 = 505LLU;

	t31 = (((x181^x182)-x183)*x184);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x193 = INT8_MAX;
	volatile int64_t x195 = -61951953818LL;
	int64_t x196 = -1LL;
	static int64_t t32 = -466819679888635978LL;

	t32 = (((x193^x194)-x195)*x196);

	if (t32 != -61951953690LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x205 = INT16_MIN;
	static int64_t x206 = 2328LL;
	int8_t x207 = 1;
	volatile int8_t x208 = INT8_MIN;
	volatile int64_t t33 = -7279LL;

	t33 = (((x205^x206)-x207)*x208);

	if (t33 != 3896448LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x209 = 116U;
	uint8_t x211 = 2U;
	static uint64_t x212 = 261516253075LLU;
	volatile uint64_t t34 = 3370LLU;

	t34 = (((x209^x210)-x211)*x212);

	if (t34 != 18446712953275435691LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x221 = -1LL;
	volatile int32_t x222 = INT32_MIN;
	static volatile int16_t x223 = -1;
	int32_t x224 = -1;

	t35 = (((x221^x222)-x223)*x224);

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = -36;
	volatile uint32_t x227 = UINT32_MAX;
	static int32_t x228 = -1;
	volatile uint32_t t36 = 86957625U;

	t36 = (((x225^x226)-x227)*x228);

	if (t36 != 4294967203U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x231 = 2U;
	uint16_t x232 = 13719U;
	volatile int32_t t37 = 71779;

	t37 = (((x229^x230)-x231)*x232);

	if (t37 != -41157) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x233 = -1;
	static uint64_t x234 = UINT64_MAX;
	int64_t x235 = -23341LL;
	volatile uint8_t x236 = 1U;
	uint64_t t38 = 275641086486358958LLU;

	t38 = (((x233^x234)-x235)*x236);

	if (t38 != 23341LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x237 = INT64_MIN;
	uint8_t x238 = 16U;
	uint64_t x239 = 258530829850775LLU;
	volatile uint64_t x240 = 8919214928671LLU;
	volatile uint64_t t39 = 10LLU;

	t39 = (((x237^x238)-x239)*x240);

	if (t39 != 12756222037082759847LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x242 = -1;
	int8_t x243 = 57;
	int16_t x244 = -1;

	t40 = (((x241^x242)-x243)*x244);

	if (t40 != 182U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x245 = 395U;
	int8_t x247 = -1;
	volatile int32_t x248 = -1;
	static uint32_t t41 = 2U;

	t41 = (((x245^x246)-x247)*x248);

	if (t41 != 2147483252U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = 0;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	uint64_t t42 = 168056997LLU;

	t42 = (((x249^x250)-x251)*x252);

	if (t42 != 1073741824LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x253 = 694U;
	int8_t x255 = INT8_MIN;
	int32_t x256 = -1;
	volatile int32_t t43 = -87708;

	t43 = (((x253^x254)-x255)*x256);

	if (t43 != 586) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x257 = INT16_MIN;
	uint32_t x258 = 244333330U;
	static volatile uint8_t x259 = UINT8_MAX;
	uint64_t t44 = 0LLU;

	t44 = (((x257^x258)-x259)*x260);

	if (t44 != 18446744069658920429LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x269 = 133LLU;
	int64_t x270 = -1359492799947420150LL;
	int16_t x271 = INT16_MAX;
	static uint8_t x272 = 7U;
	uint64_t t45 = 22015800013228196LLU;

	t45 = (((x269^x270)-x271)*x272);

	if (t45 != 8930294474077382128LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x277 = INT32_MAX;
	static int8_t x278 = 8;
	volatile uint16_t x279 = 0U;
	int8_t x280 = -1;

	t46 = (((x277^x278)-x279)*x280);

	if (t46 != -2147483639) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x281 = 230LLU;
	static uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MAX;
	uint64_t t47 = 3716046972LLU;

	t47 = (((x281^x282)-x283)*x284);

	if (t47 != 18446744073702015206LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x285 = -2;
	static volatile uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 1615106853758713873LLU;
	int64_t x288 = 2018LL;
	volatile uint64_t t48 = 213939665452674LLU;

	t48 = (((x285^x286)-x287)*x288);

	if (t48 != 5788070161506042336LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x289 = UINT8_MAX;
	volatile uint8_t x290 = 14U;
	volatile uint8_t x291 = 95U;
	uint16_t x292 = 214U;
	int32_t t49 = 2;

	t49 = (((x289^x290)-x291)*x292);

	if (t49 != 31244) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x294 = INT8_MIN;
	int16_t x295 = 1;
	uint32_t x296 = 412U;

	t50 = (((x293^x294)-x295)*x296);

	if (t50 != 51912U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MIN;
	int64_t x300 = 2613LL;
	volatile int64_t t51 = 7119885104762768LL;

	t51 = (((x297^x298)-x299)*x300);

	if (t51 != 5611373086839LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x303 = -1;
	volatile int8_t x304 = -42;
	volatile uint32_t t52 = 40U;

	t52 = (((x301^x302)-x303)*x304);

	if (t52 != 4294966288U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x306 = INT64_MIN;
	static int64_t x307 = INT64_MIN;
	static volatile int8_t x308 = -1;

	t53 = (((x305^x306)-x307)*x308);

	if (t53 != -2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x314 = 102;
	volatile int8_t x315 = INT8_MIN;

	t54 = (((x313^x314)-x315)*x316);

	if (t54 != 2760003706140476366LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = -1LL;
	uint32_t x318 = 2317331U;
	int32_t x319 = -180;
	volatile int32_t x320 = -1;
	volatile int64_t t55 = -203LL;

	t55 = (((x317^x318)-x319)*x320);

	if (t55 != 2317152LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x321 = 41U;
	uint64_t x322 = 4448914604756466LLU;
	static int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile uint64_t t56 = 6LLU;

	t56 = (((x321^x322)-x323)*x324);

	if (t56 != 1134473224212925605LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x325 = UINT32_MAX;
	static volatile int32_t x326 = INT32_MIN;
	static uint8_t x327 = 4U;
	volatile uint32_t t57 = 1050452U;

	t57 = (((x325^x326)-x327)*x328);

	if (t57 != 2147483013U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = -1;
	int8_t x336 = 2;
	int32_t t58 = 244467682;

	t58 = (((x333^x334)-x335)*x336);

	if (t58 != -766) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x338 = 0;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t59 = 54689;

	t59 = (((x337^x338)-x339)*x340);

	if (t59 != -4195200) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x341 = 6385052724059LLU;
	static int16_t x342 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile uint64_t t60 = 8165073655073211093LLU;

	t60 = (((x341^x342)-x343)*x344);

	if (t60 != 18445115885253865636LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = INT8_MIN;
	uint32_t t61 = 290U;

	t61 = (((x345^x346)-x347)*x348);

	if (t61 != 4281547136U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x350 = -373LL;
	int16_t x351 = -1;
	int64_t x352 = -24LL;
	volatile int64_t t62 = 736511464654206127LL;

	t62 = (((x349^x350)-x351)*x352);

	if (t62 != 51539598600LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x353 = UINT32_MAX;
	volatile int16_t x354 = -1;
	static int8_t x355 = -1;
	volatile int64_t x356 = -1LL;
	int64_t t63 = -682539265033LL;

	t63 = (((x353^x354)-x355)*x356);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x357 = 23364145U;
	int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	volatile uint64_t t64 = 33445640481518LLU;

	t64 = (((x357^x358)-x359)*x360);

	if (t64 != 527118475345LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 44225752903985762LLU;
	volatile uint64_t t65 = 447530341481LLU;

	t65 = (((x361^x362)-x363)*x364);

	if (t65 != 8147536420292143970LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x365 = 215143LLU;
	int16_t x366 = -39;
	uint64_t x367 = 116767738258657304LLU;
	uint8_t x368 = UINT8_MAX;
	volatile uint64_t t66 = 103688663642086LLU;

	t66 = (((x365^x366)-x367)*x368);

	if (t66 != 7117714891406638682LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x373 = 77U;
	volatile int32_t x374 = 1;
	int64_t x375 = 618537LL;
	int16_t x376 = INT16_MIN;
	volatile int64_t t67 = -25153293126LL;

	t67 = (((x373^x374)-x375)*x376);

	if (t67 != 20265730048LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x377 = 25899U;
	uint64_t x379 = 906573LLU;
	uint64_t t68 = 4674531427LLU;

	t68 = (((x377^x378)-x379)*x380);

	if (t68 != 6771297252183529905LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x385 = -1LL;
	uint16_t x386 = 9U;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MAX;
	static int64_t t69 = -11221818LL;

	t69 = (((x385^x386)-x387)*x388);

	if (t69 != -1143LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x389 = 157U;
	volatile int32_t x390 = INT32_MAX;
	static uint32_t x391 = 6442194U;
	uint64_t x392 = 128268612559LLU;
	volatile uint64_t t70 = 75LLU;

	t70 = (((x389^x390)-x391)*x392);

	if (t70 != 16373979437509513840LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x396 = 4U;
	volatile int64_t t71 = -502938150LL;

	t71 = (((x393^x394)-x395)*x396);

	if (t71 != -17179869184LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x398 = -1;
	volatile int8_t x399 = -1;
	uint64_t x400 = 108819156LLU;
	uint64_t t72 = 52967765453LLU;

	t72 = (((x397^x398)-x399)*x400);

	if (t72 != 3565786103808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x409 = INT32_MIN;
	volatile uint8_t x411 = 27U;
	uint64_t x412 = 253LLU;
	uint64_t t73 = 274469536995873279LLU;

	t73 = (((x409^x410)-x411)*x412);

	if (t73 != 9223371493541406033LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x413 = INT64_MIN;
	int16_t x414 = INT16_MIN;
	static int64_t x415 = 15LL;
	int32_t x416 = -1;
	volatile int64_t t74 = -30515120172963499LL;

	t74 = (((x413^x414)-x415)*x416);

	if (t74 != -9223372036854743025LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x417 = INT16_MIN;
	uint64_t x418 = 5756236838367LLU;
	int32_t x419 = INT32_MIN;
	int16_t x420 = -1;
	volatile uint64_t t75 = 35719853116414693LLU;

	t75 = (((x417^x418)-x419)*x420);

	if (t75 != 5754089359905LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x421 = INT16_MIN;
	int8_t x423 = INT8_MAX;
	volatile int64_t t76 = -7916526LL;

	t76 = (((x421^x422)-x423)*x424);

	if (t76 != 84136439168LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x426 = -1;
	volatile int16_t x427 = 1;
	int64_t x428 = 6840545LL;
	int64_t t77 = 13517979LL;

	t77 = (((x425^x426)-x427)*x428);

	if (t77 != -362548885LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x429 = -1;
	uint64_t x430 = UINT64_MAX;
	volatile uint64_t x431 = 5698LLU;
	int16_t x432 = INT16_MIN;
	volatile uint64_t t78 = 32219477160496969LLU;

	t78 = (((x429^x430)-x431)*x432);

	if (t78 != 186712064LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x433 = 4;
	static uint32_t x434 = 5U;
	uint64_t x435 = 2610692883558095LLU;
	static volatile uint64_t t79 = 8644LLU;

	t79 = (((x433^x434)-x435)*x436);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = -27;
	static uint64_t x438 = 602292288279143LLU;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	uint64_t t80 = 2213568926LLU;

	t80 = (((x437^x438)-x439)*x440);

	if (t80 != 77093412899733248LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x441 = INT32_MIN;
	static int32_t x442 = -421;
	static int64_t x443 = 2458LL;
	uint32_t x444 = 373506838U;
	int64_t t81 = 34226630994LL;

	t81 = (((x441^x442)-x443)*x444);

	if (t81 != 802098751694998422LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x449 = 9097503;
	int8_t x450 = INT8_MIN;
	int32_t x451 = -1;
	volatile int32_t t82 = 253555;

	t82 = (((x449^x450)-x451)*x452);

	if (t82 != -81878112) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x454 = -1;
	volatile int64_t x456 = -1LL;
	volatile int64_t t83 = 31513124850211506LL;

	t83 = (((x453^x454)-x455)*x456);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x458 = 2U;
	uint32_t x459 = 6379866U;

	t84 = (((x457^x458)-x459)*x460);

	if (t84 != 751174913U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x461 = 8U;
	static int32_t x462 = 11;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t85 = -416252;

	t85 = (((x461^x462)-x463)*x464);

	if (t85 != -131072) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MIN;
	int32_t x472 = -1;
	volatile int32_t t86 = -600543008;

	t86 = (((x469^x470)-x471)*x472);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x473 = UINT64_MAX;
	int32_t x474 = 854;
	volatile int64_t x476 = -174434168388LL;
	uint64_t t87 = 19162052799469833LLU;

	t87 = (((x473^x474)-x475)*x476);

	if (t87 != 126813640418076LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x477 = 3607531245LL;
	int64_t x479 = -1LL;
	int8_t x480 = -1;
	static int64_t t88 = 232957LL;

	t88 = (((x477^x478)-x479)*x480);

	if (t88 != -3607531147LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x483 = INT64_MIN;
	uint64_t x484 = 15478963930772917LLU;
	uint64_t t89 = 17663913050092LLU;

	t89 = (((x481^x482)-x483)*x484);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x485 = INT8_MIN;
	uint16_t x486 = 50U;
	static volatile int8_t x487 = INT8_MIN;
	static uint16_t x488 = UINT16_MAX;
	volatile int32_t t90 = -4254477;

	t90 = (((x485^x486)-x487)*x488);

	if (t90 != 3276750) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x490 = INT64_MAX;
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MIN;

	t91 = (((x489^x490)-x491)*x492);

	if (t91 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MIN;
	uint16_t x499 = 3452U;
	int32_t t92 = -71;

	t92 = (((x497^x498)-x499)*x500);

	if (t92 != -1028415) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x502 = INT16_MIN;
	volatile uint8_t x503 = 55U;
	int64_t x504 = INT64_MIN;
	volatile uint64_t t93 = 20394669963LLU;

	t93 = (((x501^x502)-x503)*x504);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = INT8_MIN;
	uint32_t x506 = UINT32_MAX;
	int16_t x507 = INT16_MIN;

	t94 = (((x505^x506)-x507)*x508);

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x509 = INT16_MAX;
	int16_t x510 = INT16_MAX;
	int16_t x511 = 2937;
	static uint64_t x512 = 3891895457144LLU;

	t95 = (((x509^x510)-x511)*x512);

	if (t95 != 18435313576751919688LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x513 = INT32_MIN;
	int32_t x514 = -753005;
	static int8_t x515 = INT8_MIN;
	static int8_t x516 = -1;
	volatile int32_t t96 = 0;

	t96 = (((x513^x514)-x515)*x516);

	if (t96 != -2146730771) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x517 = 15U;
	uint64_t x519 = 1927718418495LLU;
	static int64_t x520 = 185554LL;
	volatile uint64_t t97 = 1257LLU;

	t97 = (((x517^x518)-x519)*x520);

	if (t97 != 18089048216361394994LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x529 = UINT64_MAX;
	int16_t x530 = INT16_MIN;
	int64_t x532 = INT64_MIN;
	volatile uint64_t t98 = 190282819569908545LLU;

	t98 = (((x529^x530)-x531)*x532);

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x533 = 403;
	volatile uint16_t x534 = 0U;
	uint8_t x535 = 10U;
	volatile int32_t t99 = -1053;

	t99 = (((x533^x534)-x535)*x536);

	if (t99 != -101752809) { NG(); } else { ; }
	
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

