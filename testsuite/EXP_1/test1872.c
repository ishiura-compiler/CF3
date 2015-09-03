#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 0;
uint32_t x13 = UINT32_MAX;
static uint16_t x15 = 1789U;
int16_t x26 = -1;
volatile uint64_t t5 = 53613814020306LLU;
uint16_t x35 = 1U;
static volatile int32_t t6 = -52168;
volatile int32_t x37 = 0;
volatile int32_t t9 = 609584464;
static uint16_t x57 = 75U;
static int8_t x60 = -6;
int8_t x62 = -1;
static int64_t x64 = INT64_MIN;
static int16_t x68 = 2830;
int64_t x75 = INT64_MIN;
int16_t x87 = -94;
int8_t x91 = INT8_MAX;
volatile int16_t x92 = 24;
uint32_t t19 = 15U;
static int32_t t20 = -935557349;
static uint64_t x103 = 364984756LLU;
int32_t x104 = -4;
uint64_t t22 = 21756615995962662LLU;
uint16_t x105 = 4429U;
int8_t x116 = INT8_MIN;
uint32_t x121 = UINT32_MAX;
uint8_t x122 = 52U;
uint32_t x124 = UINT32_MAX;
volatile int64_t x126 = INT64_MIN;
volatile int64_t x130 = -1LL;
int16_t x136 = INT16_MIN;
int8_t x142 = 0;
uint16_t x144 = 296U;
int8_t x146 = -4;
int32_t x151 = -239;
static int8_t x155 = INT8_MAX;
volatile int8_t x157 = INT8_MIN;
int32_t x166 = INT32_MAX;
uint32_t x168 = 0U;
int64_t x170 = INT64_MAX;
volatile int8_t x171 = INT8_MIN;
int64_t t38 = -266967080LL;
int8_t x173 = INT8_MIN;
volatile uint8_t x175 = UINT8_MAX;
int16_t x176 = -586;
static volatile int16_t x183 = 2;
int8_t x189 = -1;
int16_t x191 = INT16_MAX;
int8_t x196 = 21;
volatile uint16_t x205 = 11U;
int32_t t46 = 3;
int8_t x211 = -1;
int64_t x216 = INT64_MAX;
int16_t x231 = -542;
static int32_t x235 = -1;
int16_t x238 = -3;
volatile int16_t x239 = INT16_MIN;
int16_t x243 = -824;
uint16_t x244 = 20333U;
volatile int32_t t56 = -130;
uint16_t x257 = 648U;
int8_t x259 = INT8_MIN;
uint32_t x260 = UINT32_MAX;
volatile uint16_t x262 = 29920U;
static uint16_t x266 = UINT16_MAX;
int8_t x271 = INT8_MAX;
int16_t x279 = INT16_MIN;
uint32_t t62 = 10484U;
volatile int8_t x284 = INT8_MAX;
volatile int32_t t63 = 7;
int64_t x286 = -1LL;
uint64_t x287 = UINT64_MAX;
uint64_t t64 = 43LLU;
int64_t x290 = 1054655835LL;
int16_t x293 = INT16_MAX;
uint8_t x299 = 1U;
uint8_t x303 = 3U;
volatile uint32_t t68 = 210435732U;
volatile int16_t x308 = INT16_MIN;
int16_t x319 = 1202;
uint32_t x329 = 8457U;
volatile int16_t x333 = -1;
int16_t x335 = INT16_MIN;
int16_t x337 = INT16_MIN;
int64_t x341 = INT64_MIN;
volatile uint32_t x343 = 1U;
uint32_t x348 = UINT32_MAX;
int32_t x355 = INT32_MAX;
uint8_t x360 = UINT8_MAX;
int64_t x361 = -1LL;
static int16_t x374 = -372;
int16_t x377 = 11;
volatile int32_t x378 = INT32_MAX;
static int8_t x379 = INT8_MIN;
static uint64_t x382 = 356LLU;
volatile int64_t x383 = 90203093465027LL;
uint8_t x387 = UINT8_MAX;
int16_t x394 = -6;
volatile uint32_t t87 = 0U;
uint16_t x399 = 4U;
uint32_t t89 = 740989549U;
int16_t x407 = 13748;
volatile int64_t t90 = 248871509676LL;
uint32_t x410 = 6633U;
uint32_t t91 = 260306550U;
static int64_t x413 = INT64_MAX;
int32_t x414 = 6838;
volatile int8_t x415 = INT8_MIN;
uint8_t x424 = 94U;
int8_t x432 = -1;
volatile int64_t t95 = -416058LL;
uint32_t x434 = 908546U;
static volatile int8_t x437 = INT8_MAX;
int8_t x440 = INT8_MIN;
uint64_t t97 = 1224565077937191257LLU;
int16_t x446 = 1;
static int16_t x447 = INT16_MIN;
int64_t t99 = -15180057772728LL;


void f0(void) {
	int16_t x1 = -1;
	int8_t x2 = -3;
	static uint8_t x3 = 1U;
	uint16_t x4 = 47U;
	static volatile int32_t t0 = 38469;

	t0 = (((x1|x2)+x3)^x4);

	if (t0 != 47) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -5704LL;
	uint16_t x6 = 3U;
	uint8_t x7 = UINT8_MAX;
	volatile int64_t t1 = 1023726LL;

	t1 = (((x5|x6)+x7)^x8);

	if (t1 != -5446LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	uint16_t x16 = 7871U;
	static volatile uint64_t t2 = 632019180019LLU;

	t2 = (((x13|x14)+x15)^x16);

	if (t2 != 6211LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	uint8_t x18 = 1U;
	static uint32_t x19 = 174990413U;
	uint16_t x20 = 10284U;
	volatile uint32_t t3 = 866725U;

	t3 = (((x17|x18)+x19)^x20);

	if (t3 != 174951522U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -673;
	static uint16_t x27 = 42U;
	uint16_t x28 = 15U;
	int32_t t4 = 15245;

	t4 = (((x25|x26)+x27)^x28);

	if (t4 != 38) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	static volatile int64_t x30 = INT64_MAX;
	volatile uint64_t x31 = UINT64_MAX;
	uint8_t x32 = 123U;

	t5 = (((x29|x30)+x31)^x32);

	if (t5 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	int8_t x36 = INT8_MIN;

	t6 = (((x33|x34)+x35)^x36);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x38 = 124354093007535292LLU;
	int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	volatile uint64_t t7 = 189581947LLU;

	t7 = (((x37|x38)+x39)^x40);

	if (t7 != 18322389980702049084LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = INT32_MIN;
	int32_t x42 = 3316;
	int8_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t8 = -9;

	t8 = (((x41|x42)+x43)^x44);

	if (t8 != -2147421428) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x49 = -65168;
	volatile uint8_t x50 = 53U;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = -66;

	t9 = (((x49|x50)+x51)^x52);

	if (t9 != 65355) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	int32_t x54 = INT32_MIN;
	static uint32_t x55 = UINT32_MAX;
	volatile int32_t x56 = INT32_MIN;
	int64_t t10 = -1004990938704LL;

	t10 = (((x53|x54)+x55)^x56);

	if (t10 != -2147483650LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x58 = UINT32_MAX;
	volatile int16_t x59 = -1;
	volatile uint32_t t11 = 3U;

	t11 = (((x57|x58)+x59)^x60);

	if (t11 != 4U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = INT8_MIN;
	volatile int64_t x63 = -1LL;
	int64_t t12 = -7969684347753323LL;

	t12 = (((x61|x62)+x63)^x64);

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = 0;
	int8_t x67 = INT8_MIN;
	int32_t t13 = 10908;

	t13 = (((x65|x66)+x67)^x68);

	if (t13 != 2147480689) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 31613497U;
	int64_t x70 = 3654121926472915456LL;
	volatile int32_t x71 = INT32_MIN;
	int64_t x72 = 16096317838631721LL;
	int64_t t14 = -155964797323LL;

	t14 = (((x69|x70)+x71)^x72);

	if (t14 != 3643169122228164880LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	uint8_t x74 = 1U;
	int8_t x76 = -1;
	volatile int64_t t15 = -12688637938099722LL;

	t15 = (((x73|x74)+x75)^x76);

	if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MAX;
	int8_t x79 = -3;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = -399;

	t16 = (((x77|x78)+x79)^x80);

	if (t16 != -2147450877) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = -1;
	static int64_t x82 = -1LL;
	int32_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t17 = -154682149983593059LL;

	t17 = (((x81|x82)+x83)^x84);

	if (t17 != -255LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -4247783071984LL;
	static uint8_t x86 = 22U;
	static uint64_t x88 = UINT64_MAX;
	volatile uint64_t t18 = 484LLU;

	t18 = (((x85|x86)+x87)^x88);

	if (t18 != 4247783072071LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = INT16_MAX;
	volatile uint32_t x90 = 65211180U;

	t19 = (((x89|x90)+x91)^x92);

	if (t19 != 65241190U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 5U;
	int16_t x94 = 114;
	volatile uint16_t x95 = 50U;
	int16_t x96 = INT16_MIN;

	t20 = (((x93|x94)+x95)^x96);

	if (t20 != -32599) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = -431426758968426LL;
	int32_t x98 = INT32_MIN;
	int64_t x99 = -45LL;
	static int8_t x100 = INT8_MIN;
	volatile int64_t t21 = -24750192536332LL;

	t21 = (((x97|x98)+x99)^x100);

	if (t21 != 1589052649LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = INT64_MIN;
	static uint8_t x102 = 3U;

	t22 = (((x101|x102)+x103)^x104);

	if (t22 != 9223372036489791051LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = INT16_MIN;
	int64_t x107 = -1LL;
	volatile uint16_t x108 = UINT16_MAX;
	int64_t t23 = 476169LL;

	t23 = (((x105|x106)+x107)^x108);

	if (t23 != -37197LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 2061612U;
	int8_t x110 = 1;
	static uint16_t x111 = 3U;
	static uint64_t x112 = 10250679731078LLU;
	uint64_t t24 = 44LLU;

	t24 = (((x109|x110)+x111)^x112);

	if (t24 != 10250677696182LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -1;
	static volatile int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	volatile int32_t t25 = 18;

	t25 = (((x113|x114)+x115)^x116);

	if (t25 != 32895) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	static volatile uint8_t x118 = 0U;
	uint64_t x119 = 10801944459041LLU;
	int8_t x120 = INT8_MIN;
	uint64_t t26 = 76318496356LLU;

	t26 = (((x117|x118)+x119)^x120);

	if (t26 != 18446733273912576161LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x123 = 1;
	static volatile uint32_t t27 = UINT32_MAX;

	t27 = (((x121|x122)+x123)^x124);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MAX;
	uint32_t x127 = 2577269U;
	uint32_t x128 = UINT32_MAX;
	int64_t t28 = -13525008182468638LL;

	t28 = (((x125|x126)+x127)^x128);

	if (t28 != -9223372032562385909LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = INT64_MIN;
	static volatile int32_t x131 = -1;
	int16_t x132 = INT16_MIN;
	int64_t t29 = 217722941061440LL;

	t29 = (((x129|x130)+x131)^x132);

	if (t29 != 32766LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	static int8_t x135 = -15;
	int32_t t30 = -25354358;

	t30 = (((x133|x134)+x135)^x136);

	if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 185357LLU;
	uint16_t x138 = 9U;
	volatile uint16_t x139 = UINT16_MAX;
	static uint64_t x140 = 42755474645820LLU;
	uint64_t t31 = 28LLU;

	t31 = (((x137|x138)+x139)^x140);

	if (t31 != 42755474798384LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -1474689;
	static int64_t x143 = -114068832LL;
	int64_t t32 = 4145323938269310171LL;

	t32 = (((x141|x142)+x143)^x144);

	if (t32 != -115543241LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 198141LLU;
	volatile uint16_t x147 = UINT16_MAX;
	volatile int64_t x148 = -1LL;
	volatile uint64_t t33 = 9964669759LLU;

	t33 = (((x145|x146)+x147)^x148);

	if (t33 != 18446744073709486083LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	uint32_t x152 = 1778476574U;
	uint32_t t34 = 126872U;

	t34 = (((x149|x150)+x151)^x152);

	if (t34 != 2516490510U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = INT64_MIN;
	volatile uint8_t x154 = 59U;
	static uint64_t x156 = 153790641658LLU;
	uint64_t t35 = 408257003175150298LLU;

	t35 = (((x153|x154)+x155)^x156);

	if (t35 != 9223372190645417280LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = INT8_MIN;
	static int8_t x159 = -3;
	int8_t x160 = INT8_MAX;
	int32_t t36 = -1;

	t36 = (((x157|x158)+x159)^x160);

	if (t36 != -254) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = 98926LLU;
	int64_t x167 = INT64_MIN;
	static volatile uint64_t t37 = 8221062355678LLU;

	t37 = (((x165|x166)+x167)^x168);

	if (t37 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x169 = 58U;
	int64_t x172 = INT64_MIN;

	t38 = (((x169|x170)+x171)^x172);

	if (t38 != -129LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x174 = INT64_MIN;
	int64_t t39 = 765145974848LL;

	t39 = (((x173|x174)+x175)^x176);

	if (t39 != -567LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = 1320;
	uint8_t x179 = 3U;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t40 = 1948020113567310792LLU;

	t40 = (((x177|x178)+x179)^x180);

	if (t40 != 2147482324LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -1;
	static uint64_t x182 = 87816904111987813LLU;
	int16_t x184 = INT16_MAX;
	uint64_t t41 = 4224935LLU;

	t41 = (((x181|x182)+x183)^x184);

	if (t41 != 32766LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x185 = 6U;
	int64_t x186 = -1LL;
	int8_t x187 = 0;
	uint64_t x188 = 4995LLU;
	uint64_t t42 = 1146302095LLU;

	t42 = (((x185|x186)+x187)^x188);

	if (t42 != 18446744073709546620LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x190 = 33U;
	volatile uint32_t x192 = 0U;
	volatile uint32_t t43 = 11022895U;

	t43 = (((x189|x190)+x191)^x192);

	if (t43 != 32766U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = UINT64_MAX;
	int64_t x194 = -1LL;
	uint32_t x195 = 150689980U;
	uint64_t t44 = 7835404998086361LLU;

	t44 = (((x193|x194)+x195)^x196);

	if (t44 != 150689966LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MAX;
	static int8_t x198 = -1;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t x200 = 465;
	volatile int64_t t45 = -807LL;

	t45 = (((x197|x198)+x199)^x200);

	if (t45 != 65071LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = -1;
	volatile int32_t x207 = -1;
	int8_t x208 = 12;

	t46 = (((x205|x206)+x207)^x208);

	if (t46 != -14) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MAX;
	int8_t x212 = -1;
	uint32_t t47 = 1183316U;

	t47 = (((x209|x210)+x211)^x212);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -2;
	int64_t x214 = -1LL;
	int32_t x215 = INT32_MIN;
	volatile int64_t t48 = 540604741761892LL;

	t48 = (((x213|x214)+x215)^x216);

	if (t48 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x218 = 6186834351931LL;
	int16_t x219 = -38;
	static int8_t x220 = INT8_MIN;
	volatile int64_t t49 = 1LL;

	t49 = (((x217|x218)+x219)^x220);

	if (t49 != -6186834395047LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	volatile int8_t x223 = 0;
	int32_t x224 = INT32_MIN;
	int64_t t50 = -123893LL;

	t50 = (((x221|x222)+x223)^x224);

	if (t50 != 2147483520LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -100822371025211771LL;
	int8_t x226 = 3;
	static int32_t x227 = INT32_MIN;
	int64_t x228 = 13268LL;
	volatile int64_t t51 = 10980418252012LL;

	t51 = (((x225|x226)+x227)^x228);

	if (t51 != -100822373172699821LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MIN;
	int64_t x232 = -12964315682263679LL;
	uint64_t t52 = 663370401997848273LLU;

	t52 = (((x229|x230)+x231)^x232);

	if (t52 != 12964315682263136LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = INT16_MIN;
	static uint32_t x234 = UINT32_MAX;
	volatile int8_t x236 = INT8_MIN;
	volatile uint32_t t53 = 17687U;

	t53 = (((x233|x234)+x235)^x236);

	if (t53 != 126U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MAX;
	uint64_t x240 = 2325165634621832LLU;
	volatile uint64_t t54 = 19961706LLU;

	t54 = (((x237|x238)+x239)^x240);

	if (t54 != 18444418908074897015LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = -1;
	static int16_t x242 = -1;
	int32_t t55 = -981;

	t55 = (((x241|x242)+x243)^x244);

	if (t55 != -19542) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x246 = 3U;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;

	t56 = (((x245|x246)+x247)^x248);

	if (t56 != -2147450753) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x253 = 21378U;
	int32_t x254 = -1;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = -538092807593476380LL;
	int64_t t57 = -39058250913138672LL;

	t57 = (((x253|x254)+x255)^x256);

	if (t57 != -538092807593476454LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = -85;
	static uint32_t t58 = 59U;

	t58 = (((x257|x258)+x259)^x260);

	if (t58 != 212U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MAX;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 3LLU;
	volatile uint64_t t59 = 736LLU;

	t59 = (((x261|x262)+x263)^x264);

	if (t59 != 2147483516LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -15424;
	int16_t x267 = -856;
	int32_t x268 = -6408501;
	volatile int32_t t60 = 0;

	t60 = (((x265|x266)+x267)^x268);

	if (t60 != 6408812) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = -8;
	static int32_t x272 = INT32_MIN;
	int32_t t61 = 1;

	t61 = (((x269|x270)+x271)^x272);

	if (t61 != -2147483522) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = 1456987U;
	int16_t x280 = INT16_MIN;

	t62 = (((x277|x278)+x279)^x280);

	if (t62 != 2146057051U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	static int16_t x282 = 71;
	volatile int8_t x283 = INT8_MAX;

	t63 = (((x281|x282)+x283)^x284);

	if (t63 != 57) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MAX;
	static uint8_t x288 = 0U;

	t64 = (((x285|x286)+x287)^x288);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x289 = 0U;
	int32_t x291 = INT32_MIN;
	int8_t x292 = -1;
	volatile int64_t t65 = 0LL;

	t65 = (((x289|x290)+x291)^x292);

	if (t65 != 1092827812LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x294 = 627;
	uint32_t x295 = 89U;
	uint64_t x296 = 60LLU;
	uint64_t t66 = 1109444675700073571LLU;

	t66 = (((x293|x294)+x295)^x296);

	if (t66 != 32868LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = -1;
	int64_t x298 = INT64_MAX;
	volatile int8_t x300 = INT8_MAX;
	volatile int64_t t67 = -4645555227932549LL;

	t67 = (((x297|x298)+x299)^x300);

	if (t67 != 127LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = UINT32_MAX;
	int16_t x302 = INT16_MIN;
	int32_t x304 = INT32_MAX;

	t68 = (((x301|x302)+x303)^x304);

	if (t68 != 2147483645U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x305 = UINT8_MAX;
	uint32_t x306 = 0U;
	int64_t x307 = -1LL;
	volatile int64_t t69 = 921983613757LL;

	t69 = (((x305|x306)+x307)^x308);

	if (t69 != -32514LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x309 = -103229;
	volatile int64_t x310 = INT64_MAX;
	static volatile int64_t x311 = INT64_MAX;
	int8_t x312 = -1;
	int64_t t70 = -48866640755675LL;

	t70 = (((x309|x310)+x311)^x312);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x313 = UINT32_MAX;
	static volatile int32_t x314 = -1;
	static int8_t x315 = -1;
	int16_t x316 = -1;
	volatile uint32_t t71 = 103103737U;

	t71 = (((x313|x314)+x315)^x316);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = 30;
	uint64_t x320 = 1489027060992482LLU;
	volatile uint64_t t72 = 6682416618444379664LLU;

	t72 = (((x317|x318)+x319)^x320);

	if (t72 != 18445255045609426226LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x321 = UINT16_MAX;
	int64_t x322 = 783226786769725LL;
	volatile uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MIN;
	int64_t t73 = 86107941025LL;

	t73 = (((x321|x322)+x323)^x324);

	if (t73 != -9222588810067967746LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x330 = 913U;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = 1;
	volatile uint64_t t74 = 12218LLU;

	t74 = (((x329|x330)+x331)^x332);

	if (t74 != 9113LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x334 = 11872005U;
	int16_t x336 = -2146;
	uint32_t t75 = 123800U;

	t75 = (((x333|x334)+x335)^x336);

	if (t75 != 34913U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x338 = UINT16_MAX;
	static int8_t x339 = INT8_MIN;
	static volatile int8_t x340 = 0;
	volatile int32_t t76 = 2379127;

	t76 = (((x337|x338)+x339)^x340);

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x342 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	uint64_t t77 = 2537LLU;

	t77 = (((x341|x342)+x343)^x344);

	if (t77 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = INT32_MAX;
	volatile int16_t x346 = INT16_MIN;
	static int16_t x347 = -1;
	uint32_t t78 = 80U;

	t78 = (((x345|x346)+x347)^x348);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = 44U;
	static int16_t x350 = INT16_MAX;
	static int16_t x351 = INT16_MAX;
	static int8_t x352 = -1;
	volatile int32_t t79 = -51117;

	t79 = (((x349|x350)+x351)^x352);

	if (t79 != -65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x353 = 11U;
	volatile uint64_t x354 = 314535446LLU;
	volatile int64_t x356 = -2369106270LL;
	uint64_t t80 = 46459968008LLU;

	t80 = (((x353|x354)+x355)^x356);

	if (t80 != 18446744073180356796LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = 4019U;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = INT64_MIN;
	uint64_t t81 = 317967618LLU;

	t81 = (((x357|x358)+x359)^x360);

	if (t81 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x362 = INT32_MIN;
	volatile uint32_t x363 = UINT32_MAX;
	static uint32_t x364 = 937U;
	int64_t t82 = 6LL;

	t82 = (((x361|x362)+x363)^x364);

	if (t82 != 4294966359LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x373 = 4U;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = -13LL;
	static int64_t t83 = 437384570401654LL;

	t83 = (((x373|x374)+x375)^x376);

	if (t83 != 120LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x380 = UINT16_MAX;
	volatile int32_t t84 = -11695832;

	t84 = (((x377|x378)+x379)^x380);

	if (t84 != 2147418240) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x381 = -20;
	volatile int32_t x384 = 748;
	static uint64_t t85 = 144LLU;

	t85 = (((x381|x382)+x383)^x384);

	if (t85 != 90203093464387LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x385 = -4556;
	int16_t x386 = -5;
	volatile int32_t x388 = 740790;
	volatile int32_t t86 = 967119936;

	t86 = (((x385|x386)+x387)^x388);

	if (t86 != 740680) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = 840202643U;
	volatile int8_t x395 = INT8_MAX;
	static int32_t x396 = INT32_MIN;

	t87 = (((x393|x394)+x395)^x396);

	if (t87 != 2147483770U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = 6;
	int16_t x398 = -1189;
	int32_t x400 = INT32_MAX;
	volatile int32_t t88 = -28203;

	t88 = (((x397|x398)+x399)^x400);

	if (t88 != -2147482468) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = 1;
	uint16_t x402 = 0U;
	uint32_t x403 = 145297715U;
	int16_t x404 = 5;

	t89 = (((x401|x402)+x403)^x404);

	if (t89 != 145297713U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	uint16_t x408 = 40U;

	t90 = (((x405|x406)+x407)^x408);

	if (t90 != 13596LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x411 = UINT32_MAX;
	uint32_t x412 = 491U;

	t91 = (((x409|x410)+x411)^x412);

	if (t91 != 4294966787U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x416 = INT64_MIN;
	static volatile int64_t t92 = 0LL;

	t92 = (((x413|x414)+x415)^x416);

	if (t92 != -129LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = -1;
	int64_t x419 = -4798LL;
	volatile uint32_t x420 = UINT32_MAX;
	volatile int64_t t93 = 14110LL;

	t93 = (((x417|x418)+x419)^x420);

	if (t93 != -4294962498LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MIN;
	static int8_t x423 = -1;
	int32_t t94 = 3;

	t94 = (((x421|x422)+x423)^x424);

	if (t94 != -223) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = 30370LL;
	volatile int8_t x430 = -1;
	uint32_t x431 = 54079895U;

	t95 = (((x429|x430)+x431)^x432);

	if (t95 != -54079895LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = UINT64_MAX;
	int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MIN;
	uint64_t t96 = 1489640409066LLU;

	t96 = (((x433|x434)+x435)^x436);

	if (t96 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x438 = UINT64_MAX;
	int64_t x439 = INT64_MIN;

	t97 = (((x437|x438)+x439)^x440);

	if (t97 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x441 = 1622;
	static volatile uint16_t x442 = 14U;
	int16_t x443 = -1;
	int32_t x444 = INT32_MIN;
	static int32_t t98 = -3;

	t98 = (((x441|x442)+x443)^x444);

	if (t98 != -2147482019) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x445 = INT16_MIN;
	static int64_t x448 = -2268931375102659435LL;

	t99 = (((x445|x446)+x447)^x448);

	if (t99 != 2268931375102653588LL) { NG(); } else { ; }
	
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

