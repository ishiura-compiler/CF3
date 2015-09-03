#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 12U;
int16_t x4 = INT16_MIN;
int32_t t0 = 23379;
int16_t x10 = INT16_MIN;
int8_t x11 = INT8_MIN;
int64_t x26 = INT64_MIN;
uint64_t x36 = 14LLU;
int8_t x43 = 1;
uint32_t x45 = 5794548U;
static int32_t x51 = INT32_MIN;
uint64_t x57 = 124243452786LLU;
static volatile int8_t x60 = -1;
int32_t x65 = -1;
volatile int32_t t16 = 30;
uint32_t x72 = 207163U;
int16_t x75 = -28;
uint32_t x78 = 12U;
int32_t x93 = INT32_MAX;
int64_t x97 = -1LL;
int64_t x100 = 45621738367LL;
int64_t t25 = -83864463LL;
volatile int8_t x108 = INT8_MIN;
uint64_t t26 = 780404LLU;
static int64_t x110 = -1LL;
uint8_t x112 = UINT8_MAX;
uint64_t x117 = 79LLU;
static volatile int16_t x118 = INT16_MIN;
int64_t x120 = INT64_MAX;
static uint64_t t29 = 1094360936845LLU;
static int64_t x122 = INT64_MAX;
int8_t x124 = INT8_MIN;
int32_t x130 = -484;
int64_t x131 = INT64_MIN;
static uint8_t x132 = 12U;
int16_t x148 = 6;
static volatile uint64_t t35 = 17118LLU;
int16_t x151 = -1;
volatile int64_t t40 = 801319952LL;
int64_t x171 = 784177LL;
int64_t t41 = 1046086539LL;
int64_t x173 = INT64_MIN;
int32_t x174 = INT32_MIN;
uint8_t x177 = UINT8_MAX;
static uint32_t x181 = 1U;
int8_t x183 = INT8_MIN;
static uint16_t x184 = 1U;
uint16_t x186 = 17168U;
int16_t x187 = INT16_MIN;
static int64_t x188 = -1LL;
int64_t t45 = 655745075939664506LL;
uint64_t x189 = UINT64_MAX;
static volatile int8_t x205 = -1;
static uint16_t x208 = 7938U;
int64_t t51 = 4901LL;
int8_t x213 = INT8_MIN;
int16_t x219 = 11454;
static int64_t t54 = -13LL;
uint16_t x230 = UINT16_MAX;
static uint16_t x231 = 88U;
volatile int8_t x234 = INT8_MIN;
int16_t x239 = -17;
volatile int64_t t59 = 2002473LL;
int64_t x251 = INT64_MIN;
volatile int64_t x255 = INT64_MIN;
int32_t x261 = INT32_MIN;
uint64_t x263 = UINT64_MAX;
static uint64_t t64 = 91254LLU;
static volatile int64_t x267 = INT64_MIN;
int16_t x272 = 1;
int32_t t66 = 4128;
int8_t x276 = 1;
uint32_t x281 = UINT32_MAX;
static int64_t t69 = -716LL;
uint8_t x296 = UINT8_MAX;
volatile int64_t x300 = INT64_MIN;
int64_t x302 = 15LL;
uint8_t x306 = 1U;
static int64_t t75 = -487113499413LL;
static int8_t x313 = -7;
int32_t t77 = -16;
int16_t x324 = INT16_MAX;
volatile uint8_t x326 = UINT8_MAX;
int16_t x327 = INT16_MIN;
int64_t x330 = INT64_MIN;
uint32_t x331 = 7830191U;
int32_t x332 = -29;
int64_t t82 = -63617650742103LL;
int16_t x344 = INT16_MIN;
static int64_t t85 = 438946725144859798LL;
int32_t t89 = 3373;
uint64_t x367 = 37LLU;
int16_t x368 = 189;
int16_t x371 = INT16_MAX;
int64_t x372 = INT64_MIN;
int32_t x373 = 0;
int8_t x374 = INT8_MAX;
int16_t x375 = INT16_MIN;
int8_t x376 = INT8_MIN;
int32_t x377 = 13;
volatile uint64_t t93 = 39823387531983LLU;
int16_t x384 = INT16_MAX;
uint16_t x386 = UINT16_MAX;
int8_t x390 = INT8_MIN;
int16_t x394 = -1;
static int32_t x396 = 261009160;
int64_t t98 = -1925LL;
static uint16_t x401 = 12U;
static int8_t x403 = 31;


void f0(void) {
	uint16_t x1 = 30268U;
	int32_t x2 = INT32_MIN;

	t0 = (((x1|x2)/x3)|x4);

	if (t0 != -8400) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int64_t x6 = -1LL;
	static int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	static volatile int64_t t1 = -231LL;

	t1 = (((x5|x6)/x7)|x8);

	if (t1 != -2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 96719572075653LLU;
	int64_t x12 = INT64_MIN;
	uint64_t t2 = 281417520408203LLU;

	t2 = (((x9|x10)/x11)|x12);

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 66757830;

	t3 = (((x13|x14)/x15)|x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint16_t x18 = 131U;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = 7U;
	int64_t t4 = 43LL;

	t4 = (((x17|x18)/x19)|x20);

	if (t4 != 7LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -1;
	volatile int64_t x23 = -8585668641778LL;
	int8_t x24 = 52;
	volatile int64_t t5 = 245LL;

	t5 = (((x21|x22)/x23)|x24);

	if (t5 != 52LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -18;
	uint64_t x27 = 29241628406919LLU;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 8136LLU;

	t6 = (((x25|x26)/x27)|x28);

	if (t6 != 9223372036855406646LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 21613U;
	volatile int32_t x30 = INT32_MAX;
	volatile int8_t x31 = INT8_MIN;
	uint64_t x32 = 3655926312LLU;
	volatile uint64_t t7 = 59314866LLU;

	t7 = (((x29|x30)/x31)|x32);

	if (t7 != 18446744073708044841LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	static volatile uint64_t x35 = UINT64_MAX;
	uint64_t t8 = 1885LLU;

	t8 = (((x33|x34)/x35)|x36);

	if (t8 != 14LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 508481889371043250LL;
	uint32_t x38 = 982456U;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	volatile int64_t t9 = 1146580167613279581LL;

	t9 = (((x37|x38)/x39)|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	int32_t x44 = -1;
	volatile int32_t t10 = 2;

	t10 = (((x41|x42)/x43)|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = 122;
	uint32_t x47 = UINT32_MAX;
	uint64_t x48 = 33446344115368LLU;
	static volatile uint64_t t11 = 378446876818583LLU;

	t11 = (((x45|x46)/x47)|x48);

	if (t11 != 33446344115368LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3359U;
	uint64_t x50 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	static volatile uint64_t t12 = 63LLU;

	t12 = (((x49|x50)/x51)|x52);

	if (t12 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint64_t x54 = 2399355086237672165LLU;
	int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x53|x54)/x55)|x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	volatile uint8_t x59 = 59U;
	uint64_t t14 = UINT64_MAX;

	t14 = (((x57|x58)/x59)|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint64_t x62 = UINT64_MAX;
	int32_t x63 = -28964068;
	int8_t x64 = -63;
	uint64_t t15 = 68466924555LLU;

	t15 = (((x61|x62)/x63)|x64);

	if (t15 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int16_t x67 = -209;
	volatile uint8_t x68 = 57U;

	t16 = (((x65|x66)/x67)|x68);

	if (t16 != 57) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1965046339883043LLU;
	uint16_t x70 = 784U;
	static volatile uint8_t x71 = 15U;
	uint64_t t17 = 136410235915110754LLU;

	t17 = (((x69|x70)/x71)|x72);

	if (t17 != 131003089399615LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static int32_t x74 = 1985;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 51652616606443LL;

	t18 = (((x73|x74)/x75)|x76);

	if (t18 != -8893965892681391029LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 9;
	uint32_t x79 = 13775234U;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (((x77|x78)/x79)|x80);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 57U;
	static int8_t x82 = INT8_MAX;
	static int8_t x83 = INT8_MIN;
	int16_t x84 = 222;
	volatile int32_t t20 = -179289;

	t20 = (((x81|x82)/x83)|x84);

	if (t20 != 222) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 218;
	static int64_t x86 = INT64_MAX;
	int64_t x87 = -82605885518744LL;
	uint64_t x88 = 213697171525597LLU;
	volatile uint64_t t21 = 121991974535175LLU;

	t21 = (((x85|x86)/x87)|x88);

	if (t21 != 18446744073709539293LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	int8_t x90 = -39;
	uint32_t x91 = 1969118623U;
	uint64_t x92 = 26748695433034777LLU;
	static volatile uint64_t t22 = 133532158187743452LLU;

	t22 = (((x89|x90)/x91)|x92);

	if (t22 != 26748695433034779LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -18;
	int8_t x95 = INT8_MIN;
	int16_t x96 = -1;
	int32_t t23 = -17332888;

	t23 = (((x93|x94)/x95)|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int64_t t24 = -3007893934572LL;

	t24 = (((x97|x98)/x99)|x100);

	if (t24 != 45621738367LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -369LL;
	int32_t x102 = 63;
	int64_t x103 = -1LL;
	static int8_t x104 = INT8_MIN;

	t25 = (((x101|x102)/x103)|x104);

	if (t25 != -63LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 406LLU;
	uint16_t x106 = 373U;
	int32_t x107 = 1;

	t26 = (((x105|x106)/x107)|x108);

	if (t26 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int8_t x111 = INT8_MIN;
	volatile int64_t t27 = 718878042LL;

	t27 = (((x109|x110)/x111)|x112);

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MAX;
	volatile int64_t x114 = INT64_MAX;
	uint64_t x115 = 17598433682LLU;
	int64_t x116 = 66380107681602597LL;
	uint64_t t28 = 0LLU;

	t28 = (((x113|x114)/x115)|x116);

	if (t28 != 66380107903646959LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x119 = UINT32_MAX;

	t29 = (((x117|x118)/x119)|x120);

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x123 = -1;
	static int64_t t30 = -1214095791086LL;

	t30 = (((x121|x122)/x123)|x124);

	if (t30 != -127LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static volatile uint16_t x126 = UINT16_MAX;
	int64_t x127 = 80923037LL;
	static int8_t x128 = INT8_MIN;
	volatile int64_t t31 = -903615LL;

	t31 = (((x125|x126)/x127)|x128);

	if (t31 != -26LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int64_t t32 = -12242606941LL;

	t32 = (((x129|x130)/x131)|x132);

	if (t32 != 12LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int16_t x134 = -1;
	static uint64_t x135 = 7247LLU;
	int32_t x136 = 3489;
	uint64_t t33 = 2034490242LLU;

	t33 = (((x133|x134)/x135)|x136);

	if (t33 != 2545431775039393LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = INT32_MAX;
	static uint64_t t34 = 1537578521734464LLU;

	t34 = (((x137|x138)/x139)|x140);

	if (t34 != 281481419161599LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 3554532376938661016LLU;
	int8_t x146 = -1;
	int16_t x147 = -180;

	t35 = (((x145|x146)/x147)|x148);

	if (t35 != 7LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 16U;
	uint16_t x150 = 57U;
	static int32_t x152 = INT32_MIN;
	static int32_t t36 = 2097;

	t36 = (((x149|x150)/x151)|x152);

	if (t36 != -57) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	volatile int16_t x154 = 113;
	int16_t x155 = INT16_MAX;
	int64_t x156 = 35075647472LL;
	static volatile int64_t t37 = -1161LL;

	t37 = (((x153|x154)/x155)|x156);

	if (t37 != 35075647472LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	static uint32_t x158 = 17U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	volatile uint32_t t38 = 2591261U;

	t38 = (((x157|x158)/x159)|x160);

	if (t38 != 4294967168U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = -1;
	int8_t x164 = 1;
	int32_t t39 = 40360479;

	t39 = (((x161|x162)/x163)|x164);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 24;
	static uint16_t x166 = 11U;
	int32_t x167 = -2;
	int64_t x168 = -1LL;

	t40 = (((x165|x166)/x167)|x168);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x169 = 3U;
	int8_t x170 = INT8_MIN;
	int16_t x172 = INT16_MIN;

	t41 = (((x169|x170)/x171)|x172);

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x175 = 960927746611LL;
	static int32_t x176 = -37367258;
	int64_t t42 = -497405511254LL;

	t42 = (((x173|x174)/x175)|x176);

	if (t42 != -37367258LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MIN;
	volatile uint16_t x180 = 18U;
	volatile uint64_t t43 = 136LLU;

	t43 = (((x177|x178)/x179)|x180);

	if (t43 != 19LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = INT64_MIN;
	int64_t t44 = -2LL;

	t44 = (((x181|x182)/x183)|x184);

	if (t44 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;

	t45 = (((x185|x186)/x187)|x188);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x190 = -1LL;
	static uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MAX;
	static uint64_t t46 = 1002084277614829054LLU;

	t46 = (((x189|x190)/x191)|x192);

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	uint64_t x194 = 1020688510247308LLU;
	int32_t x195 = -1;
	uint16_t x196 = 10U;
	static uint64_t t47 = 241LLU;

	t47 = (((x193|x194)/x195)|x196);

	if (t47 != 10LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MAX;
	uint32_t x198 = 1U;
	uint64_t x199 = 34761982605525141LLU;
	int32_t x200 = INT32_MIN;
	uint64_t t48 = 216941547LLU;

	t48 = (((x197|x198)/x199)|x200);

	if (t48 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MAX;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = UINT16_MAX;
	int32_t t49 = 2294560;

	t49 = (((x201|x202)/x203)|x204);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = -888304;
	int32_t x207 = INT32_MAX;
	volatile int32_t t50 = -96717;

	t50 = (((x205|x206)/x207)|x208);

	if (t50 != 7938) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MIN;

	t51 = (((x209|x210)/x211)|x212);

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x214 = INT16_MAX;
	int16_t x215 = 2;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (((x213|x214)/x215)|x216);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x217 = INT8_MAX;
	volatile int8_t x218 = 0;
	int16_t x220 = INT16_MIN;
	volatile int32_t t53 = 0;

	t53 = (((x217|x218)/x219)|x220);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	volatile int32_t x222 = INT32_MIN;
	uint8_t x223 = UINT8_MAX;
	static int64_t x224 = 2241040065365750724LL;

	t54 = (((x221|x222)/x223)|x224);

	if (t54 != 2241040065365750724LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = (((x225|x226)/x227)|x228);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x229 = 6284U;
	int32_t x232 = INT32_MIN;
	static int32_t t56 = 0;

	t56 = (((x229|x230)/x231)|x232);

	if (t56 != -2147482904) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 10U;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 3U;
	volatile int32_t t57 = -164;

	t57 = (((x233|x234)/x235)|x236);

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = 1;
	int64_t x238 = -1LL;
	uint16_t x240 = 72U;
	int64_t t58 = -4LL;

	t58 = (((x237|x238)/x239)|x240);

	if (t58 != 72LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = INT64_MIN;
	uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = -652;
	int32_t x244 = -1;

	t59 = (((x241|x242)/x243)|x244);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -1;
	volatile int32_t x246 = INT32_MAX;
	int32_t x247 = -10898;
	uint32_t x248 = 203983U;
	uint32_t t60 = 1655992042U;

	t60 = (((x245|x246)/x247)|x248);

	if (t60 != 203983U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = INT64_MIN;
	int32_t x252 = INT32_MAX;
	int64_t t61 = 9537348537LL;

	t61 = (((x249|x250)/x251)|x252);

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 257LLU;
	int8_t x254 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	uint64_t t62 = 12491084687157506LLU;

	t62 = (((x253|x254)/x255)|x256);

	if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = -16594LL;
	uint16_t x258 = 3233U;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = INT16_MIN;
	int64_t t63 = 326145629741061LL;

	t63 = (((x257|x258)/x259)|x260);

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x262 = INT8_MIN;
	static volatile int16_t x264 = INT16_MIN;

	t64 = (((x261|x262)/x263)|x264);

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = UINT64_MAX;
	static int32_t x268 = 66;
	static uint64_t t65 = 1077800111399595LLU;

	t65 = (((x265|x266)/x267)|x268);

	if (t65 != 67LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 0U;
	int32_t x270 = 3;
	static volatile uint8_t x271 = 45U;

	t66 = (((x269|x270)/x271)|x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x273 = UINT16_MAX;
	uint8_t x274 = 1U;
	uint32_t x275 = UINT32_MAX;
	static uint32_t t67 = 3135052U;

	t67 = (((x273|x274)/x275)|x276);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = 101;
	uint64_t x278 = 31LLU;
	static int8_t x279 = INT8_MAX;
	volatile int32_t x280 = 211;
	uint64_t t68 = 1859014241815012536LLU;

	t68 = (((x277|x278)/x279)|x280);

	if (t68 != 211LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x282 = INT64_MIN;
	uint16_t x283 = 418U;
	int16_t x284 = INT16_MIN;

	t69 = (((x281|x282)/x283)|x284);

	if (t69 != -13483LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x285 = 1398373LL;
	int8_t x286 = 12;
	int8_t x287 = INT8_MIN;
	volatile int64_t x288 = -1LL;
	volatile int64_t t70 = -9984702218133284LL;

	t70 = (((x285|x286)/x287)|x288);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = -45;
	uint8_t x290 = 1U;
	int64_t x291 = -1LL;
	uint64_t x292 = 201501LLU;
	uint64_t t71 = 62706825362007LLU;

	t71 = (((x289|x290)/x291)|x292);

	if (t71 != 201533LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x293 = -1;
	int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t t72 = 132042678184002LLU;

	t72 = (((x293|x294)/x295)|x296);

	if (t72 != 255LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	int64_t x298 = -525020657575LL;
	int8_t x299 = INT8_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (((x297|x298)/x299)|x300);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 76U;
	int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	volatile int64_t t74 = INT64_MIN;

	t74 = (((x301|x302)/x303)|x304);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = 0;
	int64_t x307 = INT64_MIN;
	int32_t x308 = -1;

	t75 = (((x305|x306)/x307)|x308);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = 25;
	int32_t x312 = INT32_MAX;
	int32_t t76 = -22079746;

	t76 = (((x309|x310)/x311)|x312);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = INT16_MAX;
	static int8_t x316 = -1;

	t77 = (((x313|x314)/x315)|x316);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 1706852802U;
	static uint8_t x318 = 1U;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = (((x317|x318)/x319)|x320);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x321 = UINT64_MAX;
	static volatile int16_t x322 = INT16_MIN;
	int8_t x323 = 12;
	static uint64_t t79 = 230LLU;

	t79 = (((x321|x322)/x323)|x324);

	if (t79 != 1537228672809140223LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 0;
	int8_t x328 = -1;
	volatile int32_t t80 = 27;

	t80 = (((x325|x326)/x327)|x328);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int64_t t81 = 1LL;

	t81 = (((x329|x330)/x331)|x332);

	if (t81 != -17LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	int32_t x336 = 3;

	t82 = (((x333|x334)/x335)|x336);

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = INT32_MIN;
	static uint32_t x338 = UINT32_MAX;
	uint32_t x339 = 1716229U;
	uint32_t x340 = 1575U;
	uint32_t t83 = 1446945U;

	t83 = (((x337|x338)/x339)|x340);

	if (t83 != 4071U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x342 = -1;
	uint32_t x343 = 325764U;
	int64_t t84 = -3462882598426156320LL;

	t84 = (((x341|x342)/x343)|x344);

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x345 = 643194U;
	uint8_t x346 = 1U;
	volatile uint32_t x347 = 86480U;
	int64_t x348 = INT64_MIN;

	t85 = (((x345|x346)/x347)|x348);

	if (t85 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MIN;
	uint32_t x350 = UINT32_MAX;
	static int16_t x351 = 4;
	static int8_t x352 = INT8_MAX;
	volatile int64_t t86 = 1562416LL;

	t86 = (((x349|x350)/x351)|x352);

	if (t86 != -2305843008139952001LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x353 = 1311U;
	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	static int64_t t87 = INT64_MIN;

	t87 = (((x353|x354)/x355)|x356);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x357 = 42U;
	int8_t x358 = INT8_MAX;
	static uint8_t x359 = 3U;
	volatile uint64_t x360 = 1165938533685055162LLU;
	volatile uint64_t t88 = 83660719LLU;

	t88 = (((x357|x358)/x359)|x360);

	if (t88 != 1165938533685055162LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = -744;
	int16_t x362 = 4985;
	int8_t x363 = INT8_MAX;
	int32_t x364 = -1;

	t89 = (((x361|x362)/x363)|x364);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = 4070U;
	int64_t x366 = 12205054169021385LL;
	uint64_t t90 = 1091LLU;

	t90 = (((x365|x366)/x367)|x368);

	if (t90 != 329866328892671LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 117U;
	static int8_t x370 = 0;
	volatile int64_t t91 = INT64_MIN;

	t91 = (((x369|x370)/x371)|x372);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t t92 = -666;

	t92 = (((x373|x374)/x375)|x376);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x378 = -1;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 6265876873LLU;

	t93 = (((x377|x378)/x379)|x380);

	if (t93 != 6265876873LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	int32_t x382 = -329517591;
	uint32_t x383 = 788835U;
	static volatile int64_t t94 = 84534868054818LL;

	t94 = (((x381|x382)/x383)|x384);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x385 = -787554565883209068LL;
	int16_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int64_t t95 = -14729969596LL;

	t95 = (((x385|x386)/x387)|x388);

	if (t95 != -55312383LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MAX;
	uint32_t x391 = UINT32_MAX;
	uint8_t x392 = UINT8_MAX;
	uint32_t t96 = 366U;

	t96 = (((x389|x390)/x391)|x392);

	if (t96 != 255U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x393 = -1;
	uint32_t x395 = 11U;
	volatile uint32_t t97 = 1142502990U;

	t97 = (((x393|x394)/x395)|x396);

	if (t97 != 533725052U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 0U;
	volatile int64_t x399 = INT64_MAX;
	volatile uint8_t x400 = 6U;

	t98 = (((x397|x398)/x399)|x400);

	if (t98 != 6LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x402 = -1957152;
	int64_t x404 = -1309LL;
	int64_t t99 = 233605739041129LL;

	t99 = (((x401|x402)/x403)|x404);

	if (t99 != -1053LL) { NG(); } else { ; }
	
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

