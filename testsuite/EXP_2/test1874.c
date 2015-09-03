#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -61;
int8_t x13 = INT8_MIN;
volatile int32_t x20 = INT32_MAX;
static volatile uint16_t x24 = 5U;
volatile int64_t x31 = INT64_MAX;
uint8_t x37 = UINT8_MAX;
uint8_t x43 = 0U;
static uint16_t x49 = 760U;
uint16_t x51 = 1U;
int16_t x55 = -1;
static uint64_t x70 = 60237LLU;
uint16_t x72 = 8U;
volatile int8_t x73 = 20;
uint8_t x74 = 0U;
volatile int64_t x76 = -1LL;
uint32_t x78 = 388202163U;
static int8_t x82 = -3;
int16_t x87 = INT16_MIN;
static volatile uint64_t t20 = 13113807508LLU;
static int8_t x96 = INT8_MAX;
volatile uint64_t t22 = 9LLU;
int32_t t23 = -63;
uint64_t x118 = 749799413337LLU;
volatile uint8_t x120 = 3U;
int64_t x121 = 1160827815306685LL;
int8_t x123 = -1;
int8_t x132 = INT8_MIN;
uint64_t t29 = 67720550829764042LLU;
int8_t x141 = 63;
int16_t x143 = 0;
static int8_t x145 = -2;
static volatile int32_t x147 = -1;
int64_t x148 = 1LL;
int64_t x149 = INT64_MAX;
uint8_t x157 = 114U;
int16_t x159 = INT16_MAX;
volatile int8_t x160 = -1;
static int16_t x169 = -15983;
static int8_t x173 = -1;
uint64_t t37 = 84LLU;
int32_t x182 = -1;
volatile int32_t t38 = -4;
int64_t x188 = 1876LL;
uint64_t x195 = 194282299905932LLU;
int64_t x196 = -1LL;
int16_t x197 = INT16_MAX;
int8_t x202 = INT8_MIN;
volatile uint8_t x207 = UINT8_MAX;
int16_t x208 = INT16_MIN;
int8_t x214 = INT8_MIN;
int16_t x217 = INT16_MIN;
uint64_t x224 = UINT64_MAX;
int32_t x231 = 4448;
int8_t x234 = INT8_MIN;
int64_t x240 = -1LL;
volatile int64_t t50 = 383536045614LL;
volatile int32_t x241 = -19551773;
int32_t x243 = -1;
int64_t t51 = 139827012042979LL;
int64_t x245 = -1LL;
volatile uint64_t t53 = 95673675LLU;
int16_t x256 = 4043;
volatile int64_t t54 = 22686094904430758LL;
volatile uint64_t t55 = 2084829528498840LLU;
volatile uint32_t x265 = 43U;
static uint16_t x271 = 393U;
uint16_t x275 = UINT16_MAX;
int64_t x277 = 1777003162896615077LL;
static int8_t x278 = -1;
volatile int64_t t60 = -1LL;
int16_t x285 = -5;
static uint8_t x286 = 26U;
uint16_t x288 = 171U;
int16_t x299 = INT16_MAX;
int64_t x306 = -1LL;
static int64_t x308 = -1LL;
static uint8_t x312 = UINT8_MAX;
volatile int32_t t66 = -583;
int64_t x318 = -736191462LL;
static int32_t x321 = -1;
volatile uint64_t t69 = 843063320513773990LLU;
volatile uint16_t x325 = 1180U;
static int32_t x326 = INT32_MAX;
volatile int16_t x327 = INT16_MIN;
int32_t x330 = INT32_MIN;
int8_t x333 = INT8_MAX;
static volatile uint64_t t72 = 3557426980175939LLU;
static uint64_t x340 = 471672150036146LLU;
uint16_t x357 = 487U;
int8_t x361 = INT8_MAX;
uint8_t x366 = 2U;
static int32_t x373 = 1505;
int32_t x381 = -3;
int32_t x385 = INT32_MIN;
uint8_t x389 = 8U;
int16_t x396 = INT16_MIN;
uint16_t x403 = UINT16_MAX;
uint32_t x404 = 435U;
int16_t x410 = -61;
volatile int32_t t88 = 6417;
volatile uint16_t x414 = UINT16_MAX;
static int8_t x418 = -1;
volatile uint64_t t90 = 25053LLU;
int16_t x435 = -9132;
static int32_t x436 = -3978;
int32_t x440 = -3;
static int32_t x443 = -1;
int16_t x450 = INT16_MIN;
int16_t x451 = -10;
uint32_t x460 = 10691772U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = 510014LL;
	uint16_t x3 = 13952U;
	volatile int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -1089362405720175LL;

	t0 = ((x1-(x2|x3))-x4);

	if (t0 != 2146959809LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	int64_t x8 = -4493LL;
	volatile uint64_t t1 = 1990999887LLU;

	t1 = ((x5-(x6|x7))-x8);

	if (t1 != 4433LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MAX;
	volatile int8_t x12 = INT8_MAX;
	volatile uint32_t t2 = 139U;

	t2 = ((x9-(x10|x11))-x12);

	if (t2 != 2147483521U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -152;
	static int16_t x15 = INT16_MAX;
	static int32_t x16 = 4114035;
	volatile int32_t t3 = -26292550;

	t3 = ((x13-(x14|x15))-x16);

	if (t3 != -4114162) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	uint32_t x19 = 191U;
	volatile uint64_t t4 = 23386428LLU;

	t4 = ((x17-(x18|x19))-x20);

	if (t4 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 20800039U;
	int32_t x22 = -336;
	static int64_t x23 = INT64_MIN;
	int64_t t5 = 773231003LL;

	t5 = ((x21-(x22|x23))-x24);

	if (t5 != 20800370LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = 17198239989648LL;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 829LLU;
	static volatile int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 1808613151651LLU;

	t6 = ((x25-(x26|x27))-x28);

	if (t6 != 17198240021715LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static uint64_t x30 = UINT64_MAX;
	static uint32_t x32 = 1U;
	volatile uint64_t t7 = 9023687765LLU;

	t7 = ((x29-(x30|x31))-x32);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x34 = 511U;
	volatile uint16_t x35 = 300U;
	static volatile uint8_t x36 = 0U;
	volatile uint32_t t8 = 1136745432U;

	t8 = ((x33-(x34|x35))-x36);

	if (t8 != 2147483136U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x37-(x38|x39))-x40);

	if (t9 != -32512) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	volatile int64_t x42 = -237241815LL;
	static int32_t x44 = -4147591;
	volatile int64_t t10 = 35964228770317806LL;

	t10 = ((x41-(x42|x43))-x44);

	if (t10 != 4536356701LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 501LL;
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = -1;
	int64_t t11 = -46146LL;

	t11 = ((x45-(x46|x47))-x48);

	if (t11 != 630LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	uint8_t x52 = 1U;
	int32_t t12 = -285790323;

	t12 = ((x49-(x50|x51))-x52);

	if (t12 != 760) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint32_t x54 = 1510U;
	uint64_t x56 = 54617205792555988LLU;
	uint64_t t13 = 43579173265634341LLU;

	t13 = ((x53-(x54|x55))-x56);

	if (t13 != 18392126867916995628LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 0;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;
	volatile int64_t t14 = -1321733LL;

	t14 = ((x57-(x58|x59))-x60);

	if (t14 != 129LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 306892175409189523LLU;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -5548337046LL;
	uint64_t t15 = 94LLU;

	t15 = ((x61-(x62|x63))-x64);

	if (t15 != 10990671106LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x71 = -1LL;
	uint64_t t16 = 791LLU;

	t16 = ((x69-(x70|x71))-x72);

	if (t16 != 65528LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x75 = 10171900LLU;
	volatile uint64_t t17 = 131075473LLU;

	t17 = ((x73-(x74|x75))-x76);

	if (t17 != 18446744073699379737LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int64_t x79 = -1LL;
	volatile int16_t x80 = INT16_MIN;
	volatile int64_t t18 = -602538676184795LL;

	t18 = ((x77-(x78|x79))-x80);

	if (t18 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	static int64_t x84 = -1860LL;
	int64_t t19 = -96856956442474950LL;

	t19 = ((x81-(x82|x83))-x84);

	if (t19 != -9223372036854773945LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	static uint64_t x86 = 603222LLU;
	uint64_t x88 = 40575LLU;

	t20 = ((x85-(x86|x87))-x88);

	if (t20 != 18446744073709530410LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x90 = -1707324LL;
	int64_t x91 = -24683630487LL;
	static int64_t x92 = -6669316558883LL;
	int64_t t21 = -648259560284466LL;

	t21 = ((x89-(x90|x91))-x92);

	if (t21 != -9223365367538082506LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 733868329;
	uint64_t x94 = 13232339709874LLU;
	static volatile int32_t x95 = INT32_MAX;

	t22 = ((x93-(x94|x95))-x96);

	if (t22 != 18446730841649180843LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = 11;
	static uint16_t x99 = 1538U;
	uint16_t x100 = 0U;

	t23 = ((x97-(x98|x99))-x100);

	if (t23 != -1675) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = 1;
	int16_t x106 = 86;
	int16_t x107 = 1;
	volatile int64_t x108 = -27041733618220LL;
	int64_t t24 = 57899849585733772LL;

	t24 = ((x105-(x106|x107))-x108);

	if (t24 != 27041733618134LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = 763077;
	int64_t x110 = INT64_MAX;
	static int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	volatile int64_t t25 = -1382123LL;

	t25 = ((x109-(x110|x111))-x112);

	if (t25 != -9223372036853979962LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 972368836LL;
	static int64_t x119 = INT64_MAX;
	uint64_t t26 = 2026425854052207LLU;

	t26 = ((x117-(x118|x119))-x120);

	if (t26 != 9223372037827144642LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x122 = 28268041525LLU;
	int8_t x124 = INT8_MIN;
	uint64_t t27 = 234969301218LLU;

	t27 = ((x121-(x122|x123))-x124);

	if (t27 != 1160827815306814LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = 40824625751432291LLU;
	int64_t x131 = INT64_MAX;
	static volatile uint64_t t28 = 5670874985028282057LLU;

	t28 = ((x129-(x130|x131))-x132);

	if (t28 != 9223372036854743169LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 12U;
	int64_t x134 = 147LL;
	static uint64_t x135 = UINT64_MAX;
	volatile int16_t x136 = 2;

	t29 = ((x133-(x134|x135))-x136);

	if (t29 != 11LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x142 = 1;
	static int64_t x144 = -1LL;
	int64_t t30 = -108517315693LL;

	t30 = ((x141-(x142|x143))-x144);

	if (t30 != 63LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x146 = 58;
	int64_t t31 = -2755121LL;

	t31 = ((x145-(x146|x147))-x148);

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x150 = INT64_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t32 = 808531269375539LLU;

	t32 = ((x149-(x150|x151))-x152);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = -1LL;
	int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	int64_t t33 = -94332020844LL;

	t33 = ((x153-(x154|x155))-x156);

	if (t33 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x158 = 370;
	volatile int32_t t34 = 36177;

	t34 = ((x157-(x158|x159))-x160);

	if (t34 != -32652) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = 59167;
	volatile int64_t x167 = -1LL;
	static int8_t x168 = -50;
	static int64_t t35 = 3LL;

	t35 = ((x165-(x166|x167))-x168);

	if (t35 != -2147483597LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x170 = 2;
	uint64_t x171 = 14688529010731433LLU;
	int8_t x172 = -1;
	uint64_t t36 = 23335806739451LLU;

	t36 = ((x169-(x170|x171))-x172);

	if (t36 != 18432055544698804199LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x174 = 14996LLU;
	int8_t x175 = 3;
	static volatile uint64_t x176 = UINT64_MAX;

	t37 = ((x173-(x174|x175))-x176);

	if (t37 != 18446744073709536617LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x181 = INT16_MIN;
	static int16_t x183 = -1;
	int16_t x184 = -28;

	t38 = ((x181-(x182|x183))-x184);

	if (t38 != -32739) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	static volatile int32_t x186 = INT32_MIN;
	static volatile int16_t x187 = INT16_MIN;
	volatile int64_t t39 = 62005938604325LL;

	t39 = ((x185-(x186|x187))-x188);

	if (t39 != 30764LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x194 = UINT64_MAX;
	volatile uint64_t t40 = 4001LLU;

	t40 = ((x193-(x194|x195))-x196);

	if (t40 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x198 = -1LL;
	int8_t x199 = INT8_MIN;
	static uint8_t x200 = UINT8_MAX;
	static volatile int64_t t41 = -20490583868144154LL;

	t41 = ((x197-(x198|x199))-x200);

	if (t41 != 32513LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = 1;
	int32_t x203 = 442;
	int8_t x204 = INT8_MIN;
	volatile int32_t t42 = 26324;

	t42 = ((x201-(x202|x203))-x204);

	if (t42 != 199) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = 0U;
	uint32_t x206 = 10597925U;
	uint32_t t43 = 8U;

	t43 = ((x205-(x206|x207))-x208);

	if (t43 != 4284401921U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x209 = 3U;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = 6524U;
	volatile uint32_t t44 = 1047608555U;

	t44 = ((x209-(x210|x211))-x212);

	if (t44 != 26120U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 135527U;
	int64_t x215 = -67931058370458LL;
	int8_t x216 = INT8_MIN;
	int64_t t45 = -9506LL;

	t45 = ((x213-(x214|x215))-x216);

	if (t45 != 135681LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x218 = -1;
	int64_t x219 = INT64_MAX;
	int16_t x220 = -3;
	int64_t t46 = -252272288551424LL;

	t46 = ((x217-(x218|x219))-x220);

	if (t46 != -32764LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x221 = 25;
	int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	uint64_t t47 = 28611002480122459LLU;

	t47 = ((x221-(x222|x223))-x224);

	if (t47 != 27LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = -1;
	int8_t x230 = -1;
	int64_t x232 = 55363175457518LL;
	volatile int64_t t48 = -1329718LL;

	t48 = ((x229-(x230|x231))-x232);

	if (t48 != -55363175457518LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = -1;
	volatile int32_t x235 = INT32_MIN;
	int32_t x236 = -1;
	int32_t t49 = 124861631;

	t49 = ((x233-(x234|x235))-x236);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MIN;
	volatile int8_t x238 = -1;
	uint32_t x239 = 2398U;

	t50 = ((x237-(x238|x239))-x240);

	if (t50 != 2147483650LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x242 = -166082946912271886LL;
	uint32_t x244 = 17U;

	t51 = ((x241-(x242|x243))-x244);

	if (t51 != -19551789LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x246 = 53167040116497333LLU;
	int16_t x247 = -1;
	static uint32_t x248 = 367U;
	volatile uint64_t t52 = 379747234530LLU;

	t52 = ((x245-(x246|x247))-x248);

	if (t52 != 18446744073709551249LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = 2762891183LLU;
	int8_t x250 = 8;
	uint16_t x251 = 2U;
	static int16_t x252 = -1;

	t53 = ((x249-(x250|x251))-x252);

	if (t53 != 2762891174LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = 61U;

	t54 = ((x253-(x254|x255))-x256);

	if (t54 != 9223372036854771703LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 304U;
	int16_t x258 = INT16_MIN;
	uint64_t x259 = 29LLU;
	static int16_t x260 = INT16_MIN;

	t55 = ((x257-(x258|x259))-x260);

	if (t55 != 65811LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x261 = 5078102067656809LL;
	static uint8_t x262 = 2U;
	int32_t x263 = -4824;
	static int8_t x264 = INT8_MAX;
	int64_t t56 = 422284LL;

	t56 = ((x261-(x262|x263))-x264);

	if (t56 != 5078102067661504LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x266 = INT16_MIN;
	int64_t x267 = 6021232886874LL;
	int32_t x268 = 60847104;
	static volatile int64_t t57 = -86838230LL;

	t57 = ((x265-(x266|x267))-x268);

	if (t57 != -60815407LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -1524104;
	static int8_t x270 = -1;
	int32_t x272 = -24;
	int32_t t58 = 2;

	t58 = ((x269-(x270|x271))-x272);

	if (t58 != -1524079) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = -1;
	static uint64_t x274 = 6482451905LLU;
	int64_t x276 = -151292779261901LL;
	static uint64_t t59 = 4120822029546640LLU;

	t59 = ((x273-(x274|x275))-x276);

	if (t59 != 151286296768461LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x279 = INT8_MIN;
	uint8_t x280 = UINT8_MAX;

	t60 = ((x277-(x278|x279))-x280);

	if (t60 != 1777003162896614823LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x287 = -1;
	volatile int32_t t61 = -6824;

	t61 = ((x285-(x286|x287))-x288);

	if (t61 != -175) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x289 = 870621030;
	uint8_t x290 = 1U;
	int16_t x291 = 8;
	int8_t x292 = INT8_MIN;
	static int32_t t62 = 4787;

	t62 = ((x289-(x290|x291))-x292);

	if (t62 != 870621149) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = UINT64_MAX;
	static int64_t x298 = INT64_MIN;
	volatile int16_t x300 = INT16_MAX;
	volatile uint64_t t63 = 0LLU;

	t63 = ((x297-(x298|x299))-x300);

	if (t63 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x301 = 10U;
	uint32_t x302 = 934U;
	volatile int64_t x303 = INT64_MIN;
	static uint32_t x304 = 234263260U;
	volatile int64_t t64 = 1LL;

	t64 = ((x301-(x302|x303))-x304);

	if (t64 != 9223372036620511624LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 189259438653201LLU;
	static int64_t x307 = 529732341LL;
	volatile uint64_t t65 = 4588793169324702206LLU;

	t65 = ((x305-(x306|x307))-x308);

	if (t65 != 189259438653203LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x309 = -205;
	int16_t x310 = INT16_MIN;
	uint16_t x311 = 16U;

	t66 = ((x309-(x310|x311))-x312);

	if (t66 != 32292) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = 2;
	static int8_t x314 = INT8_MIN;
	static int8_t x315 = INT8_MIN;
	volatile int64_t x316 = INT64_MAX;
	int64_t t67 = -3330707433538LL;

	t67 = ((x313-(x314|x315))-x316);

	if (t67 != -9223372036854775677LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = 7;
	static int32_t x319 = INT32_MAX;
	uint8_t x320 = 0U;
	volatile int64_t t68 = -5777LL;

	t68 = ((x317-(x318|x319))-x320);

	if (t68 != 8LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x322 = 2U;
	static uint64_t x323 = UINT64_MAX;
	uint64_t x324 = UINT64_MAX;

	t69 = ((x321-(x322|x323))-x324);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x328 = 0;
	int32_t t70 = 18;

	t70 = ((x325-(x326|x327))-x328);

	if (t70 != 1181) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x329 = -1;
	int8_t x331 = INT8_MAX;
	int64_t x332 = -1LL;
	volatile int64_t t71 = -2946387LL;

	t71 = ((x329-(x330|x331))-x332);

	if (t71 != 2147483521LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x334 = 681920134373446171LLU;
	uint16_t x335 = 7U;
	int32_t x336 = -62230960;

	t72 = ((x333-(x334|x335))-x336);

	if (t72 != 17764823939398336528LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x337 = -1;
	int16_t x338 = -1;
	volatile uint32_t x339 = 31883767U;
	uint64_t t73 = 1833210014270LLU;

	t73 = ((x337-(x338|x339))-x340);

	if (t73 != 18446272401559515470LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x341 = -1;
	volatile int64_t x342 = INT64_MIN;
	static int64_t x343 = 2173743297256956LL;
	int16_t x344 = INT16_MIN;
	int64_t t74 = -27496411847032569LL;

	t74 = ((x341-(x342|x343))-x344);

	if (t74 != 9221198293557551619LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 261860U;
	volatile uint8_t x346 = 47U;
	volatile int8_t x347 = 0;
	volatile int64_t x348 = INT64_MAX;
	int64_t t75 = 22LL;

	t75 = ((x345-(x346|x347))-x348);

	if (t75 != -9223372036854513994LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = 1328506352502495083LLU;
	int64_t x350 = -1LL;
	uint32_t x351 = 16896U;
	int32_t x352 = -1;
	volatile uint64_t t76 = 4744104LLU;

	t76 = ((x349-(x350|x351))-x352);

	if (t76 != 1328506352502495085LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x358 = -8763;
	volatile uint16_t x359 = 7387U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t77 = -1345;

	t77 = ((x357-(x358|x359))-x360);

	if (t77 != 41992) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x362 = INT8_MIN;
	static uint16_t x363 = 399U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t78 = -6;

	t78 = ((x361-(x362|x363))-x364);

	if (t78 != 368) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x367 = UINT8_MAX;
	volatile int16_t x368 = -1;
	volatile int32_t t79 = -8;

	t79 = ((x365-(x366|x367))-x368);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x374 = INT64_MIN;
	static int64_t x375 = -471643LL;
	volatile uint16_t x376 = 6U;
	int64_t t80 = -621238977LL;

	t80 = ((x373-(x374|x375))-x376);

	if (t80 != 473142LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int16_t x379 = 1;
	volatile uint64_t x380 = 47LLU;
	static uint64_t t81 = 2864864758396925LLU;

	t81 = ((x377-(x378|x379))-x380);

	if (t81 != 32719LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MAX;
	static int8_t x384 = -1;
	int32_t t82 = -7637;

	t82 = ((x381-(x382|x383))-x384);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x386 = INT8_MIN;
	int64_t x387 = -1646LL;
	static int64_t x388 = INT64_MIN;
	volatile int64_t t83 = 678LL;

	t83 = ((x385-(x386|x387))-x388);

	if (t83 != 9223372034707292270LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x390 = UINT16_MAX;
	static int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MAX;
	int64_t t84 = 2784633064581690687LL;

	t84 = ((x389-(x390|x391))-x392);

	if (t84 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = -1;
	static uint64_t x394 = 51391529LLU;
	int8_t x395 = INT8_MAX;
	static volatile uint64_t t85 = 2037268LLU;

	t85 = ((x393-(x394|x395))-x396);

	if (t85 != 18446744073658192768LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 0U;
	int8_t x402 = INT8_MIN;
	uint32_t t86 = 3U;

	t86 = ((x401-(x402|x403))-x404);

	if (t86 != 4294966862U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = INT8_MIN;
	static volatile int32_t x406 = -9;
	static int16_t x407 = 874;
	int8_t x408 = INT8_MAX;
	volatile int32_t t87 = -119147955;

	t87 = ((x405-(x406|x407))-x408);

	if (t87 != -254) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	int32_t x412 = -18915335;

	t88 = ((x409-(x410|x411))-x412);

	if (t88 != -2128568252) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x413 = -1;
	uint32_t x415 = 20U;
	int16_t x416 = 72;
	uint32_t t89 = 104U;

	t89 = ((x413-(x414|x415))-x416);

	if (t89 != 4294901688U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = 2LL;
	uint64_t x419 = 27807063285656LLU;
	volatile uint32_t x420 = 4129U;

	t90 = ((x417-(x418|x419))-x420);

	if (t90 != 18446744073709547490LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = 0;
	static uint32_t x422 = UINT32_MAX;
	uint16_t x423 = 1428U;
	int64_t x424 = -222369381952LL;
	int64_t t91 = -17606731LL;

	t91 = ((x421-(x422|x423))-x424);

	if (t91 != 222369381953LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int8_t x426 = -1;
	int8_t x427 = 41;
	int32_t x428 = INT32_MIN;
	uint64_t t92 = 122586973168LLU;

	t92 = ((x425-(x426|x427))-x428);

	if (t92 != 2147483648LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = 24854431;
	int8_t x434 = -1;
	volatile int32_t t93 = -41;

	t93 = ((x433-(x434|x435))-x436);

	if (t93 != 24858410) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x437 = INT16_MIN;
	uint8_t x438 = UINT8_MAX;
	volatile int8_t x439 = -21;
	volatile int32_t t94 = 1420;

	t94 = ((x437-(x438|x439))-x440);

	if (t94 != -32764) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x441 = 146192560713990LL;
	static int8_t x442 = -1;
	uint64_t x444 = UINT64_MAX;
	uint64_t t95 = 122610LLU;

	t95 = ((x441-(x442|x443))-x444);

	if (t95 != 146192560713992LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x445 = -1;
	static volatile int32_t x446 = 517626151;
	int64_t x447 = INT64_MIN;
	int8_t x448 = INT8_MIN;
	volatile int64_t t96 = -196464378275091LL;

	t96 = ((x445-(x446|x447))-x448);

	if (t96 != 9223372036337149784LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x449 = 1LLU;
	int16_t x452 = INT16_MIN;
	uint64_t t97 = 79736LLU;

	t97 = ((x449-(x450|x451))-x452);

	if (t97 != 32779LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = INT64_MIN;
	uint64_t x454 = 803378561879752866LLU;
	int64_t x455 = INT64_MIN;
	static volatile int32_t x456 = 2665042;
	static uint64_t t98 = 176124LLU;

	t98 = ((x453-(x454|x455))-x456);

	if (t98 != 17643365511827133708LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x457 = 12434477561LL;
	static uint8_t x458 = 30U;
	int8_t x459 = INT8_MIN;
	volatile int64_t t99 = -1489201310LL;

	t99 = ((x457-(x458|x459))-x460);

	if (t99 != 12423785887LL) { NG(); } else { ; }
	
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

