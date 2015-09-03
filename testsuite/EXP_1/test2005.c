#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 2LL;
uint16_t x7 = UINT16_MAX;
int8_t x10 = 0;
int64_t x14 = -1LL;
int32_t x15 = -1;
int8_t x17 = INT8_MIN;
volatile int8_t x18 = INT8_MIN;
int8_t x20 = -5;
static uint8_t x24 = 1U;
volatile int8_t x28 = INT8_MAX;
uint64_t x47 = UINT64_MAX;
volatile int8_t x48 = 3;
uint64_t x55 = 2021952799795LLU;
volatile uint32_t t14 = 861702788U;
int32_t x65 = INT32_MAX;
int16_t x69 = -4;
int64_t x73 = -1LL;
static volatile int64_t t18 = 2LL;
int32_t x81 = INT32_MIN;
uint32_t t19 = 147675344U;
uint16_t x85 = 4U;
uint64_t t20 = 5214263306911059LLU;
static uint16_t x93 = UINT16_MAX;
int32_t x116 = 116;
volatile int64_t x129 = -3390LL;
static int32_t x133 = -45;
uint8_t x134 = 1U;
volatile int8_t x136 = -1;
int8_t x139 = 0;
volatile int32_t t30 = -13606515;
uint16_t x144 = UINT16_MAX;
volatile int32_t x153 = INT32_MIN;
static int32_t x160 = 3552;
uint64_t t33 = 2856LLU;
int8_t x166 = INT8_MIN;
uint8_t x168 = UINT8_MAX;
int8_t x173 = INT8_MIN;
uint64_t x174 = 104382608LLU;
int8_t x176 = INT8_MIN;
static volatile int32_t x190 = 2;
static int16_t x197 = INT16_MIN;
static volatile uint64_t x203 = 97696213065LLU;
volatile int64_t x205 = INT64_MAX;
int16_t x211 = INT16_MAX;
volatile int64_t t42 = 1036358LL;
volatile int16_t x227 = INT16_MAX;
volatile int8_t x228 = INT8_MIN;
int64_t x232 = 553847LL;
volatile uint16_t x235 = 4041U;
volatile int32_t x241 = -1;
volatile int8_t x246 = INT8_MIN;
volatile uint8_t x255 = UINT8_MAX;
volatile int8_t x260 = INT8_MIN;
volatile int64_t x261 = INT64_MIN;
int32_t x262 = INT32_MIN;
int8_t x264 = INT8_MIN;
static volatile int32_t t54 = -31656;
static uint32_t x269 = 1866244U;
int64_t x272 = -1LL;
volatile int64_t x279 = 1884501569780LL;
volatile int32_t x280 = INT32_MAX;
int8_t x282 = INT8_MAX;
int64_t x290 = 61176106836LL;
int8_t x297 = 0;
volatile uint64_t t63 = 9802532688047428LLU;
int64_t x313 = INT64_MIN;
int16_t x319 = 1;
int64_t x322 = INT64_MIN;
volatile uint8_t x327 = 8U;
int32_t x329 = -743787;
int32_t x333 = INT32_MIN;
uint64_t x335 = UINT64_MAX;
int16_t x340 = INT16_MAX;
int16_t x343 = -1;
uint64_t x357 = 981841259077763LLU;
volatile uint16_t x358 = 95U;
uint64_t t75 = 2492363595LLU;
static volatile int8_t x362 = INT8_MAX;
volatile int16_t x375 = INT16_MIN;
uint32_t t79 = 92808596U;
uint8_t x377 = 0U;
int8_t x380 = INT8_MIN;
int64_t x387 = 1235580969425483LL;
volatile int64_t t81 = 923924LL;
int32_t t82 = 34;
uint32_t x396 = 7045U;
uint64_t t84 = 386105402LLU;
volatile int8_t x403 = INT8_MIN;
uint32_t x405 = 115668023U;
volatile int8_t x406 = INT8_MAX;
int8_t x410 = INT8_MIN;
int8_t x416 = 0;
static int16_t x430 = INT16_MAX;
int8_t x432 = -1;
static int32_t x436 = -1;
static volatile int8_t x438 = 27;
uint64_t x440 = 996LLU;
volatile uint16_t x448 = UINT16_MAX;
int32_t x454 = -170512658;
int32_t x458 = -1;


void f0(void) {
	uint64_t x1 = 415946835309883LLU;
	int64_t x2 = 328582167383925LL;
	int64_t x4 = INT64_MAX;
	static uint64_t t0 = 1784707693046LLU;

	t0 = (((x1|x2)|x3)*x4);

	if (t0 != 9222955459397419137LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	volatile int16_t x6 = INT16_MIN;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 30861905;

	t1 = (((x5|x6)|x7)*x8);

	if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 405848LL;
	int32_t x11 = INT32_MIN;
	int64_t x12 = 13431077LL;
	int64_t t2 = 179745216316LL;

	t2 = (((x9|x10)|x11)*x12);

	if (t2 != -28837567256790600LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 53U;
	static uint8_t x16 = UINT8_MAX;
	int64_t t3 = 4052464062964813237LL;

	t3 = (((x13|x14)|x15)*x16);

	if (t3 != -255LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x19 = INT8_MIN;
	int32_t t4 = -135119256;

	t4 = (((x17|x18)|x19)*x20);

	if (t4 != 640) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x22 = 11;
	static int16_t x23 = INT16_MIN;
	volatile int32_t t5 = -41080;

	t5 = (((x21|x22)|x23)*x24);

	if (t5 != -32513) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 29U;
	int8_t x26 = INT8_MIN;
	volatile uint64_t x27 = UINT64_MAX;
	uint64_t t6 = 8966906LLU;

	t6 = (((x25|x26)|x27)*x28);

	if (t6 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int16_t x30 = -1;
	int32_t x31 = INT32_MIN;
	static int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 812;

	t7 = (((x29|x30)|x31)*x32);

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	uint8_t x34 = UINT8_MAX;
	volatile int64_t x35 = INT64_MAX;
	int64_t x36 = -1LL;
	int64_t t8 = -1296586696365828LL;

	t8 = (((x33|x34)|x35)*x36);

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	uint16_t x38 = 202U;
	static uint64_t x39 = 5655381LLU;
	uint32_t x40 = 67U;
	volatile uint64_t t9 = 2396692989003LLU;

	t9 = (((x37|x38)|x39)*x40);

	if (t9 != 18446744073708657501LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	static int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = 73932640211455LL;

	t10 = (((x41|x42)|x43)*x44);

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 53U;
	int64_t x46 = -23863LL;
	volatile uint64_t t11 = 243LLU;

	t11 = (((x45|x46)|x47)*x48);

	if (t11 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -156524461836LL;
	uint8_t x50 = UINT8_MAX;
	volatile int32_t x51 = 253484;
	static volatile int8_t x52 = INT8_MIN;
	static int64_t t12 = -1LL;

	t12 = (((x49|x50)|x51)*x52);

	if (t12 != 20035117547648LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MAX;
	int32_t x56 = INT32_MIN;
	uint64_t t13 = 40428443LLU;

	t13 = (((x53|x54)|x55)*x56);

	if (t13 != 2147483648LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	volatile uint8_t x59 = UINT8_MAX;
	int32_t x60 = INT32_MAX;

	t14 = (((x57|x58)|x59)*x60);

	if (t14 != 2147483649U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = -1;
	volatile int32_t x62 = 562;
	static int16_t x63 = INT16_MIN;
	static volatile int32_t x64 = INT32_MAX;
	volatile int32_t t15 = -44516;

	t15 = (((x61|x62)|x63)*x64);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	int32_t x67 = -265;
	volatile int64_t x68 = -155LL;
	volatile int64_t t16 = -22141448LL;

	t16 = (((x65|x66)|x67)*x68);

	if (t16 != 155LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	static int8_t x72 = -1;
	int64_t t17 = 501027446336LL;

	t17 = (((x69|x70)|x71)*x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 26836U;
	volatile int64_t x75 = INT64_MIN;
	int16_t x76 = 9;

	t18 = (((x73|x74)|x75)*x76);

	if (t18 != -9LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x82 = INT16_MIN;
	uint32_t x83 = 509281U;
	static int32_t x84 = -1;

	t19 = (((x81|x82)|x83)*x84);

	if (t19 != 15007U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = -10283;
	int16_t x87 = -1;
	static uint64_t x88 = UINT64_MAX;

	t20 = (((x85|x86)|x87)*x88);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x94 = 1U;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = -1;
	uint64_t t21 = 286435450862174506LLU;

	t21 = (((x93|x94)|x95)*x96);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 29998882U;
	int16_t x98 = INT16_MAX;
	volatile uint32_t x99 = 1695874289U;
	uint32_t x100 = 346888U;
	volatile uint32_t t22 = 385U;

	t22 = (((x97|x98)|x99)*x100);

	if (t22 != 954905848U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -318;
	static int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 19035530U;
	static int64_t t23 = 6557LL;

	t23 = (((x101|x102)|x103)*x104);

	if (t23 != -19035530LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -23529598164074LL;
	static volatile int64_t x106 = 932706047LL;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	volatile int64_t t24 = 794495409LL;

	t24 = (((x105|x106)|x107)*x108);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = INT16_MAX;
	int32_t x110 = INT32_MAX;
	static int8_t x111 = -1;
	int32_t x112 = -1;
	int32_t t25 = -5108;

	t25 = (((x109|x110)|x111)*x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = -958;
	uint16_t x114 = 296U;
	int32_t x115 = INT32_MIN;
	static int32_t t26 = 43826043;

	t26 = (((x113|x114)|x115)*x116);

	if (t26 != -76792) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 3;
	int8_t x122 = -14;
	int32_t x123 = INT32_MAX;
	static uint16_t x124 = 1133U;
	int32_t t27 = 5;

	t27 = (((x121|x122)|x123)*x124);

	if (t27 != -1133) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x130 = INT32_MIN;
	static volatile int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	static volatile int64_t t28 = 4838602485LL;

	t28 = (((x129|x130)|x131)*x132);

	if (t28 != 7279969566720LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x135 = INT64_MIN;
	static int64_t t29 = 251530591168322LL;

	t29 = (((x133|x134)|x135)*x136);

	if (t29 != 45LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	int32_t x138 = INT32_MAX;
	static int8_t x140 = -1;

	t30 = (((x137|x138)|x139)*x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	static int32_t x142 = 78;
	uint16_t x143 = 1855U;
	volatile int32_t t31 = 1262445;

	t31 = (((x141|x142)|x143)*x144);

	if (t31 != -65535) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x154 = INT16_MIN;
	uint64_t x155 = 886960931519331LLU;
	static int16_t x156 = -1;
	volatile uint64_t t32 = 20LLU;

	t32 = (((x153|x154)|x155)*x156);

	if (t32 != 17565LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = -1;
	int64_t x158 = INT64_MAX;
	uint64_t x159 = 1787220808735LLU;

	t33 = (((x157|x158)|x159)*x160);

	if (t33 != 18446744073709548064LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = 0;
	static int32_t x167 = -1;
	volatile int32_t t34 = 901801;

	t34 = (((x165|x166)|x167)*x168);

	if (t34 != -255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = INT64_MAX;
	static int64_t x170 = INT64_MIN;
	static int8_t x171 = -1;
	int32_t x172 = INT32_MIN;
	int64_t t35 = -651410576303LL;

	t35 = (((x169|x170)|x171)*x172);

	if (t35 != 2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x175 = -3;
	volatile uint64_t t36 = 176426017LLU;

	t36 = (((x173|x174)|x175)*x176);

	if (t36 != 384LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x189 = INT32_MAX;
	static uint32_t x191 = 1367693342U;
	static int8_t x192 = INT8_MIN;
	volatile uint32_t t37 = 9408279U;

	t37 = (((x189|x190)|x191)*x192);

	if (t37 != 128U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile uint32_t t38 = 44948001U;

	t38 = (((x197|x198)|x199)*x200);

	if (t38 != 128U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	uint64_t t39 = 54576821973LLU;

	t39 = (((x201|x202)|x203)*x204);

	if (t39 != 13037373227008LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x206 = 1503;
	int32_t x207 = INT32_MIN;
	static volatile int32_t x208 = 1;
	volatile int64_t t40 = -204361535LL;

	t40 = (((x205|x206)|x207)*x208);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = -26323213;
	int32_t x210 = -1;
	int16_t x212 = -1;
	int32_t t41 = 18;

	t41 = (((x209|x210)|x211)*x212);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x217 = 1U;
	static int64_t x218 = -1LL;
	static volatile int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;

	t42 = (((x217|x218)|x219)*x220);

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x221 = INT8_MAX;
	uint16_t x222 = 16336U;
	int32_t x223 = 90085;
	int16_t x224 = 0;
	int32_t t43 = 34;

	t43 = (((x221|x222)|x223)*x224);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x225 = 126U;
	volatile int32_t x226 = -1;
	static int32_t t44 = 271102;

	t44 = (((x225|x226)|x227)*x228);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = -1;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 19396U;
	volatile int64_t t45 = -4169444962459696LL;

	t45 = (((x229|x230)|x231)*x232);

	if (t45 != -553847LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = INT16_MAX;
	static uint16_t x234 = UINT16_MAX;
	static int8_t x236 = INT8_MIN;
	int32_t t46 = 31533;

	t46 = (((x233|x234)|x235)*x236);

	if (t46 != -8388480) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	static uint16_t x238 = 15U;
	volatile int64_t x239 = 2LL;
	static int16_t x240 = INT16_MIN;
	int64_t t47 = -3709LL;

	t47 = (((x237|x238)|x239)*x240);

	if (t47 != -8355840LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x242 = INT32_MIN;
	uint32_t x243 = UINT32_MAX;
	static uint8_t x244 = 14U;
	volatile uint32_t t48 = 1954466235U;

	t48 = (((x241|x242)|x243)*x244);

	if (t48 != 4294967282U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x245 = -1;
	static int64_t x247 = INT64_MIN;
	uint16_t x248 = UINT16_MAX;
	int64_t t49 = -132LL;

	t49 = (((x245|x246)|x247)*x248);

	if (t49 != -65535LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = -2919LL;
	static uint32_t x250 = 16U;
	static int64_t x251 = INT64_MAX;
	uint16_t x252 = 4737U;
	volatile int64_t t50 = -447864059LL;

	t50 = (((x249|x250)|x251)*x252);

	if (t50 != -4737LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x253 = 34830U;
	volatile int8_t x254 = INT8_MIN;
	volatile int16_t x256 = -1;
	volatile uint32_t t51 = 31459U;

	t51 = (((x253|x254)|x255)*x256);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x257 = UINT8_MAX;
	volatile int64_t x258 = -1LL;
	volatile int64_t x259 = INT64_MAX;
	volatile int64_t t52 = 266979377752LL;

	t52 = (((x257|x258)|x259)*x260);

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x263 = 4008U;
	volatile int64_t t53 = -182237566560483LL;

	t53 = (((x261|x262)|x263)*x264);

	if (t53 != 274877393920LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x265 = INT16_MAX;
	uint16_t x266 = 13621U;
	int8_t x267 = 1;
	uint8_t x268 = 16U;

	t54 = (((x265|x266)|x267)*x268);

	if (t54 != 524272) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x270 = -19759;
	int64_t x271 = INT64_MAX;
	int64_t t55 = 50912LL;

	t55 = (((x269|x270)|x271)*x272);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x277 = INT16_MAX;
	volatile uint64_t x278 = UINT64_MAX;
	uint64_t t56 = 135644190355618LLU;

	t56 = (((x277|x278)|x279)*x280);

	if (t56 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x281 = 0;
	uint8_t x283 = 124U;
	static int8_t x284 = -1;
	volatile int32_t t57 = 33;

	t57 = (((x281|x282)|x283)*x284);

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = 0;
	uint16_t x291 = 12U;
	static int32_t x292 = -1;
	volatile int64_t t58 = -17LL;

	t58 = (((x289|x290)|x291)*x292);

	if (t58 != -61176106844LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = INT32_MIN;
	uint16_t x294 = 9347U;
	int32_t x295 = -35686;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t59 = -251766;

	t59 = (((x293|x294)|x295)*x296);

	if (t59 != 1169326080) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x298 = -22;
	uint8_t x299 = 2U;
	uint64_t x300 = 7793LLU;
	uint64_t t60 = 3534LLU;

	t60 = (((x297|x298)|x299)*x300);

	if (t60 != 18446744073709380170LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x301 = INT32_MIN;
	volatile int32_t x302 = 39;
	int16_t x303 = INT16_MIN;
	uint64_t x304 = 17575113485828LLU;
	volatile uint64_t t61 = 257406249739898LLU;

	t61 = (((x301|x302)|x303)*x304);

	if (t61 != 17871528184431887004LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x305 = -16;
	int64_t x306 = INT64_MAX;
	int16_t x307 = 12325;
	int8_t x308 = -1;
	int64_t t62 = -100022758888297976LL;

	t62 = (((x305|x306)|x307)*x308);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x309 = -2936;
	volatile int8_t x310 = 0;
	uint8_t x311 = 1U;
	volatile uint64_t x312 = 186746379025432970LLU;

	t63 = (((x309|x310)|x311)*x312);

	if (t63 != 5301699771640781530LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x314 = INT32_MIN;
	static volatile int16_t x315 = INT16_MIN;
	volatile int8_t x316 = INT8_MIN;
	volatile int64_t t64 = 2525759483408LL;

	t64 = (((x313|x314)|x315)*x316);

	if (t64 != 4194304LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x317 = 63U;
	int32_t x318 = 90021335;
	static uint64_t x320 = UINT64_MAX;
	volatile uint64_t t65 = 402LLU;

	t65 = (((x317|x318)|x319)*x320);

	if (t65 != 18446744073619530241LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = -723592633LL;
	static uint64_t x323 = 13LLU;
	static int16_t x324 = 16;
	uint64_t t66 = 79846LLU;

	t66 = (((x321|x322)|x323)*x324);

	if (t66 != 18446744062132069616LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x325 = INT8_MIN;
	uint32_t x326 = 10U;
	int8_t x328 = INT8_MAX;
	volatile uint32_t t67 = 31U;

	t67 = (((x325|x326)|x327)*x328);

	if (t67 != 4294952310U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x330 = 3U;
	volatile int64_t x331 = 4921LL;
	int16_t x332 = INT16_MAX;
	volatile int64_t t68 = 2679333LL;

	t68 = (((x329|x330)|x331)*x332);

	if (t68 != -24227690431LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x334 = 4U;
	int8_t x336 = -5;
	volatile uint64_t t69 = 33375567LLU;

	t69 = (((x333|x334)|x335)*x336);

	if (t69 != 5LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = -1LL;
	volatile int64_t x338 = INT64_MIN;
	volatile uint32_t x339 = 3193281U;
	int64_t t70 = -111921823603934389LL;

	t70 = (((x337|x338)|x339)*x340);

	if (t70 != -32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = -3;
	int16_t x342 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t71 = 95;

	t71 = (((x341|x342)|x343)*x344);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = -1LL;
	static uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 12LLU;
	int8_t x348 = INT8_MAX;
	volatile uint64_t t72 = 1299LLU;

	t72 = (((x345|x346)|x347)*x348);

	if (t72 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x349 = 4794;
	int64_t x350 = 3019498659LL;
	volatile int32_t x351 = 974;
	uint8_t x352 = 1U;
	int64_t t73 = -93692868LL;

	t73 = (((x349|x350)|x351)*x352);

	if (t73 != 3019503615LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x353 = -279LL;
	volatile uint16_t x354 = 404U;
	volatile int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	static uint64_t t74 = 104056275LLU;

	t74 = (((x353|x354)|x355)*x356);

	if (t74 != 3LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x359 = INT32_MAX;
	uint16_t x360 = UINT16_MAX;

	t75 = (((x357|x358)|x359)*x360);

	if (t75 != 9004810037448605697LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x361 = -1;
	uint64_t x363 = 386459207890473LLU;
	int16_t x364 = -1;
	uint64_t t76 = 1340393LLU;

	t76 = (((x361|x362)|x363)*x364);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	int64_t x368 = -1LL;
	static int64_t t77 = 1179005523750LL;

	t77 = (((x365|x366)|x367)*x368);

	if (t77 != -4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = 137653343007LL;
	static uint16_t x370 = 0U;
	volatile int8_t x371 = -1;
	int8_t x372 = 10;
	int64_t t78 = 22964205196LL;

	t78 = (((x369|x370)|x371)*x372);

	if (t78 != -10LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 0U;
	int16_t x374 = INT16_MIN;
	volatile uint32_t x376 = UINT32_MAX;

	t79 = (((x373|x374)|x375)*x376);

	if (t79 != 32768U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x378 = INT64_MIN;
	volatile int8_t x379 = -1;
	volatile int64_t t80 = -87799LL;

	t80 = (((x377|x378)|x379)*x380);

	if (t80 != 128LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x385 = -1;
	int16_t x386 = INT16_MAX;
	int32_t x388 = -106;

	t81 = (((x385|x386)|x387)*x388);

	if (t81 != 106LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x389 = 36U;
	volatile int16_t x390 = -1;
	uint8_t x391 = 0U;
	static int32_t x392 = -1;

	t82 = (((x389|x390)|x391)*x392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MAX;
	volatile int64_t x394 = 4690699032LL;
	int32_t x395 = -1;
	volatile int64_t t83 = -395225986015173358LL;

	t83 = (((x393|x394)|x395)*x396);

	if (t83 != -7045LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = INT64_MAX;
	static volatile uint64_t x398 = UINT64_MAX;
	volatile int8_t x399 = INT8_MAX;
	uint8_t x400 = UINT8_MAX;

	t84 = (((x397|x398)|x399)*x400);

	if (t84 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = INT8_MIN;
	static int32_t x402 = 58656636;
	static int8_t x404 = INT8_MIN;
	static int32_t t85 = -2518655;

	t85 = (((x401|x402)|x403)*x404);

	if (t85 != 512) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x407 = -6;
	static uint64_t x408 = 990261064066638LLU;
	volatile uint64_t t86 = 224LLU;

	t86 = (((x405|x406)|x407)*x408);

	if (t86 != 2229811414561364402LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x409 = 206LLU;
	uint16_t x411 = UINT16_MAX;
	uint8_t x412 = 2U;
	uint64_t t87 = 6576LLU;

	t87 = (((x409|x410)|x411)*x412);

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = -13147;
	int32_t x414 = 163908630;
	int8_t x415 = INT8_MAX;
	int32_t t88 = 41314349;

	t88 = (((x413|x414)|x415)*x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = -1LL;
	int8_t x418 = INT8_MIN;
	int16_t x419 = 18;
	int64_t x420 = INT64_MAX;
	int64_t t89 = 1050246090314948LL;

	t89 = (((x417|x418)|x419)*x420);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x421 = -1LL;
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MIN;
	int64_t t90 = -62289764834792328LL;

	t90 = (((x421|x422)|x423)*x424);

	if (t90 != 32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 56U;
	static volatile int16_t x426 = INT16_MIN;
	uint16_t x427 = UINT16_MAX;
	static int16_t x428 = INT16_MIN;
	volatile uint32_t t91 = 48183876U;

	t91 = (((x425|x426)|x427)*x428);

	if (t91 != 32768U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x429 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	static uint32_t t92 = 22U;

	t92 = (((x429|x430)|x431)*x432);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MIN;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = -1;
	volatile int32_t t93 = -2;

	t93 = (((x433|x434)|x435)*x436);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = INT8_MIN;
	volatile uint8_t x439 = 1U;
	uint64_t t94 = 29564951757LLU;

	t94 = (((x437|x438)|x439)*x440);

	if (t94 != 18446744073709451020LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -2;
	int16_t x442 = -1;
	int16_t x443 = INT16_MIN;
	uint8_t x444 = 1U;
	volatile int32_t t95 = -44297;

	t95 = (((x441|x442)|x443)*x444);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = INT64_MAX;
	uint16_t x446 = UINT16_MAX;
	volatile int16_t x447 = -253;
	int64_t t96 = -212714070064149376LL;

	t96 = (((x445|x446)|x447)*x448);

	if (t96 != -65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x449 = -79957123392692LL;
	int8_t x450 = -1;
	volatile int8_t x451 = -1;
	volatile int64_t x452 = INT64_MAX;
	int64_t t97 = -508423957340308378LL;

	t97 = (((x449|x450)|x451)*x452);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = -6;
	uint32_t x455 = 17U;
	static int8_t x456 = INT8_MAX;
	static uint32_t t98 = 5956U;

	t98 = (((x453|x454)|x455)*x456);

	if (t98 != 4294967169U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x457 = 761791929179166142LLU;
	int32_t x459 = -1;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t99 = 1913LLU;

	t99 = (((x457|x458)|x459)*x460);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

