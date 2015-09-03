#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = UINT64_MAX;
static int64_t x12 = INT64_MIN;
volatile int32_t t2 = 10432;
int8_t x13 = INT8_MIN;
int32_t t3 = 4;
volatile int16_t x20 = 0;
uint16_t x23 = 5203U;
static uint8_t x30 = 60U;
int64_t x40 = -1LL;
int64_t x42 = INT64_MIN;
static int64_t x45 = 1290214328LL;
uint64_t x52 = UINT64_MAX;
int32_t t12 = -12483;
static int32_t x57 = -4253;
uint16_t x59 = UINT16_MAX;
int32_t t15 = 78569;
int64_t x65 = INT64_MIN;
uint64_t x70 = 3990276619LLU;
int64_t x74 = INT64_MAX;
int32_t x77 = -3169220;
int64_t x87 = INT64_MAX;
int16_t x89 = -1;
int32_t t22 = 0;
int16_t x93 = -1;
static int32_t t23 = 251258924;
int32_t t24 = 4554548;
int32_t x101 = 627428;
uint16_t x108 = 11782U;
int64_t x110 = INT64_MIN;
static uint32_t x116 = 1U;
uint64_t t28 = 921031156462854895LLU;
uint16_t x120 = 5560U;
int8_t x122 = 25;
uint64_t x123 = UINT64_MAX;
static volatile int64_t t30 = -11LL;
int32_t x126 = 15178470;
uint32_t x130 = 369U;
static int64_t x133 = 9278832924428LL;
volatile int64_t x135 = INT64_MIN;
int16_t x138 = INT16_MIN;
volatile int32_t x153 = INT32_MIN;
static int8_t x155 = -1;
uint32_t x161 = 1260235830U;
int32_t x180 = -16697890;
uint32_t x195 = 0U;
static volatile int8_t x198 = -1;
int8_t x200 = INT8_MIN;
uint16_t x217 = 29U;
int32_t t55 = 537728398;
uint32_t x227 = 43U;
int32_t x229 = 9961;
static volatile int32_t t57 = 148;
int32_t x234 = 115848168;
volatile int32_t t58 = -536;
int16_t x237 = INT16_MIN;
volatile int32_t t60 = -724;
int32_t x245 = INT32_MIN;
static int32_t x246 = -1;
uint16_t x248 = 35U;
int8_t x251 = INT8_MAX;
static int32_t x259 = INT32_MAX;
static int32_t t65 = -412647740;
int8_t x265 = -1;
int32_t x267 = -1;
int16_t x269 = 3;
volatile int32_t t67 = 0;
uint32_t x274 = 940426203U;
static int64_t x276 = -2041214085LL;
static int8_t x282 = INT8_MIN;
int32_t t70 = 1;
int16_t x287 = INT16_MIN;
static uint8_t x293 = UINT8_MAX;
int32_t t73 = -94977850;
uint16_t x298 = UINT16_MAX;
int16_t x299 = 3879;
uint16_t x300 = 3216U;
int64_t x303 = -1LL;
volatile int32_t x313 = -114085;
volatile int8_t x314 = 25;
static int32_t x319 = -13349854;
uint64_t x322 = 3975802693LLU;
int8_t x328 = INT8_MIN;
volatile int16_t x330 = -1;
uint16_t x334 = UINT16_MAX;
static volatile int64_t t83 = 449582LL;
static volatile int16_t x338 = INT16_MIN;
volatile int32_t x344 = INT32_MIN;
int32_t x349 = INT32_MIN;
int32_t x356 = -1;
int16_t x357 = INT16_MIN;
static int64_t x363 = -7LL;
int64_t t91 = 37850114307697972LL;
int64_t x370 = INT64_MIN;
static volatile int32_t t92 = -62726;
static uint8_t x374 = 0U;
int8_t x377 = INT8_MIN;
int64_t x390 = -41861096230LL;
int32_t x391 = INT32_MAX;
int32_t x397 = INT32_MIN;


void f0(void) {
	int16_t x1 = 16124;
	uint64_t x2 = 14950946453589LLU;
	uint64_t x3 = UINT64_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 3;

	t0 = (x1|((x2|x3)<x4));

	if (t0 != 16124) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 1898202LLU;
	volatile int8_t x8 = -1;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|((x6|x7)<x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	int32_t x11 = INT32_MIN;

	t2 = (x9|((x10|x11)<x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MAX;
	static uint8_t x15 = 15U;
	uint64_t x16 = 430LLU;

	t3 = (x13|((x14|x15)<x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = INT8_MIN;
	volatile int64_t x18 = INT64_MAX;
	int8_t x19 = -1;
	int32_t t4 = 32141;

	t4 = (x17|((x18|x19)<x20));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -4;
	int8_t x22 = 0;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 5;

	t5 = (x21|((x22|x23)<x24));

	if (t5 != -4) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 2732U;
	uint64_t x26 = 45992212LLU;
	volatile uint16_t x27 = UINT16_MAX;
	volatile uint8_t x28 = 1U;
	int32_t t6 = 115991;

	t6 = (x25|((x26|x27)<x28));

	if (t6 != 2732) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -208;
	uint64_t x31 = 6103847254809LLU;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 802330;

	t7 = (x29|((x30|x31)<x32));

	if (t7 != -208) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 5U;
	static uint64_t x34 = 3976951LLU;
	uint8_t x35 = UINT8_MAX;
	volatile uint64_t x36 = UINT64_MAX;
	volatile uint32_t t8 = 2059435803U;

	t8 = (x33|((x34|x35)<x36));

	if (t8 != 5U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int64_t x38 = 593518LL;
	static int8_t x39 = -1;
	int32_t t9 = -475862;

	t9 = (x37|((x38|x39)<x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -51;
	volatile int8_t x43 = 1;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 1;

	t10 = (x41|((x42|x43)<x44));

	if (t10 != -51) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -4;
	uint16_t x47 = 1330U;
	int8_t x48 = 4;
	int64_t t11 = -1605517LL;

	t11 = (x45|((x46|x47)<x48));

	if (t11 != 1290214329LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	volatile int16_t x50 = INT16_MIN;
	static volatile int32_t x51 = -1;

	t12 = (x49|((x50|x51)<x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int32_t x54 = INT32_MIN;
	static uint64_t x55 = 20868334479983024LLU;
	int16_t x56 = 3925;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x53|((x54|x55)<x56));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile int32_t t14 = -22;

	t14 = (x57|((x58|x59)<x60));

	if (t14 != -4253) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	volatile int8_t x62 = INT8_MIN;
	static uint16_t x63 = UINT16_MAX;
	uint32_t x64 = 210U;

	t15 = (x61|((x62|x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 1494U;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = 3U;
	volatile int64_t t16 = 28975325671LL;

	t16 = (x65|((x66|x67)<x68));

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x71 = INT16_MAX;
	static uint32_t x72 = UINT32_MAX;
	uint32_t t17 = UINT32_MAX;

	t17 = (x69|((x70|x71)<x72));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x75 = -1;
	uint16_t x76 = 1304U;
	volatile int32_t t18 = 611;

	t18 = (x73|((x74|x75)<x76));

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x78 = 3005848166712155LLU;
	uint8_t x79 = 15U;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 29155078;

	t19 = (x77|((x78|x79)<x80));

	if (t19 != -3169219) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 328726U;
	uint32_t x82 = 89U;
	volatile int32_t x83 = INT32_MIN;
	uint64_t x84 = UINT64_MAX;
	volatile uint32_t t20 = 36835U;

	t20 = (x81|((x82|x83)<x84));

	if (t20 != 328727U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int64_t x86 = INT64_MIN;
	volatile int64_t x88 = 3266358990LL;
	volatile int32_t t21 = 252;

	t21 = (x85|((x86|x87)<x88));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 33840691;
	uint64_t x91 = 16396570LLU;
	static int32_t x92 = 21;

	t22 = (x89|((x90|x91)<x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x94 = 21923U;
	int32_t x95 = -1;
	int32_t x96 = -1;

	t23 = (x93|((x94|x95)<x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 1034;
	volatile uint16_t x98 = 15U;
	int16_t x99 = INT16_MIN;
	static int16_t x100 = INT16_MAX;

	t24 = (x97|((x98|x99)<x100));

	if (t24 != 1035) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -29;
	uint16_t x103 = 50U;
	int32_t x104 = 3970;
	int32_t t25 = 239948;

	t25 = (x101|((x102|x103)<x104));

	if (t25 != 627429) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	volatile uint32_t x106 = 12770U;
	static uint64_t x107 = UINT64_MAX;
	volatile int32_t t26 = 1722292;

	t26 = (x105|((x106|x107)<x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3248256335648877LLU;
	static uint16_t x111 = 57U;
	static volatile uint64_t x112 = 173985383423LLU;
	uint64_t t27 = 5355LLU;

	t27 = (x109|((x110|x111)<x112));

	if (t27 != 3248256335648877LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 58154198735LLU;
	uint32_t x114 = 64167U;
	static volatile int32_t x115 = INT32_MAX;

	t28 = (x113|((x114|x115)<x116));

	if (t28 != 58154198735LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 18U;
	int64_t x118 = 107487LL;
	static volatile uint32_t x119 = 173079U;
	volatile int32_t t29 = -15133;

	t29 = (x117|((x118|x119)<x120));

	if (t29 != 18) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -1LL;
	int32_t x124 = -1;

	t30 = (x121|((x122|x123)<x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x127 = -1;
	volatile int16_t x128 = INT16_MAX;
	int32_t t31 = -67546;

	t31 = (x125|((x126|x127)<x128));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 2027U;
	static int8_t x131 = INT8_MAX;
	static int8_t x132 = INT8_MIN;
	volatile uint32_t t32 = 136391U;

	t32 = (x129|((x130|x131)<x132));

	if (t32 != 2027U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	int64_t x136 = -19705LL;
	int64_t t33 = 4015351513LL;

	t33 = (x133|((x134|x135)<x136));

	if (t33 != 9278832924428LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile uint64_t x139 = 5898624138395LLU;
	uint32_t x140 = UINT32_MAX;
	int32_t t34 = -14401067;

	t34 = (x137|((x138|x139)<x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	uint16_t x142 = 0U;
	int8_t x143 = -3;
	volatile uint16_t x144 = 151U;
	int32_t t35 = 44780;

	t35 = (x141|((x142|x143)<x144));

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 54U;
	int64_t x146 = -1LL;
	int16_t x147 = -29;
	uint8_t x148 = 0U;
	static volatile int32_t t36 = -352703;

	t36 = (x145|((x146|x147)<x148));

	if (t36 != 55) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 2;
	int8_t x150 = -31;
	static int64_t x151 = 78787133976LL;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 711904043;

	t37 = (x149|((x150|x151)<x152));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x154 = -1;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = (x153|((x154|x155)<x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x157 = 21U;
	int16_t x158 = INT16_MIN;
	int64_t x159 = -1LL;
	static volatile int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -2456;

	t39 = (x157|((x158|x159)<x160));

	if (t39 != 21) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -1;
	volatile int16_t x163 = -1;
	static volatile int64_t x164 = INT64_MIN;
	volatile uint32_t t40 = 70167877U;

	t40 = (x161|((x162|x163)<x164));

	if (t40 != 1260235830U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -1;
	int8_t x168 = INT8_MIN;
	static int32_t t41 = -1844;

	t41 = (x165|((x166|x167)<x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 108758U;
	uint8_t x170 = UINT8_MAX;
	static int64_t x171 = -27968787283LL;
	volatile int32_t x172 = INT32_MIN;
	volatile uint32_t t42 = 1U;

	t42 = (x169|((x170|x171)<x172));

	if (t42 != 108759U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int16_t x174 = -1;
	static uint8_t x175 = 18U;
	uint32_t x176 = 3082U;
	int32_t t43 = -1;

	t43 = (x173|((x174|x175)<x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 847902348689488LL;
	int16_t x178 = 111;
	int8_t x179 = -2;
	volatile int64_t t44 = 66174LL;

	t44 = (x177|((x178|x179)<x180));

	if (t44 != 847902348689488LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 108U;
	uint16_t x182 = UINT16_MAX;
	static int8_t x183 = INT8_MAX;
	int64_t x184 = -1LL;
	int32_t t45 = 1;

	t45 = (x181|((x182|x183)<x184));

	if (t45 != 108) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = -2;
	uint16_t x187 = 29802U;
	volatile int32_t x188 = 236;
	int32_t t46 = 1;

	t46 = (x185|((x186|x187)<x188));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = -437;
	volatile int16_t x191 = -5;
	int16_t x192 = -369;
	int32_t t47 = INT32_MIN;

	t47 = (x189|((x190|x191)<x192));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MIN;
	static uint8_t x194 = 74U;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = 703179585;

	t48 = (x193|((x194|x195)<x196));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	static uint8_t x199 = 0U;
	volatile int64_t t49 = 1197683546LL;

	t49 = (x197|((x198|x199)<x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 0;
	int32_t x202 = -11254;
	int8_t x203 = INT8_MIN;
	int64_t x204 = 1741LL;
	volatile int32_t t50 = -134032032;

	t50 = (x201|((x202|x203)<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MIN;
	volatile uint64_t x208 = 57LLU;
	uint32_t t51 = UINT32_MAX;

	t51 = (x205|((x206|x207)<x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = 53482U;
	uint64_t x211 = 25027480LLU;
	static int8_t x212 = -1;
	int32_t t52 = 191;

	t52 = (x209|((x210|x211)<x212));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int8_t x214 = INT8_MIN;
	static int8_t x215 = INT8_MIN;
	static int64_t x216 = -42377491033LL;
	int32_t t53 = -169293;

	t53 = (x213|((x214|x215)<x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = -1LL;
	int64_t x219 = INT64_MIN;
	static volatile int64_t x220 = INT64_MAX;
	int32_t t54 = 3926572;

	t54 = (x217|((x218|x219)<x220));

	if (t54 != 29) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 343U;
	int8_t x222 = -15;
	static int8_t x223 = INT8_MAX;
	uint64_t x224 = UINT64_MAX;

	t55 = (x221|((x222|x223)<x224));

	if (t55 != 343) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = 5717;
	volatile uint64_t x226 = 456973374LLU;
	int8_t x228 = INT8_MIN;
	int32_t t56 = 21493;

	t56 = (x225|((x226|x227)<x228));

	if (t56 != 5717) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = -1;
	static volatile uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 3851966762LLU;

	t57 = (x229|((x230|x231)<x232));

	if (t57 != 9961) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int16_t x235 = INT16_MAX;
	int16_t x236 = INT16_MAX;

	t58 = (x233|((x234|x235)<x236));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;
	int32_t t59 = -1;

	t59 = (x237|((x238|x239)<x240));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = 1U;

	t60 = (x241|((x242|x243)<x244));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x247 = -1;
	int32_t t61 = 3;

	t61 = (x245|((x246|x247)<x248));

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static int8_t x250 = -1;
	int8_t x252 = 1;
	static volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249|((x250|x251)<x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = -1;
	uint8_t x255 = 4U;
	int8_t x256 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = (x253|((x254|x255)<x256));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	volatile uint32_t x258 = UINT32_MAX;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = INT32_MIN;

	t64 = (x257|((x258|x259)<x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 600;
	int8_t x262 = INT8_MIN;
	volatile uint16_t x263 = 0U;
	volatile uint16_t x264 = 4U;

	t65 = (x261|((x262|x263)<x264));

	if (t65 != 601) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x266 = -1LL;
	static uint16_t x268 = 405U;
	volatile int32_t t66 = -2;

	t66 = (x265|((x266|x267)<x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = -31055706;
	uint8_t x271 = 95U;
	volatile uint16_t x272 = UINT16_MAX;

	t67 = (x269|((x270|x271)<x272));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -1;
	int16_t x275 = INT16_MIN;
	volatile int32_t t68 = 237;

	t68 = (x273|((x274|x275)<x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	static int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MIN;
	static int8_t x280 = INT8_MIN;
	volatile int64_t t69 = 105LL;

	t69 = (x277|((x278|x279)<x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	uint32_t x284 = UINT32_MAX;

	t70 = (x281|((x282|x283)<x284));

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = -1;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = -1;

	t71 = (x285|((x286|x287)<x288));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 469478213U;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = 1006U;
	volatile uint32_t t72 = 641128U;

	t72 = (x289|((x290|x291)<x292));

	if (t72 != 469478213U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -1;
	static int16_t x295 = 61;
	int32_t x296 = 46295052;

	t73 = (x293|((x294|x295)<x296));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -12742LL;
	int64_t t74 = -86707323731LL;

	t74 = (x297|((x298|x299)<x300));

	if (t74 != -12742LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	static uint8_t x302 = UINT8_MAX;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -56654581;

	t75 = (x301|((x302|x303)<x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 1250973LL;
	volatile int8_t x306 = -19;
	volatile uint8_t x307 = 79U;
	static int32_t x308 = 516958503;
	volatile int64_t t76 = 6772107851LL;

	t76 = (x305|((x306|x307)<x308));

	if (t76 != 1250973LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	static volatile uint32_t x311 = 0U;
	int8_t x312 = -1;
	int32_t t77 = 0;

	t77 = (x309|((x310|x311)<x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	volatile int32_t t78 = 258306;

	t78 = (x313|((x314|x315)<x316));

	if (t78 != -114085) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = INT32_MIN;

	t79 = (x317|((x318|x319)<x320));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 260248LLU;
	volatile int8_t x323 = 0;
	static int8_t x324 = INT8_MIN;
	volatile uint64_t t80 = 70945LLU;

	t80 = (x321|((x322|x323)<x324));

	if (t80 != 260249LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	int16_t x327 = 849;
	int32_t t81 = 4;

	t81 = (x325|((x326|x327)<x328));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int32_t x331 = INT32_MIN;
	static uint8_t x332 = 6U;
	int32_t t82 = -4865523;

	t82 = (x329|((x330|x331)<x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int32_t x335 = -1;
	int16_t x336 = INT16_MAX;

	t83 = (x333|((x334|x335)<x336));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 84548482327LLU;
	uint32_t x339 = UINT32_MAX;
	static volatile int16_t x340 = -15722;
	volatile uint64_t t84 = 49312158123108LLU;

	t84 = (x337|((x338|x339)<x340));

	if (t84 != 84548482327LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = 0;
	volatile int16_t x342 = INT16_MAX;
	int64_t x343 = -1LL;
	static volatile int32_t t85 = -970458;

	t85 = (x341|((x342|x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = UINT64_MAX;
	static volatile uint8_t x346 = 1U;
	static volatile int8_t x347 = INT8_MAX;
	uint32_t x348 = 0U;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x345|((x346|x347)<x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	static int8_t x351 = -1;
	int64_t x352 = 532396669848LL;
	static int32_t t87 = INT32_MIN;

	t87 = (x349|((x350|x351)<x352));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -115;
	static volatile uint32_t x354 = UINT32_MAX;
	static int8_t x355 = 0;
	volatile int32_t t88 = -254;

	t88 = (x353|((x354|x355)<x356));

	if (t88 != -115) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -13924LL;
	int16_t x359 = -1;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = 711618;

	t89 = (x357|((x358|x359)<x360));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x361|((x362|x363)<x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int16_t x366 = INT16_MAX;
	int16_t x367 = INT16_MAX;
	static uint16_t x368 = UINT16_MAX;

	t91 = (x365|((x366|x367)<x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	static uint8_t x371 = 1U;
	int64_t x372 = -7607661434LL;

	t92 = (x369|((x370|x371)<x372));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1466;
	int8_t x375 = -1;
	volatile int32_t x376 = 835;
	static volatile int32_t t93 = 0;

	t93 = (x373|((x374|x375)<x376));

	if (t93 != -1465) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -1;
	int32_t x379 = -1;
	int8_t x380 = INT8_MAX;
	static int32_t t94 = 4134030;

	t94 = (x377|((x378|x379)<x380));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int64_t x382 = INT64_MIN;
	int8_t x383 = -21;
	int32_t x384 = INT32_MAX;
	static uint64_t t95 = UINT64_MAX;

	t95 = (x381|((x382|x383)<x384));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = 1734U;
	uint16_t x387 = 5U;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x385|((x386|x387)<x388));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 10396;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -7967722;

	t97 = (x389|((x390|x391)<x392));

	if (t97 != 10397) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 43LL;
	static volatile int64_t x394 = -1LL;
	volatile int8_t x395 = INT8_MIN;
	uint16_t x396 = UINT16_MAX;
	int64_t t98 = -19374609985LL;

	t98 = (x393|((x394|x395)<x396));

	if (t98 != 43LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MIN;
	int32_t x399 = 104110843;
	volatile int64_t x400 = -1LL;
	int32_t t99 = 1679;

	t99 = (x397|((x398|x399)<x400));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

