#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = 198975223474703791LL;
static int16_t x9 = INT16_MIN;
int64_t x12 = 58723902LL;
int64_t t5 = -24624369395LL;
static uint8_t x32 = 2U;
int32_t t7 = -7642;
uint64_t x35 = 461LLU;
uint32_t t10 = 1861687091U;
volatile int16_t x45 = INT16_MIN;
int8_t x47 = INT8_MIN;
uint64_t x54 = 264638974LLU;
uint32_t x72 = UINT32_MAX;
int16_t x74 = -1;
uint16_t x76 = 3U;
volatile int32_t t17 = -823;
int64_t x82 = 25368962753LL;
volatile int64_t t19 = -876LL;
volatile uint32_t x91 = 475448298U;
static volatile uint32_t t21 = 24U;
int8_t x98 = 3;
int16_t x99 = -1004;
int8_t x104 = -1;
volatile int8_t x106 = INT8_MAX;
volatile int64_t x108 = INT64_MAX;
uint64_t x113 = 4711112606379LLU;
static int64_t x120 = -8141032588476729LL;
volatile int8_t x121 = INT8_MIN;
int16_t x122 = INT16_MAX;
static int16_t x124 = INT16_MAX;
int8_t x129 = -1;
static uint32_t x136 = UINT32_MAX;
volatile int64_t t30 = -1091857902921851LL;
volatile int64_t x137 = -111042762138648LL;
uint32_t x139 = 0U;
static int32_t x142 = 464977;
int64_t x147 = 40089292791666LL;
uint16_t x151 = UINT16_MAX;
int8_t x158 = 1;
int8_t x165 = INT8_MIN;
volatile int16_t x182 = INT16_MAX;
int32_t x188 = INT32_MIN;
static int64_t x202 = -1LL;
int64_t t46 = 354433244008427117LL;
int8_t x205 = INT8_MIN;
int32_t x207 = INT32_MAX;
int32_t x208 = INT32_MAX;
volatile uint32_t t47 = 11U;
volatile int64_t x213 = INT64_MIN;
volatile uint64_t x215 = 4505524869LLU;
int32_t t50 = 147481289;
static int16_t x227 = INT16_MIN;
static volatile uint8_t x229 = 0U;
uint8_t x240 = UINT8_MAX;
static uint16_t x242 = 1379U;
int32_t x243 = 55860588;
uint64_t t56 = 1314513488LLU;
int64_t x247 = INT64_MIN;
uint64_t x254 = 50317189LLU;
uint8_t x257 = 40U;
volatile uint16_t x258 = UINT16_MAX;
uint64_t x260 = 954LLU;
volatile uint64_t t59 = 908906LLU;
uint8_t x261 = 17U;
int8_t x264 = -1;
uint32_t x272 = UINT32_MAX;
static int32_t x273 = -1;
int8_t x285 = INT8_MIN;
int8_t x286 = -5;
static int16_t x292 = INT16_MIN;
volatile int32_t t67 = 148547514;
int32_t x293 = 158619710;
static int64_t x297 = 3949LL;
int32_t x300 = -1;
int64_t t69 = 1401LL;
volatile int32_t x310 = INT32_MIN;
static uint64_t x313 = UINT64_MAX;
volatile int64_t x319 = 2117258629813586LL;
volatile uint32_t x326 = 122836370U;
int64_t t77 = -1159118854LL;
volatile int8_t x340 = -1;
static int8_t x341 = -1;
uint64_t x346 = UINT64_MAX;
static volatile uint64_t x348 = 4041892465LLU;
volatile int8_t x356 = 0;
volatile uint8_t x357 = 1U;
volatile int32_t x359 = INT32_MAX;
int16_t x360 = -163;
volatile int32_t t83 = -207;
uint32_t x361 = 294U;
uint8_t x363 = 6U;
volatile uint16_t x369 = 8U;
volatile int32_t t85 = -14596;
static int16_t x382 = INT16_MIN;
uint64_t t88 = 16667154534010LLU;
volatile int16_t x393 = INT16_MIN;
volatile int64_t t90 = -3141687LL;
int32_t x402 = -1;
volatile int16_t x406 = -1;
volatile int32_t t95 = -693;
uint16_t x423 = UINT16_MAX;
int32_t x426 = INT32_MIN;
volatile int64_t x436 = -4633759934020123LL;


void f0(void) {
	volatile uint32_t x1 = 2943282U;
	int32_t x2 = -1;
	int16_t x3 = -1;
	volatile int64_t t0 = 695276173244985LL;

	t0 = ((x1^(x2-x3))^x4);

	if (t0 != 198975223477609629LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint8_t x6 = 22U;
	int64_t x7 = -23829169283LL;
	int32_t x8 = INT32_MAX;
	int64_t t1 = -177375LL;

	t1 = ((x5^(x6-x7))^x8);

	if (t1 != -25562954599LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	static int64_t t2 = -56LL;

	t2 = ((x9^(x10-x11))^x12);

	if (t2 != 2088701502LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	uint16_t x14 = 3608U;
	static uint64_t x15 = UINT64_MAX;
	uint16_t x16 = 25U;
	uint64_t t3 = 27643LLU;

	t3 = ((x13^(x14-x15))^x16);

	if (t3 != 3587LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 316U;
	static uint64_t x18 = 982414LLU;
	uint64_t x19 = UINT64_MAX;
	static volatile uint64_t x20 = 3207303623874561235LLU;
	static volatile uint64_t t4 = 1LLU;

	t4 = ((x17^(x18-x19))^x20);

	if (t4 != 3207303623873869920LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static uint8_t x22 = 5U;
	uint32_t x23 = 461333U;
	int64_t x24 = -1LL;

	t5 = ((x21^(x22-x23))^x24);

	if (t5 != 9223372032560269839LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 6519;
	int8_t x26 = -1;
	int32_t x27 = INT32_MAX;
	uint16_t x28 = 820U;
	volatile int32_t t6 = -435986712;

	t6 = ((x25^(x26-x27))^x28);

	if (t6 != -2147476925) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MIN;
	static int16_t x31 = INT16_MIN;

	t7 = ((x29^(x30-x31))^x32);

	if (t7 != 32770) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 11901268282LL;
	int32_t x34 = 3;
	int32_t x36 = 22564;
	static uint64_t t8 = 4171060484001LLU;

	t8 = ((x33^(x34-x35))^x36);

	if (t8 != 18446744061808301864LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int64_t x38 = -215090221599837LL;
	volatile uint16_t x39 = 6123U;
	uint16_t x40 = 1U;
	int64_t t9 = -14901452301892501LL;

	t9 = ((x37^(x38-x39))^x40);

	if (t9 != 215090221587385LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = 12;
	static uint32_t x43 = 59115U;
	uint32_t x44 = 1426U;

	t10 = ((x41^(x42-x43))^x44);

	if (t10 != 58163U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 0LL;
	static int64_t x48 = -111LL;
	volatile int64_t t11 = -21934LL;

	t11 = ((x45^(x46-x47))^x48);

	if (t11 != 32529LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = -16005;
	int32_t x50 = INT32_MAX;
	volatile int64_t x51 = -2LL;
	static volatile int16_t x52 = INT16_MIN;
	static int64_t t12 = 698LL;

	t12 = ((x49^(x50-x51))^x52);

	if (t12 != 2147500410LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int32_t x55 = INT32_MIN;
	static volatile int16_t x56 = INT16_MAX;
	uint64_t t13 = 422217588003LLU;

	t13 = ((x53^(x54-x55))^x56);

	if (t13 != 18446744071297405438LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -4876358;
	static volatile uint64_t x58 = UINT64_MAX;
	int16_t x59 = -4;
	int16_t x60 = INT16_MIN;
	volatile uint64_t t14 = 26005970688LLU;

	t14 = ((x57^(x58-x59))^x60);

	if (t14 != 4855737LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	volatile int32_t x62 = -353104;
	uint64_t x63 = 62672880055855LLU;
	uint16_t x64 = 240U;
	volatile uint64_t t15 = 1134LLU;

	t15 = ((x61^(x62-x63))^x64);

	if (t15 != 62673592641137LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MAX;
	int64_t x70 = -1LL;
	static volatile uint8_t x71 = 0U;
	volatile int64_t t16 = 1876415LL;

	t16 = ((x69^(x70-x71))^x72);

	if (t16 != -4294967169LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = 13;
	uint8_t x75 = 23U;

	t17 = ((x73^(x74-x75))^x76);

	if (t17 != -26) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = 486702387235LLU;
	volatile int16_t x80 = INT16_MIN;
	volatile uint64_t t18 = 26404225152LLU;

	t18 = ((x77^(x78-x79))^x80);

	if (t18 != 9223371550747095005LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 78387665LL;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = -1LL;

	t19 = ((x81^(x82-x83))^x84);

	if (t19 != -25446300692LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	volatile int16_t x86 = -1;
	int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MAX;
	static int32_t t20 = -26;

	t20 = ((x85^(x86-x87))^x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = 55;
	static uint16_t x90 = UINT16_MAX;
	int16_t x92 = -1;

	t21 = ((x89^(x90-x91))^x92);

	if (t21 != 475382749U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x97 = 740781691LLU;
	uint8_t x100 = 26U;
	volatile uint64_t t22 = 942LLU;

	t22 = ((x97^(x98-x99))^x100);

	if (t22 != 740781454LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 80415U;
	int32_t x102 = -136049551;
	int16_t x103 = INT16_MAX;
	volatile uint32_t t23 = 211U;

	t23 = ((x101^(x102-x103))^x104);

	if (t23 != 136137106U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	int64_t t24 = 953672578224546LL;

	t24 = ((x105^(x106-x107))^x108);

	if (t24 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	uint16_t x111 = 12928U;
	int8_t x112 = INT8_MIN;
	int32_t t25 = -1920212;

	t25 = ((x109^(x110-x111))^x112);

	if (t25 != 52480) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x114 = INT8_MIN;
	int8_t x115 = 2;
	volatile uint64_t x116 = 4290070258320858LLU;
	uint64_t t26 = 794262067411089158LLU;

	t26 = ((x113^(x114-x115))^x116);

	if (t26 != 18442458713349519375LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 357488185;
	int16_t x118 = 13229;
	static int32_t x119 = INT32_MAX;
	volatile int64_t t27 = 1747361LL;

	t27 = ((x117^(x118-x119))^x120);

	if (t27 != 8141031878662992LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x123 = 246296U;
	uint32_t t28 = 3515232U;

	t28 = ((x121^(x122-x123))^x124);

	if (t28 != 212376U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 121355U;
	static volatile uint32_t t29 = 36386570U;

	t29 = ((x129^(x130-x131))^x132);

	if (t29 != 4294859275U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 256740U;
	int32_t x134 = INT32_MIN;
	static int64_t x135 = INT64_MIN;

	t30 = ((x133^(x134-x135))^x136);

	if (t30 != 9223372034707035419LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x138 = 1U;
	int16_t x140 = INT16_MAX;
	static volatile int64_t t31 = -6LL;

	t31 = ((x137^(x138-x139))^x140);

	if (t31 != -111042762120170LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -12;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = -1120LL;
	volatile uint64_t t32 = 34379847117LLU;

	t32 = ((x141^(x142-x143))^x144);

	if (t32 != 465926LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = INT64_MIN;
	int8_t x146 = -1;
	int16_t x148 = INT16_MAX;
	volatile int64_t t33 = 24497457584621733LL;

	t33 = ((x145^(x146-x147))^x148);

	if (t33 != 9223331947562000242LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	uint16_t x152 = UINT16_MAX;
	static volatile int64_t t34 = -2061790820977LL;

	t34 = ((x149^(x150-x151))^x152);

	if (t34 != 130945LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -1;
	volatile int32_t x154 = -1;
	int64_t x155 = -40LL;
	static uint8_t x156 = 14U;
	int64_t t35 = -3083337LL;

	t35 = ((x153^(x154-x155))^x156);

	if (t35 != -42LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = 149868492351893314LLU;
	volatile uint64_t t36 = 1050137999148LLU;

	t36 = ((x157^(x158-x159))^x160);

	if (t36 != 18296875581357649731LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = 2U;
	int32_t x163 = -1;
	uint64_t x164 = 191522201665372357LLU;
	volatile uint64_t t37 = 41827271441LLU;

	t37 = ((x161^(x162-x163))^x164);

	if (t37 != 18255221872044146886LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x166 = -1;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 12843U;
	int32_t t38 = 485;

	t38 = ((x165^(x166-x167))^x168);

	if (t38 != -2147470764) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x169 = UINT8_MAX;
	uint8_t x170 = 1U;
	volatile uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t39 = 32325;

	t39 = ((x169^(x170-x171))^x172);

	if (t39 != 65405) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 22U;
	static int8_t x175 = -1;
	static int32_t x176 = -3859740;
	int64_t t40 = -55257102LL;

	t40 = ((x173^(x174-x175))^x176);

	if (t40 != 9223372036850916083LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	static uint32_t x179 = 0U;
	int32_t x180 = INT32_MIN;
	uint32_t t41 = 3182551U;

	t41 = ((x177^(x178-x179))^x180);

	if (t41 != 2147451007U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 3651U;
	uint64_t x183 = 37780747LLU;
	uint64_t x184 = UINT64_MAX;
	static uint64_t t42 = 452LLU;

	t42 = ((x181^(x182-x183))^x184);

	if (t42 != 37745480LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x186 = 14407084LL;
	uint16_t x187 = 1657U;
	int64_t t43 = -705085712410005077LL;

	t43 = ((x185^(x186-x187))^x188);

	if (t43 != -2133118772LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t44 = 0LL;

	t44 = ((x189^(x190-x191))^x192);

	if (t44 != 9223372034707325183LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 122395393U;
	uint64_t x194 = 1043042375LLU;
	volatile int8_t x195 = INT8_MAX;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t45 = 3128LLU;

	t45 = ((x193^(x194-x195))^x196);

	if (t45 != 9223372037817373897LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MAX;
	int64_t x203 = INT64_MIN;
	int8_t x204 = -1;

	t46 = ((x201^(x202-x203))^x204);

	if (t46 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x206 = 18U;

	t47 = ((x205^(x206-x207))^x208);

	if (t47 != 108U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 0U;
	static int16_t x210 = INT16_MIN;
	volatile uint8_t x211 = 59U;
	int16_t x212 = -274;
	volatile int32_t t48 = 108;

	t48 = ((x209^(x210-x211))^x212);

	if (t48 != 33067) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = INT64_MIN;
	int64_t x216 = 10890927LL;
	static uint64_t t49 = 144597067LLU;

	t49 = ((x213^(x214-x215))^x216);

	if (t49 != 18446744069210442708LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = -1;
	volatile int8_t x218 = INT8_MIN;
	volatile int32_t x219 = 483200211;
	int32_t x220 = -1;

	t50 = ((x217^(x218-x219))^x220);

	if (t50 != -483200339) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = -1;
	uint64_t x222 = 10570708761095LLU;
	int32_t x223 = -3;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t51 = 15651915464LLU;

	t51 = ((x221^(x222-x223))^x224);

	if (t51 != 10570708761205LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = 15U;
	int8_t x226 = INT8_MIN;
	static volatile uint16_t x228 = 13156U;
	static int32_t t52 = -246199961;

	t52 = ((x225^(x226-x227))^x228);

	if (t52 != 19691) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x230 = 982065803U;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 2972769LLU;
	volatile uint64_t t53 = 1914217989828832LLU;

	t53 = ((x229^(x230-x231))^x232);

	if (t53 != 983858925LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x233 = 0U;
	uint16_t x234 = UINT16_MAX;
	volatile int32_t x235 = 1;
	int8_t x236 = 1;
	volatile int32_t t54 = 4;

	t54 = ((x233^(x234-x235))^x236);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	uint16_t x238 = 31U;
	static int32_t x239 = INT32_MAX;
	static volatile int32_t t55 = 1409;

	t55 = ((x237^(x238-x239))^x240);

	if (t55 != 2147451103) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 37923149LLU;
	volatile int16_t x244 = 7;

	t56 = ((x241^(x242-x243))^x244);

	if (t56 != 18446744073691270845LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = -77898594240LL;
	int16_t x246 = INT16_MIN;
	uint16_t x248 = 3401U;
	volatile int64_t t57 = -30356135LL;

	t57 = ((x245^(x246-x247))^x248);

	if (t57 != -9223371958956178167LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 1612U;
	static uint8_t x255 = 0U;
	static volatile uint16_t x256 = UINT16_MAX;
	volatile uint64_t t58 = 1449078611857739747LLU;

	t58 = ((x253^(x254-x255))^x256);

	if (t58 != 50282038LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x259 = -1LL;

	t59 = ((x257^(x258-x259))^x260);

	if (t59 != 66450LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x262 = 4699LL;
	int8_t x263 = INT8_MIN;
	int64_t t60 = -65165896LL;

	t60 = ((x261^(x262-x263))^x264);

	if (t60 != -4811LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 190;
	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 1U;
	static uint8_t x268 = 5U;
	static volatile uint64_t t61 = 16742522652283853LLU;

	t61 = ((x265^(x266-x267))^x268);

	if (t61 != 18446744073709551429LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x269 = 23U;
	uint64_t x270 = UINT64_MAX;
	volatile uint64_t x271 = 1925385919LLU;
	uint64_t t62 = 325520LLU;

	t62 = ((x269^(x270-x271))^x272);

	if (t62 != 18446744071339970216LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x274 = 12593;
	int64_t x275 = -1LL;
	uint32_t x276 = 86U;
	static volatile int64_t t63 = -1357752076167LL;

	t63 = ((x273^(x274-x275))^x276);

	if (t63 != -12645LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -34;
	int8_t x278 = INT8_MAX;
	int32_t x279 = 4813;
	static int32_t x280 = INT32_MIN;
	int32_t t64 = 136;

	t64 = ((x277^(x278-x279))^x280);

	if (t64 != -2147478932) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = 17;
	volatile uint64_t x282 = 48154609068LLU;
	int32_t x283 = 6085215;
	static uint64_t x284 = 27992021LLU;
	static volatile uint64_t t65 = 540195762973LLU;

	t65 = ((x281^(x282-x283))^x284);

	if (t65 != 48121984137LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x287 = -1;
	volatile int8_t x288 = 8;
	volatile int32_t t66 = 5975501;

	t66 = ((x285^(x286-x287))^x288);

	if (t66 != 116) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	volatile int32_t x290 = -1;
	volatile int32_t x291 = -21332642;

	t67 = ((x289^(x290-x291))^x292);

	if (t67 != 21364001) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x294 = 12;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 78070U;
	volatile uint32_t t68 = 35U;

	t68 = ((x293^(x294-x295))^x296);

	if (t68 != 4136277829U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x298 = 28U;
	int16_t x299 = -1;

	t69 = ((x297^(x298-x299))^x300);

	if (t69 != -3953LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -1;
	static int8_t x304 = 5;
	int32_t t70 = 107;

	t70 = ((x301^(x302-x303))^x304);

	if (t70 != -2147450885) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = 3393172;
	static int16_t x307 = 1789;
	int16_t x308 = INT16_MAX;
	int64_t t71 = -58923602740LL;

	t71 = ((x305^(x306-x307))^x308);

	if (t71 != 9223372036851384215LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = -1;
	uint64_t x312 = 19LLU;
	volatile uint64_t t72 = 8350636LLU;

	t72 = ((x309^(x310-x311))^x312);

	if (t72 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x314 = 29U;
	static uint8_t x315 = UINT8_MAX;
	static int16_t x316 = -1;
	uint64_t t73 = 6301LLU;

	t73 = ((x313^(x314-x315))^x316);

	if (t73 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 19U;
	uint16_t x318 = UINT16_MAX;
	int8_t x320 = -1;
	int64_t t74 = -5278779452LL;

	t74 = ((x317^(x318-x319))^x320);

	if (t74 != 2117258629748033LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = -4105224;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = 6U;
	static int8_t x324 = 3;
	volatile int32_t t75 = 401086;

	t75 = ((x321^(x322-x323))^x324);

	if (t75 != 4072449) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MAX;
	uint64_t x327 = UINT64_MAX;
	static int16_t x328 = INT16_MIN;
	volatile uint64_t t76 = 273LLU;

	t76 = ((x325^(x326-x327))^x328);

	if (t76 != 18446744071684893292LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x333 = 39U;
	int64_t x334 = INT64_MAX;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = 2146;

	t77 = ((x333^(x334-x335))^x336);

	if (t77 != 9223372036854712389LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -653976906;
	uint16_t x338 = UINT16_MAX;
	int16_t x339 = -139;
	volatile int32_t t78 = 225639;

	t78 = ((x337^(x338-x339))^x340);

	if (t78 != 654042563) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = 6218492944232774LL;
	int64_t t79 = 2639670318097436LL;

	t79 = ((x341^(x342-x343))^x344);

	if (t79 != 6218492944232889LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x345 = 74U;
	volatile int16_t x347 = INT16_MIN;
	volatile uint64_t t80 = 2LLU;

	t80 = ((x345^(x346-x347))^x348);

	if (t80 != 4041874884LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x349 = 5U;
	uint16_t x350 = UINT16_MAX;
	static volatile int64_t x351 = 101869902339LL;
	volatile uint8_t x352 = 8U;
	volatile int64_t t81 = 124962596249186708LL;

	t81 = ((x349^(x350-x351))^x352);

	if (t81 != -101869836815LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x353 = 3U;
	uint16_t x354 = 4182U;
	uint16_t x355 = UINT16_MAX;
	int32_t t82 = 3227696;

	t82 = ((x353^(x354-x355))^x356);

	if (t82 != -61356) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x358 = 3U;

	t83 = ((x357^(x358-x359))^x360);

	if (t83 != 2147483480) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x362 = 4U;
	uint8_t x364 = 16U;
	uint32_t t84 = 243483U;

	t84 = ((x361^(x362-x363))^x364);

	if (t84 != 4294966984U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x370 = INT16_MIN;
	uint8_t x371 = 6U;
	static uint8_t x372 = 10U;

	t85 = ((x369^(x370-x371))^x372);

	if (t85 != -32776) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = 178263;
	int64_t x379 = -53264LL;
	uint64_t x380 = UINT64_MAX;
	uint64_t t86 = 15940045946LLU;

	t86 = ((x377^(x378-x379))^x380);

	if (t86 != 259992LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	int16_t x383 = -1;
	uint8_t x384 = 0U;
	static int32_t t87 = 2400;

	t87 = ((x381^(x382-x383))^x384);

	if (t87 != 32641) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	static volatile uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 70317793931080LLU;

	t88 = ((x385^(x386-x387))^x388);

	if (t88 != 9223301715944599350LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x389 = 2043U;
	int64_t x390 = -4491LL;
	int16_t x391 = INT16_MIN;
	volatile uint8_t x392 = 13U;
	int64_t t89 = -159014500525462LL;

	t89 = ((x389^(x390-x391))^x392);

	if (t89 != 27011LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 255U;

	t90 = ((x393^(x394-x395))^x396);

	if (t90 != -32640LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 12088U;
	static int16_t x398 = INT16_MIN;
	static int64_t x399 = 13030507941LL;
	int32_t x400 = -1;
	int64_t t91 = -424002676LL;

	t91 = ((x397^(x398-x399))^x400);

	if (t91 != 13030550172LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = 1656610539297LL;
	volatile int64_t x403 = INT64_MAX;
	uint64_t x404 = 76104506896LLU;
	volatile uint64_t t92 = 130407994822734LLU;

	t92 = ((x401^(x402-x403))^x404);

	if (t92 != 9223373755068209457LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = INT32_MIN;
	int64_t x407 = 17009493993LL;
	uint64_t x408 = 47938LLU;
	uint64_t t93 = 57567LLU;

	t93 = ((x405^(x406-x407))^x408);

	if (t93 != 15202714452LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = 0;
	static uint8_t x414 = 99U;
	volatile uint32_t x415 = 1U;
	static int32_t x416 = -1;
	static volatile uint32_t t94 = 9110606U;

	t94 = ((x413^(x414-x415))^x416);

	if (t94 != 4294967197U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	volatile int32_t x420 = -4;

	t95 = ((x417^(x418-x419))^x420);

	if (t95 != 32771) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MAX;
	uint16_t x422 = 0U;
	int32_t x424 = -8088;
	int32_t t96 = -741138;

	t96 = ((x421^(x422-x423))^x424);

	if (t96 != 40854) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = -5;
	int32_t x427 = -1;
	uint16_t x428 = 7U;
	volatile int32_t t97 = 107029752;

	t97 = ((x425^(x426-x427))^x428);

	if (t97 != 2147483645) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x429 = 255601583LL;
	int16_t x430 = 627;
	uint32_t x431 = 1001U;
	int32_t x432 = INT32_MIN;
	static int64_t t98 = -1LL;

	t98 = ((x429^(x430-x431))^x432);

	if (t98 != -2403085019LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = INT64_MIN;
	static int32_t x434 = -1;
	int8_t x435 = -6;
	int64_t t99 = -130664441693103846LL;

	t99 = ((x433^(x434-x435))^x436);

	if (t99 != 9218738276920755680LL) { NG(); } else { ; }
	
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

