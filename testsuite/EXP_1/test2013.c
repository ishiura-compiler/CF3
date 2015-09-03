#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
static int64_t x4 = -27LL;
uint64_t x6 = 3979436298LLU;
int16_t x8 = 1;
uint64_t t1 = 1974300472435LLU;
volatile uint64_t x10 = 1765214LLU;
uint64_t t2 = 2451970594645LLU;
int8_t x13 = INT8_MIN;
volatile uint32_t x14 = 6811U;
int8_t x15 = 0;
uint64_t t5 = 398880544894461428LLU;
int64_t x27 = INT64_MIN;
int16_t x29 = INT16_MIN;
static int8_t x38 = INT8_MAX;
volatile int32_t x44 = -1;
int64_t x51 = 1433003935850630LL;
static uint16_t x52 = 8119U;
int16_t x53 = -1;
int8_t x57 = -1;
volatile int16_t x59 = INT16_MIN;
static volatile int64_t t16 = 6816264765371030LL;
volatile int16_t x70 = INT16_MIN;
static volatile int32_t x78 = -21;
volatile int16_t x79 = INT16_MIN;
uint64_t x80 = 4958212LLU;
int32_t x88 = INT32_MAX;
static int32_t t21 = INT32_MAX;
uint8_t x89 = 120U;
static volatile uint16_t x92 = UINT16_MAX;
int16_t x96 = INT16_MIN;
uint64_t x97 = 1106475287LLU;
int16_t x99 = INT16_MIN;
static volatile uint16_t x100 = 1U;
int16_t x104 = 536;
int64_t x109 = -3022124938961884LL;
volatile int16_t x117 = INT16_MAX;
uint8_t x119 = 101U;
int32_t x120 = -176923;
int32_t x121 = INT32_MIN;
int8_t x131 = -1;
int32_t x135 = 318996;
volatile int8_t x145 = 0;
int16_t x147 = -4059;
volatile uint32_t t37 = 145U;
uint8_t x155 = UINT8_MAX;
uint32_t x158 = 39269U;
int16_t x162 = -332;
int8_t x165 = INT8_MIN;
static volatile int16_t x167 = -1;
uint64_t x168 = 4752749380405LLU;
int32_t x171 = 9;
static int64_t x177 = INT64_MAX;
volatile int64_t t44 = -80509LL;
uint8_t x185 = UINT8_MAX;
int8_t x187 = INT8_MIN;
int32_t t46 = 14;
int8_t x193 = -6;
int32_t x196 = INT32_MAX;
uint64_t x197 = 8257258488LLU;
uint64_t t49 = 408428762935053LLU;
int16_t x204 = -62;
int32_t x205 = INT32_MIN;
volatile uint64_t t52 = 511LLU;
static int64_t t56 = 87076LL;
uint64_t x232 = 254161LLU;
uint16_t x235 = 3U;
volatile uint8_t x236 = 24U;
uint32_t t58 = 21207U;
volatile uint64_t t59 = 11922025LLU;
int16_t x244 = -1;
int64_t x246 = -1LL;
static volatile int32_t t62 = -793033;
volatile uint32_t x254 = UINT32_MAX;
volatile uint32_t t63 = 46184417U;
uint16_t x259 = 15U;
static int64_t x260 = -1LL;
int16_t x262 = -1;
int32_t t65 = INT32_MAX;
uint8_t x269 = UINT8_MAX;
static int64_t t67 = INT64_MIN;
int16_t x273 = -1;
int8_t x278 = INT8_MIN;
static volatile int32_t x286 = -1;
volatile int32_t t73 = 253860959;
uint64_t x301 = 501LLU;
volatile int32_t x302 = -337;
int8_t x309 = INT8_MIN;
int8_t x312 = -1;
uint16_t x313 = 8606U;
uint32_t x314 = 58504U;
int32_t x318 = 233715548;
uint8_t x327 = 48U;
static int64_t t81 = -61546069376625679LL;
int8_t x329 = INT8_MIN;
int32_t x333 = -1;
int64_t x342 = INT64_MIN;
static volatile uint8_t x343 = 5U;
int64_t x348 = INT64_MIN;
volatile uint16_t x352 = 3431U;
int8_t x357 = INT8_MIN;
uint16_t x358 = 7809U;
static volatile int64_t t89 = INT64_MIN;
uint64_t t91 = 410559569498884LLU;
uint32_t x374 = 114298U;
uint16_t x378 = UINT16_MAX;
uint64_t x381 = 1032033469550LLU;
static int16_t x383 = INT16_MIN;
int8_t x387 = INT8_MIN;
static int32_t x392 = 11472;
uint64_t t97 = 463136142527LLU;
int32_t x394 = 1007310240;
int32_t x395 = -6360;
static int32_t x396 = 2;
int8_t x399 = INT8_MAX;
int32_t t99 = 134;


void f0(void) {
	int16_t x1 = 33;
	static int16_t x3 = -1;
	int64_t t0 = -23LL;

	t0 = (((x1|x2)|x3)&x4);

	if (t0 != -27LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -2;
	uint32_t x7 = UINT32_MAX;

	t1 = (((x5|x6)|x7)&x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 9;
	static int16_t x11 = INT16_MAX;
	int64_t x12 = 19879566230469203LL;

	t2 = (((x9|x10)|x11)&x12);

	if (t2 != 1096275LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x16 = UINT16_MAX;
	uint32_t t3 = 133805077U;

	t3 = (((x13|x14)|x15)&x16);

	if (t3 != 65435U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 5;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = 451;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 922960931332LL;

	t4 = (((x17|x18)|x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = -4LL;
	uint64_t x23 = 5483301LLU;
	uint32_t x24 = 253U;

	t5 = (((x21|x22)|x23)&x24);

	if (t5 != 253LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int32_t x26 = INT32_MIN;
	static int32_t x28 = -1;
	int64_t t6 = -1596385542LL;

	t6 = (((x25|x26)|x27)&x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = UINT32_MAX;
	uint8_t x31 = UINT8_MAX;
	static int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 926407675U;

	t7 = (((x29|x30)|x31)&x32);

	if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	volatile int32_t x34 = INT32_MAX;
	int64_t x35 = -607002815108772LL;
	static volatile int32_t x36 = INT32_MIN;
	volatile int64_t t8 = -249751643091LL;

	t8 = (((x33|x34)|x35)&x36);

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1002740550252LLU;
	static int32_t x39 = INT32_MIN;
	uint8_t x40 = UINT8_MAX;
	uint64_t t9 = 207629485LLU;

	t9 = (((x37|x38)|x39)&x40);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile int32_t x42 = -16262;
	uint16_t x43 = 1U;
	static volatile int64_t t10 = -64423933957069643LL;

	t10 = (((x41|x42)|x43)&x44);

	if (t10 != -16261LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = -1;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -238668;

	t11 = (((x45|x46)|x47)&x48);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MAX;
	int64_t t12 = 1796LL;

	t12 = (((x49|x50)|x51)&x52);

	if (t12 != 8119LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MAX;
	uint8_t x55 = 70U;
	int16_t x56 = 2255;
	volatile int64_t t13 = -233969459901LL;

	t13 = (((x53|x54)|x55)&x56);

	if (t13 != 2255LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x58 = 0;
	uint64_t x60 = 3421594474LLU;
	uint64_t t14 = 743775963LLU;

	t14 = (((x57|x58)|x59)&x60);

	if (t14 != 3421594474LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -8407LL;
	uint32_t x62 = 3130346U;
	int8_t x63 = INT8_MAX;
	volatile uint16_t x64 = 1U;
	int64_t t15 = -11117802628485207LL;

	t15 = (((x61|x62)|x63)&x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static int64_t x66 = -2836181263LL;
	uint32_t x67 = 659176522U;
	int8_t x68 = -1;

	t16 = (((x65|x66)|x67)&x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static int8_t x71 = 0;
	volatile int16_t x72 = 2322;
	volatile int32_t t17 = 57;

	t17 = (((x69|x70)|x71)&x72);

	if (t17 != 2322) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	volatile uint8_t x74 = 23U;
	volatile int64_t x75 = -2599LL;
	static uint8_t x76 = 0U;
	int64_t t18 = 535941561505LL;

	t18 = (((x73|x74)|x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint64_t t19 = 1247731913084013565LLU;

	t19 = (((x77|x78)|x79)&x80);

	if (t19 != 4958208LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 13;
	uint64_t x82 = 65264LLU;
	uint32_t x83 = 4U;
	static int32_t x84 = INT32_MIN;
	volatile uint64_t t20 = 3LLU;

	t20 = (((x81|x82)|x83)&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;

	t21 = (((x85|x86)|x87)&x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = 355040779865LL;
	int64_t x91 = INT64_MAX;
	int64_t t22 = 13749871LL;

	t22 = (((x89|x90)|x91)&x92);

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int64_t x94 = INT64_MAX;
	static volatile int8_t x95 = -1;
	int64_t t23 = 0LL;

	t23 = (((x93|x94)|x95)&x96);

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	uint64_t t24 = 2266744337366LLU;

	t24 = (((x97|x98)|x99)&x100);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 97U;
	int16_t x102 = -1;
	int8_t x103 = -1;
	int32_t t25 = -230106;

	t25 = (((x101|x102)|x103)&x104);

	if (t25 != 536) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 3;
	int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	uint32_t x108 = UINT32_MAX;
	int64_t t26 = 1LL;

	t26 = (((x105|x106)|x107)&x108);

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = 360146179259LL;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	static int64_t t27 = -333140888810LL;

	t27 = (((x109|x110)|x111)&x112);

	if (t27 != -9025LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 556025LL;
	int8_t x114 = -1;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = -1;
	int64_t t28 = 231836742611LL;

	t28 = (((x113|x114)|x115)&x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 4U;
	static int32_t t29 = 1;

	t29 = (((x117|x118)|x119)&x120);

	if (t29 != 19685) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1LL;
	int8_t x123 = -1;
	static volatile int32_t x124 = INT32_MIN;
	volatile int64_t t30 = 30692104LL;

	t30 = (((x121|x122)|x123)&x124);

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 44;
	uint32_t x126 = 28U;
	static volatile uint16_t x127 = 2903U;
	volatile uint16_t x128 = UINT16_MAX;
	uint32_t t31 = 2318231U;

	t31 = (((x125|x126)|x127)&x128);

	if (t31 != 2943U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 19733U;
	uint64_t x130 = 2LLU;
	volatile int32_t x132 = INT32_MIN;
	static volatile uint64_t t32 = 35148339965654LLU;

	t32 = (((x129|x130)|x131)&x132);

	if (t32 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MAX;
	int16_t x136 = INT16_MIN;
	volatile int64_t t33 = 416075196LL;

	t33 = (((x133|x134)|x135)&x136);

	if (t33 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 0;
	int32_t x138 = INT32_MIN;
	static int64_t x139 = -1788802595763466LL;
	int64_t x140 = INT64_MAX;
	static volatile int64_t t34 = 75LL;

	t34 = (((x137|x138)|x139)&x140);

	if (t34 != 9223372036598188790LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = 55;
	int32_t x142 = 8174053;
	uint64_t x143 = 0LLU;
	static volatile int64_t x144 = 103619370839624123LL;
	static volatile uint64_t t35 = 860556744447939LLU;

	t35 = (((x141|x142)|x143)&x144);

	if (t35 != 3967411LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	int8_t x148 = -1;
	int32_t t36 = 440242005;

	t36 = (((x145|x146)|x147)&x148);

	if (t36 != -4059) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static uint32_t x150 = 794U;
	static uint32_t x151 = 55714U;
	int8_t x152 = INT8_MIN;

	t37 = (((x149|x150)|x151)&x152);

	if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1;
	int64_t x154 = -1LL;
	static volatile uint16_t x156 = 2618U;
	static int64_t t38 = 355653LL;

	t38 = (((x153|x154)|x155)&x156);

	if (t38 != 2618LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 337080067LLU;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = 3419778649675LL;
	uint64_t t39 = 62715LLU;

	t39 = (((x157|x158)|x159)&x160);

	if (t39 != 269553227LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 6149535U;
	int8_t x163 = INT8_MIN;
	static uint64_t x164 = 23LLU;
	volatile uint64_t t40 = 39742LLU;

	t40 = (((x161|x162)|x163)&x164);

	if (t40 != 23LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x166 = 0U;
	uint64_t t41 = 63585LLU;

	t41 = (((x165|x166)|x167)&x168);

	if (t41 != 4752749380405LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 294204704LLU;
	int64_t x170 = 106221996008LL;
	int32_t x172 = -1;
	static uint64_t t42 = 136341181206951LLU;

	t42 = (((x169|x170)|x171)&x172);

	if (t42 != 106230921193LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static int64_t x174 = -1LL;
	static uint64_t x175 = UINT64_MAX;
	int8_t x176 = -56;
	volatile uint64_t t43 = 4441754539711017769LLU;

	t43 = (((x173|x174)|x175)&x176);

	if (t43 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	uint32_t x179 = UINT32_MAX;
	static uint32_t x180 = 57931U;

	t44 = (((x177|x178)|x179)&x180);

	if (t44 != 57931LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 492639082516LLU;
	int8_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	volatile uint64_t t45 = 1LLU;

	t45 = (((x181|x182)|x183)&x184);

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -64;
	int8_t x188 = INT8_MAX;

	t46 = (((x185|x186)|x187)&x188);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 961U;
	int32_t x190 = 30;
	int64_t x191 = 793LL;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t47 = -1324999193041252132LL;

	t47 = (((x189|x190)|x191)&x192);

	if (t47 != 991LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MAX;
	uint8_t x195 = 1U;
	volatile int32_t t48 = INT32_MAX;

	t48 = (((x193|x194)|x195)&x196);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = -1;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -8147;

	t49 = (((x197|x198)|x199)&x200);

	if (t49 != 18446744073709543469LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = 3;
	uint16_t x203 = 1U;
	volatile int32_t t50 = -787276709;

	t50 = (((x201|x202)|x203)&x204);

	if (t50 != -2147483646) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x206 = 0;
	int16_t x207 = 10;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

	t51 = (((x205|x206)|x207)&x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int64_t x210 = -10LL;
	int64_t x211 = INT64_MIN;
	uint64_t x212 = 522945LLU;

	t52 = (((x209|x210)|x211)&x212);

	if (t52 != 522945LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	volatile uint16_t x214 = 160U;
	volatile uint32_t x215 = 11745U;
	int64_t x216 = -1LL;
	int64_t t53 = -439LL;

	t53 = (((x213|x214)|x215)&x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = 0;
	int32_t x219 = 160;
	static int64_t x220 = -112337877LL;
	int64_t t54 = -816364350360428025LL;

	t54 = (((x217|x218)|x219)&x220);

	if (t54 != -112337888LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 31202926;
	volatile uint16_t x222 = 87U;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	int32_t t55 = 24530918;

	t55 = (((x221|x222)|x223)&x224);

	if (t55 != -24961) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = -12690588437469LL;
	int8_t x226 = INT8_MIN;
	static volatile int16_t x227 = 1;
	int8_t x228 = INT8_MIN;

	t56 = (((x225|x226)|x227)&x228);

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	uint64_t x230 = 6426LLU;
	uint32_t x231 = UINT32_MAX;
	volatile uint64_t t57 = 435242298926503LLU;

	t57 = (((x229|x230)|x231)&x232);

	if (t57 != 254161LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 315U;

	t58 = (((x233|x234)|x235)&x236);

	if (t58 != 24U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 17;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 62990672477083351LLU;
	static int64_t x240 = INT64_MIN;

	t59 = (((x237|x238)|x239)&x240);

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MIN;
	int32_t x243 = -241658588;
	static int64_t t60 = -31582969316LL;

	t60 = (((x241|x242)|x243)&x244);

	if (t60 != -27356LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 1234518U;
	uint8_t x247 = UINT8_MAX;
	static uint64_t x248 = UINT64_MAX;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (((x245|x246)|x247)&x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	int32_t x250 = 734;
	uint8_t x251 = UINT8_MAX;
	volatile uint8_t x252 = 109U;

	t62 = (((x249|x250)|x251)&x252);

	if (t62 != 109) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 0U;
	uint8_t x255 = UINT8_MAX;
	uint8_t x256 = UINT8_MAX;

	t63 = (((x253|x254)|x255)&x256);

	if (t63 != 255U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 1U;
	int16_t x258 = -1;
	volatile int64_t t64 = 61LL;

	t64 = (((x257|x258)|x259)&x260);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x261 = 42U;
	uint16_t x263 = 1U;
	volatile int32_t x264 = INT32_MAX;

	t65 = (((x261|x262)|x263)&x264);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -133856505LL;
	uint32_t x266 = 32U;
	volatile int64_t x267 = INT64_MIN;
	static int8_t x268 = INT8_MAX;
	volatile int64_t t66 = -337LL;

	t66 = (((x265|x266)|x267)&x268);

	if (t66 != 39LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -656550895LL;
	int32_t x271 = 7;
	int64_t x272 = INT64_MIN;

	t67 = (((x269|x270)|x271)&x272);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = 368205188U;
	static int16_t x275 = INT16_MIN;
	static int8_t x276 = -1;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x273|x274)|x275)&x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 50U;
	uint8_t x279 = 20U;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t69 = 218795LLU;

	t69 = (((x277|x278)|x279)&x280);

	if (t69 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x282 = 44U;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 41U;
	volatile int64_t t70 = -3747375192766904LL;

	t70 = (((x281|x282)|x283)&x284);

	if (t70 != 40LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 0;
	int8_t x287 = -1;
	uint64_t x288 = 213574LLU;
	uint64_t t71 = 309244359665019157LLU;

	t71 = (((x285|x286)|x287)&x288);

	if (t71 != 213574LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 184U;
	int8_t x290 = -37;
	uint8_t x291 = 10U;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t72 = 41348900U;

	t72 = (((x289|x290)|x291)&x292);

	if (t72 != 4294967291U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 9U;
	static int16_t x294 = -8172;
	int8_t x295 = -1;
	int32_t x296 = -1;

	t73 = (((x293|x294)|x295)&x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	uint32_t x298 = 661248U;
	int32_t x299 = -126;
	uint16_t x300 = 13U;
	int64_t t74 = 3609262894701LL;

	t74 = (((x297|x298)|x299)&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x303 = -9032711104LL;
	volatile uint64_t x304 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

	t75 = (((x301|x302)|x303)&x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	uint8_t x307 = 10U;
	volatile int64_t x308 = -1LL;
	volatile int64_t t76 = 5095402029LL;

	t76 = (((x305|x306)|x307)&x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x310 = 91301820LLU;
	int64_t x311 = 16719LL;
	uint64_t t77 = UINT64_MAX;

	t77 = (((x309|x310)|x311)&x312);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;
	uint32_t t78 = 72863U;

	t78 = (((x313|x314)|x315)&x316);

	if (t78 != 158U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	static uint32_t x319 = 746U;
	int8_t x320 = -1;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (((x317|x318)|x319)&x320);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 35;
	int16_t x322 = -3735;
	volatile int8_t x323 = -7;
	int16_t x324 = -1;
	volatile int32_t t80 = -8792;

	t80 = (((x321|x322)|x323)&x324);

	if (t80 != -5) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 137375041U;
	int64_t x326 = -1LL;
	uint8_t x328 = 0U;

	t81 = (((x325|x326)|x327)&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	int64_t x332 = -1LL;
	static volatile int64_t t82 = 3933425838509666LL;

	t82 = (((x329|x330)|x331)&x332);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = -1;
	int64_t x335 = 0LL;
	static uint32_t x336 = UINT32_MAX;
	volatile int64_t t83 = 31719820188585591LL;

	t83 = (((x333|x334)|x335)&x336);

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	static int8_t x338 = -15;
	static int32_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	int32_t t84 = 26;

	t84 = (((x337|x338)|x339)&x340);

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	volatile int64_t t85 = -602671893741530809LL;

	t85 = (((x341|x342)|x343)&x344);

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int8_t x346 = 0;
	static int8_t x347 = -22;
	volatile int64_t t86 = INT64_MIN;

	t86 = (((x345|x346)|x347)&x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -18546;
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = INT32_MIN;
	int32_t t87 = 16;

	t87 = (((x349|x350)|x351)&x352);

	if (t87 != 1383) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	volatile uint16_t x354 = 12U;
	uint64_t x355 = 111LLU;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t88 = 7932LLU;

	t88 = (((x353|x354)|x355)&x356);

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x359 = -2LL;
	int64_t x360 = INT64_MIN;

	t89 = (((x357|x358)|x359)&x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int16_t x363 = INT16_MAX;
	uint32_t x364 = 236146U;
	volatile uint32_t t90 = 6U;

	t90 = (((x361|x362)|x363)&x364);

	if (t90 != 236146U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 13;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = 20917LL;
	uint64_t x368 = 236584627172LLU;

	t91 = (((x365|x366)|x367)&x368);

	if (t91 != 16868LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	static uint16_t x372 = 1618U;
	uint64_t t92 = 430281452LLU;

	t92 = (((x369|x370)|x371)&x372);

	if (t92 != 1618LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -509120;
	volatile int32_t x375 = -1;
	uint8_t x376 = 0U;
	uint32_t t93 = 430U;

	t93 = (((x373|x374)|x375)&x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -937116;
	uint8_t x379 = 8U;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = -129658839;

	t94 = (((x377|x378)|x379)&x380);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = UINT32_MAX;
	int8_t x384 = 43;
	volatile uint64_t t95 = 14LLU;

	t95 = (((x381|x382)|x383)&x384);

	if (t95 != 43LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 4026U;
	uint8_t x386 = UINT8_MAX;
	volatile int64_t x388 = INT64_MIN;
	static int64_t t96 = -3764159983812LL;

	t96 = (((x385|x386)|x387)&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	uint64_t x391 = 24LLU;

	t97 = (((x389|x390)|x391)&x392);

	if (t97 != 11472LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	int64_t t98 = 15LL;

	t98 = (((x393|x394)|x395)&x396);

	if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MIN;
	int8_t x400 = 1;

	t99 = (((x397|x398)|x399)&x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

