#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x1 = UINT8_MAX;
volatile int16_t x11 = INT16_MIN;
volatile int32_t t3 = -78158107;
int16_t x23 = INT16_MIN;
uint32_t x26 = UINT32_MAX;
volatile uint64_t t5 = 410535412783LLU;
int32_t x32 = INT32_MAX;
int64_t x35 = INT64_MAX;
volatile uint8_t x53 = UINT8_MAX;
static volatile uint16_t x60 = UINT16_MAX;
volatile int32_t t12 = 195587;
int8_t x66 = -1;
int64_t x71 = INT64_MIN;
volatile uint16_t x73 = 136U;
int64_t x74 = 95LL;
volatile uint8_t x79 = 13U;
static uint32_t x80 = 34903431U;
uint64_t x83 = 214164809801608743LLU;
volatile uint64_t t18 = 879949674LLU;
uint8_t x85 = 16U;
int8_t x88 = INT8_MIN;
uint8_t x91 = 127U;
uint8_t x92 = UINT8_MAX;
int64_t x94 = INT64_MIN;
int16_t x101 = INT16_MAX;
int64_t x106 = INT64_MIN;
int8_t x122 = 24;
int8_t x125 = INT8_MIN;
uint16_t x135 = 7U;
int32_t x141 = -1;
int32_t t31 = -1;
int32_t x155 = 666667247;
static int8_t x161 = INT8_MAX;
int32_t x165 = -1;
volatile int32_t x168 = -1;
int64_t x175 = INT64_MIN;
static int8_t x180 = -1;
int16_t x182 = -1;
uint64_t x198 = UINT64_MAX;
volatile uint16_t x208 = UINT16_MAX;
static int64_t t45 = -1751640677LL;
static int64_t x211 = INT64_MIN;
volatile int16_t x212 = 1;
uint32_t x213 = 10103632U;
int8_t x215 = -2;
int32_t x217 = INT32_MIN;
int8_t x218 = -1;
static uint32_t x229 = 22346484U;
uint16_t x235 = 26U;
uint16_t x238 = 296U;
int32_t x239 = 2096730;
static int32_t x251 = -105468;
int64_t x253 = INT64_MAX;
int64_t x255 = 180568142LL;
volatile int64_t x257 = INT64_MIN;
int16_t x261 = -1;
int16_t x262 = 127;
int8_t x277 = 0;
int32_t x278 = -1;
int16_t x288 = -1;
int16_t x291 = INT16_MAX;
int8_t x292 = INT8_MIN;
volatile uint64_t x294 = 1799229981LLU;
static int8_t x296 = -1;
static int32_t x298 = INT32_MIN;
int64_t x311 = -1LL;
uint64_t x316 = UINT64_MAX;
int64_t x322 = 268596734578509LL;
static int16_t x323 = INT16_MIN;
static uint16_t x325 = 8097U;
int64_t t77 = 2336048625LL;
static int16_t x344 = -31;
volatile int32_t x345 = INT32_MAX;
static int8_t x346 = INT8_MAX;
volatile int64_t x352 = 19664243450580LL;
uint8_t x353 = UINT8_MAX;
volatile uint32_t t82 = 4697742U;
int8_t x365 = INT8_MAX;
int32_t x371 = -1;
static volatile int64_t x374 = INT64_MIN;
volatile int16_t x376 = -7111;
volatile uint8_t x385 = UINT8_MAX;
volatile uint32_t x387 = 809787U;
uint8_t x390 = UINT8_MAX;
int16_t x399 = INT16_MAX;
uint64_t t92 = 4364639969LLU;
volatile uint16_t x412 = 21923U;
static volatile int64_t x414 = -1LL;
uint16_t x424 = 3512U;
int32_t t96 = 202;
volatile int64_t x427 = -1LL;
uint64_t x428 = 1LLU;
int32_t x433 = INT32_MAX;


void f0(void) {
	int8_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	static volatile uint32_t t0 = 264U;

	t0 = (((x1==x2)%x3)-x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	int32_t x10 = -1;
	static int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = 9404543;

	t1 = (((x9==x10)%x11)-x12);

	if (t1 != 32769) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MAX;
	uint16_t x15 = 3U;
	static volatile int32_t x16 = -46;
	volatile int32_t t2 = 6;

	t2 = (((x13==x14)%x15)-x16);

	if (t2 != 46) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MAX;
	int64_t x18 = INT64_MAX;
	volatile int16_t x19 = -177;
	int8_t x20 = INT8_MIN;

	t3 = (((x17==x18)%x19)-x20);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 2270LLU;
	uint16_t x22 = 69U;
	static uint16_t x24 = 18385U;
	volatile int32_t t4 = 12785142;

	t4 = (((x21==x22)%x23)-x24);

	if (t4 != -18385) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x25 = 7U;
	uint64_t x27 = 2352471651LLU;
	volatile int16_t x28 = 0;

	t5 = (((x25==x26)%x27)-x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -246920782516539612LL;
	volatile int8_t x30 = INT8_MIN;
	static volatile uint8_t x31 = 2U;
	static volatile int32_t t6 = -2516;

	t6 = (((x29==x30)%x31)-x32);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static int32_t x34 = INT32_MIN;
	volatile int32_t x36 = INT32_MIN;
	int64_t t7 = -247699858LL;

	t7 = (((x33==x34)%x35)-x36);

	if (t7 != 2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 11388U;
	uint64_t x38 = 406021246LLU;
	static uint64_t x39 = UINT64_MAX;
	int32_t x40 = 31432190;
	volatile uint64_t t8 = 8031594LLU;

	t8 = (((x37==x38)%x39)-x40);

	if (t8 != 18446744073678119426LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	uint64_t x42 = 634756LLU;
	int16_t x43 = 1;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -9144745;

	t9 = (((x41==x42)%x43)-x44);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t10 = -808675868016880LL;

	t10 = (((x49==x50)%x51)-x52);

	if (t10 != -255LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 0U;
	static volatile int32_t t11 = 118;

	t11 = (((x53==x54)%x55)-x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = -20;
	int32_t x58 = -27591197;
	int16_t x59 = INT16_MIN;

	t12 = (((x57==x58)%x59)-x60);

	if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	uint16_t x62 = UINT16_MAX;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t13 = -2280;

	t13 = (((x61==x62)%x63)-x64);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = -52;
	volatile int64_t x67 = 27609812196LL;
	uint16_t x68 = 9U;
	volatile int64_t t14 = 18113563066158409LL;

	t14 = (((x65==x66)%x67)-x68);

	if (t14 != -9LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x69 = INT32_MIN;
	volatile int8_t x70 = INT8_MIN;
	static int16_t x72 = 0;
	int64_t t15 = 1LL;

	t15 = (((x69==x70)%x71)-x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x75 = 3726;
	uint32_t x76 = 138U;
	uint32_t t16 = 175U;

	t16 = (((x73==x74)%x75)-x76);

	if (t16 != 4294967158U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x77 = UINT64_MAX;
	static int16_t x78 = INT16_MIN;
	uint32_t t17 = 77U;

	t17 = (((x77==x78)%x79)-x80);

	if (t17 != 4260063865U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x82 = -27;
	static int64_t x84 = INT64_MIN;

	t18 = (((x81==x82)%x83)-x84);

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x86 = 0U;
	int16_t x87 = INT16_MIN;
	int32_t t19 = 2;

	t19 = (((x85==x86)%x87)-x88);

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = 1;
	static uint16_t x90 = 0U;
	volatile int32_t t20 = -121326;

	t20 = (((x89==x90)%x91)-x92);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -4746;
	int32_t x95 = -1;
	int64_t x96 = 100756360733617LL;
	int64_t t21 = 1059386401LL;

	t21 = (((x93==x94)%x95)-x96);

	if (t21 != -100756360733617LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t22 = 292581;

	t22 = (((x97==x98)%x99)-x100);

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x102 = 2U;
	uint8_t x103 = 117U;
	int16_t x104 = INT16_MIN;
	int32_t t23 = 22;

	t23 = (((x101==x102)%x103)-x104);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = UINT64_MAX;
	uint64_t x107 = 3132211967994LLU;
	volatile uint8_t x108 = 3U;
	uint64_t t24 = 2137399429937640LLU;

	t24 = (((x105==x106)%x107)-x108);

	if (t24 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 49U;
	uint8_t x110 = UINT8_MAX;
	int32_t x111 = INT32_MIN;
	volatile int64_t x112 = 372272932697030LL;
	int64_t t25 = -1175738048529LL;

	t25 = (((x109==x110)%x111)-x112);

	if (t25 != -372272932697030LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 2916526834866668LLU;
	int8_t x114 = 1;
	static uint32_t x115 = UINT32_MAX;
	int32_t x116 = 550683154;
	volatile uint32_t t26 = 85463U;

	t26 = (((x113==x114)%x115)-x116);

	if (t26 != 3744284142U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	int8_t x123 = INT8_MIN;
	int64_t x124 = 1285210510120362702LL;
	volatile int64_t t27 = 570938810LL;

	t27 = (((x121==x122)%x123)-x124);

	if (t27 != -1285210510120362702LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	static int16_t x128 = -1;
	volatile int32_t t28 = -72190;

	t28 = (((x125==x126)%x127)-x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	int32_t t29 = 3937229;

	t29 = (((x133==x134)%x135)-x136);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MAX;
	static volatile int8_t x140 = INT8_MIN;
	volatile int64_t t30 = 1LL;

	t30 = (((x137==x138)%x139)-x140);

	if (t30 != 128LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x142 = -1LL;
	int32_t x143 = INT32_MIN;
	int8_t x144 = 1;

	t31 = (((x141==x142)%x143)-x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -1;
	int16_t x146 = -153;
	volatile uint16_t x147 = UINT16_MAX;
	static uint8_t x148 = 13U;
	volatile int32_t t32 = -466945165;

	t32 = (((x145==x146)%x147)-x148);

	if (t32 != -13) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = 15;
	uint32_t x150 = 220623U;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MAX;
	volatile int64_t t33 = -30668652384881LL;

	t33 = (((x149==x150)%x151)-x152);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 852799U;
	static uint16_t x154 = 621U;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t34 = -12;

	t34 = (((x153==x154)%x155)-x156);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 4400617U;
	uint32_t x158 = UINT32_MAX;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 6342U;
	volatile int32_t t35 = -224;

	t35 = (((x157==x158)%x159)-x160);

	if (t35 != -6342) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = -1;
	int16_t x163 = -1;
	static uint16_t x164 = UINT16_MAX;
	int32_t t36 = -50639767;

	t36 = (((x161==x162)%x163)-x164);

	if (t36 != -65535) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MAX;
	int32_t t37 = 0;

	t37 = (((x165==x166)%x167)-x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MAX;
	static int32_t x170 = -1;
	int8_t x171 = INT8_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t38 = 26U;

	t38 = (((x169==x170)%x171)-x172);

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	volatile int8_t x174 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile int64_t t39 = 149LL;

	t39 = (((x173==x174)%x175)-x176);

	if (t39 != -4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = -1;
	volatile int8_t x178 = -1;
	int64_t x179 = INT64_MAX;
	volatile int64_t t40 = -34160468321LL;

	t40 = (((x177==x178)%x179)-x180);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 33U;
	volatile int64_t x183 = INT64_MIN;
	uint8_t x184 = UINT8_MAX;
	int64_t t41 = -49LL;

	t41 = (((x181==x182)%x183)-x184);

	if (t41 != -255LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = 8078U;
	static int8_t x190 = INT8_MIN;
	int32_t x191 = -15;
	int16_t x192 = INT16_MAX;
	volatile int32_t t42 = 1815145;

	t42 = (((x189==x190)%x191)-x192);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = -1;
	static int16_t x199 = 1;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t43 = 134;

	t43 = (((x197==x198)%x199)-x200);

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	volatile int16_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;
	volatile int32_t t44 = -16;

	t44 = (((x201==x202)%x203)-x204);

	if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = 9;
	int8_t x206 = -1;
	int64_t x207 = INT64_MAX;

	t45 = (((x205==x206)%x207)-x208);

	if (t45 != -65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x210 = 1U;
	volatile int64_t t46 = -3874443LL;

	t46 = (((x209==x210)%x211)-x212);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x214 = -1;
	static int8_t x216 = -60;
	int32_t t47 = -306;

	t47 = (((x213==x214)%x215)-x216);

	if (t47 != 60) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t48 = 54U;

	t48 = (((x217==x218)%x219)-x220);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = INT32_MIN;
	static volatile int32_t x222 = INT32_MIN;
	int8_t x223 = -1;
	uint16_t x224 = 5457U;
	volatile int32_t t49 = -6148026;

	t49 = (((x221==x222)%x223)-x224);

	if (t49 != -5457) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = INT64_MAX;
	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	volatile int64_t x228 = -1LL;
	volatile int64_t t50 = 459156005LL;

	t50 = (((x225==x226)%x227)-x228);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x230 = 5U;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = 44513LLU;
	volatile uint64_t t51 = 2219468514260990107LLU;

	t51 = (((x229==x230)%x231)-x232);

	if (t51 != 18446744073709507103LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = -1;
	static volatile int64_t x236 = 1947LL;
	static volatile int64_t t52 = 17309LL;

	t52 = (((x233==x234)%x235)-x236);

	if (t52 != -1946LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = INT8_MIN;
	uint32_t x240 = 13445U;
	volatile uint32_t t53 = 25812137U;

	t53 = (((x237==x238)%x239)-x240);

	if (t53 != 4294953851U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = -1;
	int16_t x244 = INT16_MAX;
	volatile int32_t t54 = 2815;

	t54 = (((x241==x242)%x243)-x244);

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -213;
	int8_t x246 = INT8_MAX;
	uint64_t x247 = UINT64_MAX;
	static int16_t x248 = INT16_MAX;
	volatile uint64_t t55 = 101348863LLU;

	t55 = (((x245==x246)%x247)-x248);

	if (t55 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = -1;
	uint16_t x250 = 924U;
	int32_t x252 = 199;
	volatile int32_t t56 = 0;

	t56 = (((x249==x250)%x251)-x252);

	if (t56 != -199) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x254 = 0;
	int32_t x256 = 45275;
	volatile int64_t t57 = 16172LL;

	t57 = (((x253==x254)%x255)-x256);

	if (t57 != -45275LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x258 = -1LL;
	int64_t x259 = INT64_MIN;
	int32_t x260 = 80327;
	int64_t t58 = -1LL;

	t58 = (((x257==x258)%x259)-x260);

	if (t58 != -80327LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x263 = -1;
	int64_t x264 = -1LL;
	int64_t t59 = -108755198441455411LL;

	t59 = (((x261==x262)%x263)-x264);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -651445728;
	uint8_t x266 = 14U;
	volatile int32_t x267 = 45685;
	int16_t x268 = INT16_MIN;
	int32_t t60 = -77;

	t60 = (((x265==x266)%x267)-x268);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x269 = 3;
	static uint32_t x270 = 27153U;
	static volatile int16_t x271 = INT16_MIN;
	static int8_t x272 = -9;
	static int32_t t61 = -20;

	t61 = (((x269==x270)%x271)-x272);

	if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = -1;
	int64_t x274 = -1LL;
	int8_t x275 = INT8_MAX;
	int16_t x276 = INT16_MIN;
	int32_t t62 = -239682;

	t62 = (((x273==x274)%x275)-x276);

	if (t62 != 32769) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x279 = 1U;
	int16_t x280 = -1;
	int32_t t63 = 0;

	t63 = (((x277==x278)%x279)-x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MAX;
	static int32_t x282 = INT32_MAX;
	volatile int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MIN;
	volatile int32_t t64 = 151349;

	t64 = (((x281==x282)%x283)-x284);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x285 = -1;
	uint16_t x286 = 964U;
	volatile uint16_t x287 = 788U;
	int32_t t65 = 0;

	t65 = (((x285==x286)%x287)-x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = 1036527912U;
	int64_t x290 = INT64_MIN;
	static int32_t t66 = 0;

	t66 = (((x289==x290)%x291)-x292);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = -19;
	int16_t x295 = -1;
	int32_t t67 = -3;

	t67 = (((x293==x294)%x295)-x296);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t68 = 220;

	t68 = (((x297==x298)%x299)-x300);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	uint32_t x302 = 10U;
	static volatile uint16_t x303 = UINT16_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t69 = -276;

	t69 = (((x301==x302)%x303)-x304);

	if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = 448678004LL;
	static int32_t x307 = INT32_MAX;
	static uint8_t x308 = 6U;
	int32_t t70 = 153477;

	t70 = (((x305==x306)%x307)-x308);

	if (t70 != -6) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -188312LL;
	volatile uint32_t x310 = UINT32_MAX;
	static volatile int32_t x312 = INT32_MAX;
	int64_t t71 = 24034156673899987LL;

	t71 = (((x309==x310)%x311)-x312);

	if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x313 = 2U;
	int64_t x314 = -555350691LL;
	uint8_t x315 = UINT8_MAX;
	uint64_t t72 = 2894736LLU;

	t72 = (((x313==x314)%x315)-x316);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x317 = -1LL;
	uint16_t x318 = 1002U;
	int64_t x319 = INT64_MIN;
	int32_t x320 = 61640;
	volatile int64_t t73 = 1516LL;

	t73 = (((x317==x318)%x319)-x320);

	if (t73 != -61640LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x321 = 0;
	int8_t x324 = -1;
	static int32_t t74 = -1587943;

	t74 = (((x321==x322)%x323)-x324);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x326 = UINT8_MAX;
	volatile int32_t x327 = -1;
	uint16_t x328 = 10U;
	volatile int32_t t75 = 970649;

	t75 = (((x325==x326)%x327)-x328);

	if (t75 != -10) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = 6;
	int8_t x334 = INT8_MIN;
	volatile int16_t x335 = -1;
	static int32_t x336 = -1;
	static int32_t t76 = 1515;

	t76 = (((x333==x334)%x335)-x336);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = 0;
	int64_t x339 = -65699706303343LL;
	int16_t x340 = -1;

	t77 = (((x337==x338)%x339)-x340);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	volatile int8_t x342 = INT8_MAX;
	volatile int16_t x343 = 160;
	volatile int32_t t78 = -16503730;

	t78 = (((x341==x342)%x343)-x344);

	if (t78 != 31) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x347 = 64979U;
	static int64_t x348 = 1LL;
	int64_t t79 = -34LL;

	t79 = (((x345==x346)%x347)-x348);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = 12U;
	static int32_t x351 = -150718;
	int64_t t80 = 15178386LL;

	t80 = (((x349==x350)%x351)-x352);

	if (t80 != -19664243450580LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x354 = -4;
	volatile uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile uint32_t t81 = 36416U;

	t81 = (((x353==x354)%x355)-x356);

	if (t81 != 32768U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x357 = -1LL;
	uint16_t x358 = 0U;
	volatile uint32_t x359 = 40024U;
	static int16_t x360 = -3;

	t82 = (((x357==x358)%x359)-x360);

	if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x366 = -62;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 33U;
	volatile int32_t t83 = -36136961;

	t83 = (((x365==x366)%x367)-x368);

	if (t83 != -33) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x369 = 8U;
	static int64_t x370 = INT64_MIN;
	volatile int8_t x372 = -1;
	int32_t t84 = -43549821;

	t84 = (((x369==x370)%x371)-x372);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = 0U;
	static int64_t x375 = INT64_MAX;
	int64_t t85 = 7LL;

	t85 = (((x373==x374)%x375)-x376);

	if (t85 != 7111LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x377 = 121U;
	static int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	volatile int64_t t86 = -466387038732559784LL;

	t86 = (((x377==x378)%x379)-x380);

	if (t86 != 32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x381 = INT16_MIN;
	int32_t x382 = -1358063;
	int64_t x383 = -1LL;
	int64_t x384 = -1LL;
	volatile int64_t t87 = 880693879040549LL;

	t87 = (((x381==x382)%x383)-x384);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x386 = 6836;
	static volatile uint8_t x388 = 4U;
	uint32_t t88 = 28U;

	t88 = (((x385==x386)%x387)-x388);

	if (t88 != 4294967292U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -1;
	int32_t x391 = -1;
	static volatile int32_t x392 = INT32_MAX;
	int32_t t89 = -73;

	t89 = (((x389==x390)%x391)-x392);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x393 = INT32_MIN;
	int64_t x394 = 1111260904247693451LL;
	uint16_t x395 = 39U;
	volatile int64_t x396 = -167LL;
	volatile int64_t t90 = -1744380734169911421LL;

	t90 = (((x393==x394)%x395)-x396);

	if (t90 != 167LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -64LL;
	static int64_t x398 = INT64_MAX;
	static volatile int8_t x400 = -13;
	int32_t t91 = -3;

	t91 = (((x397==x398)%x399)-x400);

	if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x401 = 27094U;
	int64_t x402 = -64748825LL;
	static uint64_t x403 = 8912345650337099231LLU;
	static int32_t x404 = INT32_MIN;

	t92 = (((x401==x402)%x403)-x404);

	if (t92 != 2147483648LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = INT64_MIN;
	volatile uint32_t x410 = 221U;
	volatile int32_t x411 = INT32_MIN;
	volatile int32_t t93 = 0;

	t93 = (((x409==x410)%x411)-x412);

	if (t93 != -21923) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MAX;
	uint64_t x415 = 30649031482259373LLU;
	int64_t x416 = INT64_MAX;
	uint64_t t94 = 7024LLU;

	t94 = (((x413==x414)%x415)-x416);

	if (t94 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = INT8_MIN;
	int16_t x419 = -1;
	uint32_t x420 = 15U;
	volatile uint32_t t95 = 2U;

	t95 = (((x417==x418)%x419)-x420);

	if (t95 != 4294967281U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x421 = UINT64_MAX;
	int8_t x422 = INT8_MAX;
	int16_t x423 = INT16_MAX;

	t96 = (((x421==x422)%x423)-x424);

	if (t96 != -3512) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x425==x426)%x427)-x428);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = INT16_MIN;
	volatile int64_t x430 = -234980602658LL;
	int32_t x431 = -2;
	int8_t x432 = -3;
	static int32_t t98 = -207;

	t98 = (((x429==x430)%x431)-x432);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x434 = 0;
	static int8_t x435 = -1;
	volatile int8_t x436 = -13;
	volatile int32_t t99 = -2;

	t99 = (((x433==x434)%x435)-x436);

	if (t99 != 13) { NG(); } else { ; }
	
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

