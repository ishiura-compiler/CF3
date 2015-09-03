#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = 1;
volatile uint32_t t0 = 1U;
static uint64_t x10 = UINT64_MAX;
volatile uint16_t x12 = UINT16_MAX;
volatile int8_t x15 = -7;
int32_t t3 = -11;
int8_t x24 = -1;
volatile int32_t x25 = -1;
uint16_t x27 = UINT16_MAX;
uint16_t x28 = 61U;
int32_t x36 = INT32_MAX;
static volatile int64_t t6 = 1LL;
int32_t x37 = INT32_MIN;
uint32_t x39 = UINT32_MAX;
int32_t x40 = INT32_MAX;
int32_t x45 = INT32_MAX;
volatile int64_t t16 = 172403472077629253LL;
static uint32_t x78 = 12U;
volatile int8_t x88 = INT8_MIN;
int64_t x94 = 26435LL;
volatile int64_t t21 = -386385250138327LL;
int16_t x98 = -1;
uint16_t x103 = 3976U;
int16_t x108 = INT16_MIN;
uint64_t x111 = 325043145506677528LLU;
volatile uint8_t x117 = UINT8_MAX;
int64_t x120 = 510576940898LL;
static int64_t t26 = 96574636903314485LL;
static int8_t x122 = INT8_MIN;
int8_t x128 = INT8_MIN;
volatile int64_t x129 = 154297651426604563LL;
uint16_t x136 = 25606U;
int8_t x138 = INT8_MIN;
int32_t x140 = INT32_MAX;
static uint32_t t32 = 49277859U;
int64_t t33 = 535263414LL;
uint32_t x157 = 102U;
uint64_t x159 = 59867793LLU;
static volatile uint64_t t37 = 246982559LLU;
int64_t x171 = -93701588414LL;
volatile int64_t t39 = -52315972117498955LL;
uint32_t x173 = UINT32_MAX;
uint64_t x175 = 16774261978LLU;
int16_t x176 = 7861;
int16_t x185 = -1;
int16_t x190 = INT16_MIN;
volatile int16_t x195 = INT16_MIN;
volatile uint64_t t46 = 10LLU;
int32_t x203 = -92251853;
int64_t t48 = 4889243022LL;
volatile uint8_t x209 = 5U;
int8_t x217 = INT8_MAX;
static uint32_t x218 = 35530U;
uint16_t x223 = 382U;
volatile uint32_t x229 = UINT32_MAX;
int32_t x230 = INT32_MAX;
static int64_t x232 = -8831983603167907LL;
static int64_t t54 = -270LL;
uint32_t x239 = UINT32_MAX;
uint8_t x251 = UINT8_MAX;
int32_t x258 = INT32_MAX;
uint32_t x265 = UINT32_MAX;
int64_t t62 = 36420943847099LL;
volatile int64_t x269 = INT64_MIN;
int64_t x279 = INT64_MIN;
volatile int64_t t65 = -6948LL;
int64_t x282 = INT64_MIN;
volatile int8_t x294 = INT8_MAX;
int64_t x302 = INT64_MIN;
volatile int64_t x314 = -1LL;
uint8_t x328 = 1U;
int16_t x333 = -1976;
uint16_t x338 = UINT16_MAX;
uint16_t x341 = UINT16_MAX;
int32_t x345 = -1;
volatile int64_t x351 = INT64_MIN;
int32_t t82 = -30014917;
volatile int64_t t83 = 29630LL;
static int16_t x361 = 425;
volatile int16_t x362 = INT16_MIN;
static int16_t x364 = INT16_MAX;
volatile int64_t t87 = 3241489809LL;
volatile uint32_t x385 = UINT32_MAX;
int64_t x388 = INT64_MIN;
int32_t x393 = -1;
uint64_t t90 = 29LLU;
int16_t x407 = INT16_MIN;
int64_t x410 = INT64_MAX;
int64_t x415 = -1LL;
static uint16_t x419 = UINT16_MAX;
static volatile int16_t x420 = -187;
int64_t x423 = INT64_MIN;
static int64_t x430 = INT64_MAX;


void f0(void) {
	uint16_t x1 = 789U;
	volatile int8_t x2 = INT8_MIN;
	uint32_t x4 = 165U;

	t0 = (((x1/x2)/x3)-x4);

	if (t0 != 4294967125U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	int16_t x8 = -1;
	volatile int64_t t1 = -1LL;

	t1 = (((x5/x6)/x7)-x8);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static volatile uint64_t x11 = UINT64_MAX;
	uint64_t t2 = 0LLU;

	t2 = (((x9/x10)/x11)-x12);

	if (t2 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3U;
	int8_t x14 = -58;
	volatile int16_t x16 = INT16_MAX;

	t3 = (((x13/x14)/x15)-x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -45;
	int32_t x22 = 2495;
	volatile int32_t x23 = INT32_MIN;
	volatile int32_t t4 = 845249748;

	t4 = (((x21/x22)/x23)-x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -1;
	static int32_t t5 = 369505249;

	t5 = (((x25/x26)/x27)-x28);

	if (t5 != -61) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -232609076LL;
	int8_t x34 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;

	t6 = (((x33/x34)/x35)-x36);

	if (t6 != -2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = INT64_MAX;
	static int64_t t7 = -1LL;

	t7 = (((x37/x38)/x39)-x40);

	if (t7 != -2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x41 = 164590605LLU;
	static uint32_t x42 = 639U;
	uint16_t x43 = 1462U;
	uint32_t x44 = UINT32_MAX;
	volatile uint64_t t8 = 2LLU;

	t8 = (((x41/x42)/x43)-x44);

	if (t8 != 18446744069414584497LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x46 = 71176925U;
	uint8_t x47 = 1U;
	static uint16_t x48 = 2019U;
	volatile uint32_t t9 = 6983476U;

	t9 = (((x45/x46)/x47)-x48);

	if (t9 != 4294965307U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 0;
	volatile uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = INT16_MAX;
	uint32_t t10 = 1074U;

	t10 = (((x49/x50)/x51)-x52);

	if (t10 != 4294934529U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 58LLU;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	static volatile uint64_t t11 = 1004407455LLU;

	t11 = (((x53/x54)/x55)-x56);

	if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 21U;
	static int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	static int16_t x60 = INT16_MAX;
	volatile int64_t t12 = 546051973373408LL;

	t12 = (((x57/x58)/x59)-x60);

	if (t12 != -32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	uint16_t x62 = 1U;
	uint16_t x63 = 6520U;
	volatile uint8_t x64 = 1U;
	volatile int32_t t13 = 45;

	t13 = (((x61/x62)/x63)-x64);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1;
	int32_t x66 = INT32_MAX;
	volatile int8_t x67 = INT8_MIN;
	volatile int64_t x68 = 123549LL;
	int64_t t14 = 84414488542693040LL;

	t14 = (((x65/x66)/x67)-x68);

	if (t14 != -123549LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = INT32_MAX;
	int8_t x70 = -4;
	uint8_t x71 = 107U;
	int8_t x72 = -57;
	volatile int32_t t15 = -103752;

	t15 = (((x69/x70)/x71)-x72);

	if (t15 != -5017428) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 6671400378177LL;
	volatile int32_t x74 = INT32_MAX;
	volatile int32_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t16 = (((x73/x74)/x75)-x76);

	if (t16 != 9223372036854772702LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -23420924725350LL;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;
	static int64_t t17 = 304194178181LL;

	t17 = (((x77/x78)/x79)-x80);

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	uint32_t x82 = UINT32_MAX;
	volatile int8_t x83 = INT8_MAX;
	static uint64_t x84 = 1897790342753LLU;
	volatile uint64_t t18 = 1590376831842LLU;

	t18 = (((x81/x82)/x83)-x84);

	if (t18 != 18446742175902299543LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	int64_t x86 = INT64_MIN;
	uint8_t x87 = 1U;
	int64_t t19 = -213308652LL;

	t19 = (((x85/x86)/x87)-x88);

	if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 0LLU;
	uint64_t x90 = 110LLU;
	int32_t x91 = -1;
	static int32_t x92 = INT32_MAX;
	uint64_t t20 = 1514112407076670139LLU;

	t20 = (((x89/x90)/x91)-x92);

	if (t20 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	static int8_t x95 = INT8_MAX;
	volatile uint8_t x96 = UINT8_MAX;

	t21 = (((x93/x94)/x95)-x96);

	if (t21 != -255LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = 63;
	volatile uint64_t x99 = 1376132577LLU;
	static uint16_t x100 = 394U;
	uint64_t t22 = 54189LLU;

	t22 = (((x97/x98)/x99)-x100);

	if (t22 != 13404772069LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MAX;
	volatile int32_t x104 = 26394634;
	uint64_t t23 = 9027835389156209LLU;

	t23 = (((x101/x102)/x103)-x104);

	if (t23 != 36531652009866LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = -1;
	uint64_t x107 = 68190LLU;
	static uint64_t t24 = 1506080802417LLU;

	t24 = (((x105/x106)/x107)-x108);

	if (t24 != 270519784073088LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 0;
	static volatile uint32_t x110 = 1U;
	int16_t x112 = INT16_MIN;
	volatile uint64_t t25 = 559958LLU;

	t25 = (((x109/x110)/x111)-x112);

	if (t25 != 32768LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x118 = -1;
	static int64_t x119 = -16949220019499LL;

	t26 = (((x117/x118)/x119)-x120);

	if (t26 != -510576940898LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 129644417670LL;
	int16_t x123 = -1;
	uint32_t x124 = 11986U;
	int64_t t27 = 92879650350597660LL;

	t27 = (((x121/x122)/x123)-x124);

	if (t27 != 1012835027LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = INT32_MAX;
	static volatile int64_t x126 = -1LL;
	int8_t x127 = INT8_MAX;
	volatile int64_t t28 = -1400127LL;

	t28 = (((x125/x126)/x127)-x128);

	if (t28 != -16909192LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x130 = 1;
	static volatile uint64_t x131 = 1834885813014560165LLU;
	volatile int32_t x132 = -1;
	volatile uint64_t t29 = 1LLU;

	t29 = (((x129/x130)/x131)-x132);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 2844U;
	uint16_t x134 = 3487U;
	int32_t x135 = -1;
	static volatile int32_t t30 = 1154262;

	t30 = (((x133/x134)/x135)-x136);

	if (t30 != -25606) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -1;
	uint32_t x139 = 14772628U;
	volatile uint32_t t31 = 312526U;

	t31 = (((x137/x138)/x139)-x140);

	if (t31 != 2147483649U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	static uint32_t x142 = UINT32_MAX;
	int32_t x143 = 977171;
	uint16_t x144 = 131U;

	t32 = (((x141/x142)/x143)-x144);

	if (t32 != 4294967165U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	int64_t x146 = -1LL;
	uint16_t x147 = 27U;
	volatile int16_t x148 = -45;

	t33 = (((x145/x146)/x147)-x148);

	if (t33 != -1168LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = 460;
	static volatile int16_t x150 = INT16_MIN;
	static int8_t x151 = 3;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t34 = 679LLU;

	t34 = (((x149/x150)/x151)-x152);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = UINT64_MAX;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	uint64_t t35 = 1090739121365777LLU;

	t35 = (((x153/x154)/x155)-x156);

	if (t35 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = INT8_MIN;
	volatile uint64_t x160 = 9764382067245LLU;
	uint64_t t36 = 4554955730860485744LLU;

	t36 = (((x157/x158)/x159)-x160);

	if (t36 != 18446734309327484371LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = UINT16_MAX;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = 3;
	static uint64_t x164 = 20931454646LLU;

	t37 = (((x161/x162)/x163)-x164);

	if (t37 != 18446744052778096970LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 1508883027422LLU;
	int32_t x166 = INT32_MAX;
	uint64_t x167 = 7680LLU;
	int64_t x168 = 613972LL;
	volatile uint64_t t38 = 54617428296LLU;

	t38 = (((x165/x166)/x167)-x168);

	if (t38 != 18446744073708937644LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MAX;
	volatile int64_t x170 = -1LL;
	volatile int8_t x172 = -52;

	t39 = (((x169/x170)/x171)-x172);

	if (t39 != 52LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x174 = UINT64_MAX;
	volatile uint64_t t40 = 8536980205900LLU;

	t40 = (((x173/x174)/x175)-x176);

	if (t40 != 18446744073709543755LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	volatile uint16_t x178 = 2U;
	static uint32_t x179 = 1724779732U;
	int16_t x180 = -1;
	static uint32_t t41 = 815304U;

	t41 = (((x177/x178)/x179)-x180);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x181 = 47924U;
	volatile int64_t x182 = 128334LL;
	int32_t x183 = INT32_MIN;
	int64_t x184 = 63851923626742LL;
	int64_t t42 = 1782690720302981967LL;

	t42 = (((x181/x182)/x183)-x184);

	if (t42 != -63851923626742LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x186 = -25311616938LL;
	int64_t x187 = INT64_MIN;
	int8_t x188 = -1;
	int64_t t43 = 0LL;

	t43 = (((x185/x186)/x187)-x188);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile int64_t x191 = 45971731959LL;
	static int8_t x192 = INT8_MIN;
	volatile int64_t t44 = 695716988LL;

	t44 = (((x189/x190)/x191)-x192);

	if (t44 != 128LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 17U;
	uint32_t x194 = 37009U;
	uint8_t x196 = 30U;
	volatile uint32_t t45 = 0U;

	t45 = (((x193/x194)/x195)-x196);

	if (t45 != 4294967266U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = -4720040;
	int32_t x198 = INT32_MIN;
	int16_t x199 = -3;
	static uint64_t x200 = UINT64_MAX;

	t46 = (((x197/x198)/x199)-x200);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = -5;
	int64_t x204 = -1LL;
	volatile int64_t t47 = 205LL;

	t47 = (((x201/x202)/x203)-x204);

	if (t47 != -19996068884LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	volatile int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -1;

	t48 = (((x205/x206)/x207)-x208);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x210 = INT8_MIN;
	int64_t x211 = -14252481287228LL;
	int16_t x212 = 0;
	int64_t t49 = 55835LL;

	t49 = (((x209/x210)/x211)-x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MAX;
	static volatile int32_t x214 = INT32_MIN;
	uint64_t x215 = 54466201719721437LLU;
	volatile uint16_t x216 = 36U;
	volatile uint64_t t50 = 10406529LLU;

	t50 = (((x213/x214)/x215)-x216);

	if (t50 != 302LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x219 = 575U;
	volatile int32_t x220 = 2090;
	uint32_t t51 = 181609881U;

	t51 = (((x217/x218)/x219)-x220);

	if (t51 != 4294965206U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x224 = 1673584U;
	static uint32_t t52 = 10U;

	t52 = (((x221/x222)/x223)-x224);

	if (t52 != 4293293541U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 32408U;
	int64_t x226 = 124LL;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 11U;
	static int64_t t53 = 4662223663520940LL;

	t53 = (((x225/x226)/x227)-x228);

	if (t53 != -13LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x231 = 9U;

	t54 = (((x229/x230)/x231)-x232);

	if (t54 != 8831983603167907LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -7742938;
	int64_t x234 = INT64_MAX;
	static volatile int8_t x235 = -1;
	uint8_t x236 = UINT8_MAX;
	int64_t t55 = 34959657854112LL;

	t55 = (((x233/x234)/x235)-x236);

	if (t55 != -255LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	int64_t t56 = 16700114913488LL;

	t56 = (((x237/x238)/x239)-x240);

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -471002773011250LL;
	static volatile int64_t t57 = 18962321969LL;

	t57 = (((x241/x242)/x243)-x244);

	if (t57 != 471002773011250LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 0;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -1;
	int32_t x248 = 301819;
	static int32_t t58 = 1444;

	t58 = (((x245/x246)/x247)-x248);

	if (t58 != -301819) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x249 = 27U;
	int32_t x250 = -72;
	int32_t x252 = 1;
	static int32_t t59 = 129215;

	t59 = (((x249/x250)/x251)-x252);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = INT16_MIN;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MIN;
	volatile int64_t t60 = -21674715020LL;

	t60 = (((x257/x258)/x259)-x260);

	if (t60 != 2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 476LLU;
	static int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	static volatile int32_t x264 = INT32_MAX;
	uint64_t t61 = 10001991LLU;

	t61 = (((x261/x262)/x263)-x264);

	if (t61 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x266 = -468;
	int64_t x267 = INT64_MAX;
	int8_t x268 = INT8_MIN;

	t62 = (((x265/x266)/x267)-x268);

	if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x270 = INT16_MAX;
	static int8_t x271 = INT8_MIN;
	uint64_t x272 = 5315265877120LLU;
	uint64_t t63 = 637811115767LLU;

	t63 = (((x269/x270)/x271)-x272);

	if (t63 != 18446740957534040960LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = INT8_MIN;
	volatile uint64_t x275 = 78286284LLU;
	uint64_t x276 = 2690485769669334LLU;
	uint64_t t64 = 336118073480273326LLU;

	t64 = (((x273/x274)/x275)-x276);

	if (t64 != 18444053823571759683LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 92U;
	int32_t x278 = INT32_MIN;
	int64_t x280 = -80657925388LL;

	t65 = (((x277/x278)/x279)-x280);

	if (t65 != 80657925388LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x281 = 28U;
	static uint32_t x283 = 16U;
	int32_t x284 = INT32_MIN;
	volatile int64_t t66 = -30528863834307LL;

	t66 = (((x281/x282)/x283)-x284);

	if (t66 != 2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = 9U;
	static int8_t x286 = 2;
	uint8_t x287 = UINT8_MAX;
	volatile uint8_t x288 = UINT8_MAX;
	int32_t t67 = -19857;

	t67 = (((x285/x286)/x287)-x288);

	if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x289 = 74;
	uint8_t x290 = 7U;
	uint32_t x291 = 300U;
	int8_t x292 = INT8_MIN;
	uint32_t t68 = 7U;

	t68 = (((x289/x290)/x291)-x292);

	if (t68 != 128U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x293 = 98U;
	uint64_t x295 = 227030863752LLU;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t69 = 24881970032820759LLU;

	t69 = (((x293/x294)/x295)-x296);

	if (t69 != 128LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	static int16_t x298 = INT16_MAX;
	volatile uint64_t x299 = 508533LLU;
	uint8_t x300 = 0U;
	uint64_t t70 = 3597534317803LLU;

	t70 = (((x297/x298)/x299)-x300);

	if (t70 != 36274428746432LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = INT64_MIN;
	uint64_t x303 = 17LLU;
	volatile int8_t x304 = INT8_MAX;
	uint64_t t71 = 12LLU;

	t71 = (((x301/x302)/x303)-x304);

	if (t71 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -1LL;
	static volatile int16_t x306 = INT16_MIN;
	static int16_t x307 = INT16_MIN;
	int32_t x308 = -1;
	volatile int64_t t72 = -102762897939485596LL;

	t72 = (((x305/x306)/x307)-x308);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x313 = 463726319LLU;
	volatile uint32_t x315 = 6688051U;
	static uint8_t x316 = 1U;
	uint64_t t73 = UINT64_MAX;

	t73 = (((x313/x314)/x315)-x316);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = 58;
	volatile int16_t x318 = INT16_MIN;
	static int8_t x319 = 1;
	int16_t x320 = 0;
	static volatile int32_t t74 = 23053853;

	t74 = (((x317/x318)/x319)-x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = 30;
	int8_t x322 = INT8_MAX;
	static int16_t x323 = -682;
	uint8_t x324 = 0U;
	volatile int32_t t75 = -27853;

	t75 = (((x321/x322)/x323)-x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x326 = 844U;
	int16_t x327 = -1;
	volatile int32_t t76 = -317041;

	t76 = (((x325/x326)/x327)-x328);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x334 = INT32_MIN;
	uint32_t x335 = 1094322U;
	uint8_t x336 = UINT8_MAX;
	uint32_t t77 = 10U;

	t77 = (((x333/x334)/x335)-x336);

	if (t77 != 4294967041U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MIN;
	int64_t x339 = 7LL;
	int64_t x340 = 10398889617774295LL;
	volatile int64_t t78 = -10640105LL;

	t78 = (((x337/x338)/x339)-x340);

	if (t78 != -10418995280041687LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x342 = INT16_MIN;
	uint32_t x343 = 7560332U;
	int32_t x344 = INT32_MIN;
	static volatile uint32_t t79 = 106U;

	t79 = (((x341/x342)/x343)-x344);

	if (t79 != 2147484216U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x346 = 6;
	int16_t x347 = INT16_MAX;
	uint32_t x348 = 52547U;
	static uint32_t t80 = 7U;

	t80 = (((x345/x346)/x347)-x348);

	if (t80 != 4294914749U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = 26472706U;
	int8_t x350 = -1;
	static uint64_t x352 = 1LLU;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x349/x350)/x351)-x352);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = -2432724;
	int16_t x354 = 461;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MAX;

	t82 = (((x353/x354)/x355)-x356);

	if (t82 != -32808) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x357 = INT16_MAX;
	int32_t x358 = -1656;
	uint32_t x359 = 14182U;
	int64_t x360 = INT64_MAX;

	t83 = (((x357/x358)/x359)-x360);

	if (t83 != -9223372036854472961LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x363 = UINT8_MAX;
	volatile int32_t t84 = 1;

	t84 = (((x361/x362)/x363)-x364);

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x365 = INT8_MAX;
	uint64_t x366 = 205368082012422LLU;
	int32_t x367 = INT32_MIN;
	volatile int64_t x368 = INT64_MIN;
	uint64_t t85 = 234862LLU;

	t85 = (((x365/x366)/x367)-x368);

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	static int8_t x370 = -4;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MIN;
	volatile int64_t t86 = -11319335743656189LL;

	t86 = (((x369/x370)/x371)-x372);

	if (t86 != 128LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = -96;
	volatile int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int64_t x380 = 445655LL;

	t87 = (((x377/x378)/x379)-x380);

	if (t87 != -445655LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x386 = -1LL;
	int64_t x387 = 752LL;
	int64_t t88 = -27401733016516786LL;

	t88 = (((x385/x386)/x387)-x388);

	if (t88 != 9223372036849064416LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = 172U;
	int16_t x391 = -1;
	volatile int8_t x392 = INT8_MAX;
	uint32_t t89 = 4487495U;

	t89 = (((x389/x390)/x391)-x392);

	if (t89 != 4294967169U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x394 = UINT64_MAX;
	int16_t x395 = -1;
	uint32_t x396 = 89766506U;

	t90 = (((x393/x394)/x395)-x396);

	if (t90 != 18446744073619785110LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = -615530244;
	int16_t x400 = -1;
	volatile uint64_t t91 = 2067069302114773997LLU;

	t91 = (((x397/x398)/x399)-x400);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x401 = INT32_MIN;
	uint16_t x402 = 4U;
	static volatile uint32_t x403 = 6U;
	int16_t x404 = -1;
	volatile uint32_t t92 = 1580728484U;

	t92 = (((x401/x402)/x403)-x404);

	if (t92 != 626349398U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	static uint8_t x406 = UINT8_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t93 = -165;

	t93 = (((x405/x406)/x407)-x408);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = 3U;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = 997;
	uint64_t t94 = 21LLU;

	t94 = (((x409/x410)/x411)-x412);

	if (t94 != 18446744073709550619LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x413 = -251786LL;
	uint16_t x414 = UINT16_MAX;
	int64_t x416 = INT64_MAX;
	volatile int64_t t95 = 6439521LL;

	t95 = (((x413/x414)/x415)-x416);

	if (t95 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x417 = 0;
	uint32_t x418 = 325861U;
	volatile uint32_t t96 = 1244691U;

	t96 = (((x417/x418)/x419)-x420);

	if (t96 != 187U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = 25309644754LL;
	int8_t x422 = -11;
	static uint32_t x424 = 16864U;
	static int64_t t97 = -69LL;

	t97 = (((x421/x422)/x423)-x424);

	if (t97 != -16864LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = 6U;
	volatile int32_t x426 = INT32_MIN;
	uint32_t x427 = 66U;
	uint16_t x428 = 13U;
	static uint32_t t98 = 136U;

	t98 = (((x425/x426)/x427)-x428);

	if (t98 != 4294967283U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = UINT16_MAX;
	static int64_t x431 = -1LL;
	volatile int8_t x432 = -1;
	volatile int64_t t99 = 266837681LL;

	t99 = (((x429/x430)/x431)-x432);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

