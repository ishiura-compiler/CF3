#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = UINT8_MAX;
uint32_t x8 = 33530445U;
static volatile int32_t x26 = 49759;
static volatile int32_t t7 = 216;
int8_t x41 = INT8_MAX;
volatile int64_t t9 = 11425343686LL;
volatile int32_t x50 = INT32_MIN;
static volatile uint8_t x56 = 1U;
uint32_t x59 = 43U;
volatile int64_t x66 = -1LL;
static int32_t x70 = INT32_MIN;
static int64_t t16 = 30322LL;
int8_t x84 = INT8_MIN;
uint8_t x90 = 107U;
static uint64_t x92 = 8138570LLU;
static uint16_t x98 = 11843U;
volatile int16_t x99 = INT16_MAX;
static volatile int32_t x105 = INT32_MIN;
static uint16_t x107 = 10082U;
int32_t t24 = 689160;
volatile uint32_t x111 = 1215U;
uint64_t x118 = 29146881028LLU;
uint8_t x122 = UINT8_MAX;
uint16_t x132 = 6243U;
uint64_t x133 = UINT64_MAX;
volatile uint16_t x134 = UINT16_MAX;
volatile uint64_t t31 = 21LLU;
volatile int8_t x138 = -1;
int16_t x141 = 4;
uint8_t x143 = 3U;
volatile int32_t x144 = 511;
int16_t x151 = INT16_MIN;
int32_t x153 = -2;
static int64_t x154 = 10612299261902LL;
static int32_t x163 = -983543928;
int8_t x176 = 1;
static uint8_t x183 = 1U;
uint32_t x184 = UINT32_MAX;
int16_t x186 = -1;
uint64_t x192 = 13660354871899LLU;
uint16_t x195 = 23108U;
volatile uint16_t x213 = UINT16_MAX;
volatile int64_t t51 = -20506858037LL;
static int16_t x227 = INT16_MIN;
static volatile int16_t x233 = INT16_MAX;
static volatile uint64_t x245 = 2211327708753090840LLU;
uint64_t t57 = 2191261LLU;
volatile int64_t x250 = -3154892LL;
static uint64_t x255 = 3LLU;
static volatile uint8_t x259 = 1U;
int8_t x262 = INT8_MIN;
int8_t x284 = 34;
volatile uint64_t t65 = 319655683LLU;
volatile uint32_t t66 = 4123259U;
volatile int64_t x307 = -41428LL;
int16_t x308 = INT16_MAX;
uint8_t x314 = 75U;
volatile int64_t x316 = -3348007887LL;
int64_t t73 = -26LL;
static int64_t x335 = INT64_MAX;
int8_t x343 = INT8_MAX;
int32_t x345 = -1;
volatile int64_t x348 = INT64_MIN;
uint8_t x352 = 0U;
volatile int32_t t81 = INT32_MAX;
static volatile uint64_t t82 = 0LLU;
static int16_t x371 = INT16_MIN;
volatile int32_t x373 = 7103;
volatile int32_t t85 = 1286078;
int8_t x378 = INT8_MAX;
int8_t x380 = -1;
volatile int64_t t86 = 149454907824092562LL;
int16_t x381 = -163;
int64_t x387 = 263042198965228LL;
volatile int8_t x391 = INT8_MIN;
int64_t x398 = -347061294227677LL;
volatile uint64_t x400 = UINT64_MAX;
int64_t x408 = 129032731151LL;
volatile int64_t t93 = 0LL;
static volatile int8_t x409 = 3;
volatile int64_t t94 = -1443075384089978710LL;
int32_t x419 = INT32_MAX;
int16_t x424 = INT16_MIN;
int64_t x426 = -1753053429881LL;
int8_t x428 = -1;
uint64_t t99 = 141250225599732695LLU;


void f0(void) {
	static volatile int16_t x5 = INT16_MAX;
	int16_t x6 = 185;
	static uint32_t t0 = 875U;

	t0 = ((x5-(x6&x7))^x8);

	if (t0 != 33545483U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	int64_t x10 = 627419195733LL;
	volatile int32_t x11 = 992721;
	int8_t x12 = INT8_MIN;
	int64_t t1 = 63938314492726LL;

	t1 = ((x9-(x10&x11))^x12);

	if (t1 != 598318LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = -1;
	int8_t x18 = -14;
	volatile int16_t x19 = INT16_MIN;
	int16_t x20 = -1;
	volatile int32_t t2 = -584952;

	t2 = ((x17-(x18&x19))^x20);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MAX;
	int32_t x23 = 4;
	uint8_t x24 = 60U;
	volatile int32_t t3 = 913160;

	t3 = ((x21-(x22&x23))^x24);

	if (t3 != -32832) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -1;
	uint8_t x27 = 86U;
	volatile int16_t x28 = -56;
	static int32_t t4 = 1817972;

	t4 = ((x25-(x26&x27))^x28);

	if (t4 != 97) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x30 = 24U;
	volatile int32_t x31 = -5752061;
	static int8_t x32 = 25;
	volatile int32_t t5 = 3;

	t5 = ((x29-(x30&x31))^x32);

	if (t5 != -2147483623) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x33 = 28355U;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MAX;
	int32_t t6 = 0;

	t6 = ((x33-(x34&x35))^x36);

	if (t6 != 61116) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 44456401;
	uint16_t x38 = 1490U;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MIN;

	t7 = ((x37-(x38&x39))^x40);

	if (t7 != -44443183) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x42 = -85983232546865107LL;
	int16_t x43 = INT16_MAX;
	int16_t x44 = -146;
	int64_t t8 = -110767LL;

	t8 = ((x41-(x42&x43))^x44);

	if (t8 != -196LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int16_t x46 = INT16_MIN;
	static int16_t x47 = -24;
	volatile int64_t x48 = 2LL;

	t9 = ((x45-(x46&x47))^x48);

	if (t9 != 32765LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MIN;
	int16_t x51 = INT16_MAX;
	int64_t x52 = INT64_MAX;
	volatile int64_t t10 = -17513538124LL;

	t10 = ((x49-(x50&x51))^x52);

	if (t10 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MIN;
	static int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	static volatile int64_t t11 = -27803152217393LL;

	t11 = ((x53-(x54&x55))^x56);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 280381324680318852LL;
	int8_t x58 = -1;
	int16_t x60 = -2538;
	static volatile int64_t t12 = 138LL;

	t12 = ((x57-(x58&x59))^x60);

	if (t12 != -280381324680316593LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 82U;
	volatile int64_t x62 = -1LL;
	static int32_t x63 = INT32_MAX;
	volatile int64_t x64 = -1LL;
	volatile int64_t t13 = 882104593589LL;

	t13 = ((x61-(x62&x63))^x64);

	if (t13 != 2147483564LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	int64_t t14 = -1LL;

	t14 = ((x65-(x66&x67))^x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	static int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t15 = UINT64_MAX;

	t15 = ((x69-(x70&x71))^x72);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	volatile int64_t x74 = INT64_MIN;
	static volatile uint32_t x75 = UINT32_MAX;
	static volatile uint8_t x76 = UINT8_MAX;

	t16 = ((x73-(x74&x75))^x76);

	if (t16 != -256LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 25958741813LLU;
	volatile int32_t x79 = -1;
	int8_t x80 = -1;
	volatile uint64_t t17 = 254LLU;

	t17 = ((x77-(x78&x79))^x80);

	if (t17 != 21663774517LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x81 = 17U;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = UINT64_MAX;
	static volatile uint64_t t18 = 1023LLU;

	t18 = ((x81-(x82&x83))^x84);

	if (t18 != 18446744073709551377LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 124U;
	volatile int64_t x86 = -1LL;
	int16_t x87 = 7062;
	int16_t x88 = INT16_MIN;
	int64_t t19 = 14LL;

	t19 = ((x85-(x86&x87))^x88);

	if (t19 != 25830LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 612734129978LLU;
	static int16_t x91 = -6605;
	uint64_t t20 = 2834130LLU;

	t20 = ((x89-(x90&x91))^x92);

	if (t20 != 612732303453LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = UINT64_MAX;
	int32_t x94 = 50;
	volatile uint16_t x95 = 598U;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t21 = 0LLU;

	t21 = ((x93-(x94&x95))^x96);

	if (t21 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 312;
	uint16_t x100 = 28U;
	int32_t t22 = -2;

	t22 = ((x97-(x98&x99))^x100);

	if (t22 != -11543) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	volatile uint64_t x104 = UINT64_MAX;
	uint64_t t23 = 114955510297LLU;

	t23 = ((x101-(x102&x103))^x104);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x106 = 1U;
	int16_t x108 = -440;

	t24 = ((x105-(x106&x107))^x108);

	if (t24 != 2147483208) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x109 = 832223LLU;
	uint16_t x110 = UINT16_MAX;
	int32_t x112 = 10587;
	volatile uint64_t t25 = 4592372231723136LLU;

	t25 = ((x109-(x110&x111))^x112);

	if (t25 != 821115LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -7274277LL;
	int8_t x114 = -1;
	int16_t x115 = -1;
	static volatile int64_t x116 = -12111739528LL;
	static volatile int64_t t26 = -20LL;

	t26 = ((x113-(x114&x115))^x116);

	if (t26 != 12105057700LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MIN;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t27 = 25004244LLU;

	t27 = ((x117-(x118&x119))^x120);

	if (t27 != 9223372066001616896LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 0U;
	static int32_t x123 = -6214;
	volatile uint8_t x124 = 3U;
	uint32_t t28 = 426U;

	t28 = ((x121-(x122&x123))^x124);

	if (t28 != 4294967109U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = -325;
	static int64_t x126 = INT64_MAX;
	uint32_t x127 = 336334U;
	int32_t x128 = -250627694;
	int64_t t29 = 74301557899LL;

	t29 = ((x125-(x126&x127))^x128);

	if (t29 != 250963327LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	volatile uint64_t x130 = 1309564160806763830LLU;
	volatile int64_t x131 = -1LL;
	uint64_t t30 = 49LLU;

	t30 = ((x129-(x130&x131))^x132);

	if (t30 != 17137179912902793769LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x135 = 41U;
	int64_t x136 = 3LL;

	t31 = ((x133-(x134&x135))^x136);

	if (t31 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 1U;
	int32_t x139 = -1;
	int32_t x140 = -1;
	int32_t t32 = -2;

	t32 = ((x137-(x138&x139))^x140);

	if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = -1;
	volatile int32_t t33 = -1442;

	t33 = ((x141-(x142&x143))^x144);

	if (t33 != 510) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	static int32_t x146 = INT32_MIN;
	static int8_t x147 = -1;
	uint64_t x148 = 2316540LLU;
	volatile uint64_t t34 = 2687993LLU;

	t34 = ((x145-(x146&x147))^x148);

	if (t34 != 2145167107LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	uint8_t x150 = 2U;
	static int64_t x152 = INT64_MAX;
	volatile int64_t t35 = INT64_MIN;

	t35 = ((x149-(x150&x151))^x152);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x155 = -593;
	int64_t x156 = INT64_MIN;
	volatile int64_t t36 = -1742158168943LL;

	t36 = ((x153-(x154&x155))^x156);

	if (t36 != 9223361424555514480LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = -1LL;
	int16_t x158 = -1;
	int8_t x159 = 1;
	uint64_t x160 = 83LLU;
	uint64_t t37 = 39592077LLU;

	t37 = ((x157-(x158&x159))^x160);

	if (t37 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -862;
	static int16_t x162 = -13382;
	static int64_t x164 = -1LL;
	volatile int64_t t38 = 6LL;

	t38 = ((x161-(x162&x163))^x164);

	if (t38 != -983544091LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x169 = 5221831U;
	volatile int8_t x170 = -1;
	int8_t x171 = 1;
	static volatile int32_t x172 = -1;
	volatile uint32_t t39 = 1U;

	t39 = ((x169-(x170&x171))^x172);

	if (t39 != 4289745465U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	volatile int64_t x174 = INT64_MIN;
	static volatile int16_t x175 = INT16_MAX;
	volatile int64_t t40 = 3835964522876679LL;

	t40 = ((x173-(x174&x175))^x176);

	if (t40 != -2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = 2480943U;
	volatile int32_t x178 = -1;
	static uint8_t x179 = UINT8_MAX;
	int8_t x180 = 1;
	uint32_t t41 = 558416U;

	t41 = ((x177-(x178&x179))^x180);

	if (t41 != 2480689U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x181 = UINT64_MAX;
	int64_t x182 = -1LL;
	uint64_t t42 = 732550432414LLU;

	t42 = ((x181-(x182&x183))^x184);

	if (t42 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MIN;
	volatile uint16_t x187 = 3U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t43 = -3;

	t43 = ((x185-(x186&x187))^x188);

	if (t43 != 65533) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 2U;
	uint64_t x190 = UINT64_MAX;
	volatile uint16_t x191 = 0U;
	static uint64_t t44 = 41717LLU;

	t44 = ((x189-(x190&x191))^x192);

	if (t44 != 13660354871897LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x193 = -1;
	static volatile int32_t x194 = INT32_MIN;
	int32_t x196 = -192;
	int32_t t45 = -916;

	t45 = ((x193-(x194&x195))^x196);

	if (t45 != 191) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 0;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MAX;
	static int32_t t46 = 28137;

	t46 = ((x197-(x198&x199))^x200);

	if (t46 != -65281) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	static int16_t x202 = 10;
	int32_t x203 = 452974368;
	int16_t x204 = -1;
	uint32_t t47 = 1U;

	t47 = ((x201-(x202&x203))^x204);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	static int64_t x206 = 5538354LL;
	static int8_t x207 = INT8_MIN;
	volatile int8_t x208 = -1;
	int64_t t48 = -1805587210732738416LL;

	t48 = ((x205-(x206&x207))^x208);

	if (t48 != 5538176LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x209 = -7;
	int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t49 = 1375;

	t49 = ((x209-(x210&x211))^x212);

	if (t49 != 2147483641) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = 473;
	int16_t x215 = -9;
	int8_t x216 = -1;
	static int32_t t50 = 798434;

	t50 = ((x213-(x214&x215))^x216);

	if (t50 != -65071) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	static int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	static int32_t x220 = 1;

	t51 = ((x217-(x218&x219))^x220);

	if (t51 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 966U;
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = UINT8_MAX;
	static uint32_t x224 = UINT32_MAX;
	volatile uint32_t t52 = 158U;

	t52 = ((x221-(x222&x223))^x224);

	if (t52 != 4294966584U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -1LL;
	int64_t x226 = INT64_MIN;
	static uint16_t x228 = UINT16_MAX;
	volatile int64_t t53 = -151223LL;

	t53 = ((x225-(x226&x227))^x228);

	if (t53 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x234 = UINT32_MAX;
	int32_t x235 = 181839;
	static volatile int64_t x236 = 127518LL;
	volatile int64_t t54 = -1LL;

	t54 = ((x233-(x234&x235))^x236);

	if (t54 != 4294724526LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = -1LL;
	uint64_t x239 = 235955LLU;
	uint8_t x240 = UINT8_MAX;
	uint64_t t55 = 148689890LLU;

	t55 = ((x237-(x238&x239))^x240);

	if (t55 != 18446744073709315763LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int64_t t56 = -28551LL;

	t56 = ((x241-(x242&x243))^x244);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x246 = -365;
	static uint32_t x247 = 42992U;
	uint64_t x248 = 740LLU;

	t57 = ((x245-(x246&x247))^x248);

	if (t57 != 2211327708753047660LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 1U;
	uint64_t x251 = 103520628869904520LLU;
	volatile int32_t x252 = INT32_MIN;
	uint64_t t58 = 2082440761905LLU;

	t58 = ((x249-(x250&x251))^x252);

	if (t58 != 103520629721458689LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 4183U;
	int8_t x254 = -1;
	int8_t x256 = 1;
	volatile uint64_t t59 = 29920013000LLU;

	t59 = ((x253-(x254&x255))^x256);

	if (t59 != 4181LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x257 = 32373U;
	uint32_t x258 = UINT32_MAX;
	int32_t x260 = INT32_MAX;
	static uint32_t t60 = 29047276U;

	t60 = ((x257-(x258&x259))^x260);

	if (t60 != 2147451275U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MIN;
	static uint8_t x263 = 0U;
	static int32_t x264 = INT32_MIN;
	volatile int32_t t61 = 272;

	t61 = ((x261-(x262&x263))^x264);

	if (t61 != 2147450880) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = UINT8_MAX;
	static uint8_t x267 = 31U;
	int32_t x268 = INT32_MIN;
	int32_t t62 = 1;

	t62 = ((x265-(x266&x267))^x268);

	if (t62 != -2147483424) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 1877U;
	int16_t x274 = INT16_MIN;
	volatile uint64_t x275 = 2484LLU;
	int32_t x276 = INT32_MIN;
	uint64_t t63 = 4614258LLU;

	t63 = ((x273-(x274&x275))^x276);

	if (t63 != 18446744071562069845LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	static int64_t x279 = INT64_MIN;
	int8_t x280 = -55;
	uint64_t t64 = 1971625328189906245LLU;

	t64 = ((x277-(x278&x279))^x280);

	if (t64 != 9223372032559808566LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 1994044045LLU;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = 5U;

	t65 = ((x281-(x282&x283))^x284);

	if (t65 != 1994044079LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x285 = -1;
	uint32_t x286 = 81U;
	volatile uint32_t x287 = 457956U;
	volatile int16_t x288 = 10;

	t66 = ((x285-(x286&x287))^x288);

	if (t66 != 4294967221U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x289 = 0;
	int16_t x290 = 3;
	int8_t x291 = 3;
	volatile int32_t x292 = 32493356;
	volatile int32_t t67 = -12;

	t67 = ((x289-(x290&x291))^x292);

	if (t67 != -32493359) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	static int8_t x294 = 7;
	int8_t x295 = -1;
	static volatile uint8_t x296 = 6U;
	int32_t t68 = 50025310;

	t68 = ((x293-(x294&x295))^x296);

	if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MIN;
	static int32_t x298 = -1;
	int64_t x299 = -23605387871359957LL;
	uint32_t x300 = UINT32_MAX;
	volatile int64_t t69 = 742144650LL;

	t69 = ((x297-(x298&x299))^x300);

	if (t69 != -9199766650287264726LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = 147576LL;
	int8_t x302 = INT8_MIN;
	volatile int64_t x303 = -1LL;
	int32_t x304 = INT32_MIN;
	volatile int64_t t70 = 979791617LL;

	t70 = ((x301-(x302&x303))^x304);

	if (t70 != -2147335944LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -131841899434LL;
	static int64_t x306 = 9LL;
	static int64_t t71 = 632097340125LL;

	t71 = ((x305-(x306&x307))^x308);

	if (t71 != -131841901647LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 15859735839954LLU;
	volatile uint16_t x312 = UINT16_MAX;
	volatile uint64_t t72 = 361163438097850LLU;

	t72 = ((x309-(x310&x311))^x312);

	if (t72 != 18446744070993003730LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x313 = INT32_MAX;
	int8_t x315 = INT8_MAX;

	t73 = ((x313-(x314&x315))^x316);

	if (t73 != -3094443131LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x317 = -1LL;
	static uint8_t x318 = 4U;
	static uint16_t x319 = 469U;
	uint64_t x320 = 25197347216098LLU;
	uint64_t t74 = 517LLU;

	t74 = ((x317-(x318&x319))^x320);

	if (t74 != 18446718876362335513LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	volatile int32_t x322 = -1;
	volatile int32_t x323 = INT32_MIN;
	int32_t x324 = -1;
	static volatile int64_t t75 = -46606LL;

	t75 = ((x321-(x322&x323))^x324);

	if (t75 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -1;
	volatile int64_t x326 = 6767LL;
	volatile int64_t x327 = -62471943351985244LL;
	int64_t x328 = -1LL;
	int64_t t76 = -230625095LL;

	t76 = ((x325-(x326&x327))^x328);

	if (t76 != 6692LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = 122172;
	uint64_t x330 = 267405665687LLU;
	uint8_t x331 = UINT8_MAX;
	volatile uint32_t x332 = 3U;
	volatile uint64_t t77 = 112168279356976334LLU;

	t77 = ((x329-(x330&x331))^x332);

	if (t77 != 122022LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = 810169;
	int8_t x334 = INT8_MAX;
	volatile int64_t x336 = -1LL;
	volatile int64_t t78 = 1019654LL;

	t78 = ((x333-(x334&x335))^x336);

	if (t78 != -810043LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 2U;
	int64_t x342 = INT64_MIN;
	int16_t x344 = 1;
	volatile int64_t t79 = 0LL;

	t79 = ((x341-(x342&x343))^x344);

	if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x346 = UINT64_MAX;
	volatile int64_t x347 = INT64_MAX;
	volatile uint64_t t80 = 329447LLU;

	t80 = ((x345-(x346&x347))^x348);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = -1;
	int32_t x350 = INT32_MIN;
	volatile int8_t x351 = -1;

	t81 = ((x349-(x350&x351))^x352);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = 6852133881166LLU;
	uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 0U;
	uint32_t x360 = UINT32_MAX;

	t82 = ((x357-(x358&x359))^x360);

	if (t82 != 6853106760369LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x361 = UINT64_MAX;
	uint32_t x362 = UINT32_MAX;
	uint8_t x363 = UINT8_MAX;
	static uint8_t x364 = 6U;
	uint64_t t83 = 125162LLU;

	t83 = ((x361-(x362&x363))^x364);

	if (t83 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = -1;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t84 = 8086362;

	t84 = ((x369-(x370&x371))^x372);

	if (t84 != 65280) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = -1;
	int32_t x375 = INT32_MAX;
	int32_t x376 = 2411596;

	t85 = ((x373-(x374&x375))^x376);

	if (t85 != -2145069172) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = 1075294433128096666LL;
	int16_t x379 = INT16_MIN;

	t86 = ((x377-(x378&x379))^x380);

	if (t86 != -1075294433128096667LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x382 = INT64_MIN;
	uint64_t x383 = 3832117094LLU;
	static int32_t x384 = -412244401;
	uint64_t t87 = 184728631179LLU;

	t87 = ((x381-(x382&x383))^x384);

	if (t87 != 412244242LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = INT32_MAX;
	volatile uint32_t x386 = UINT32_MAX;
	int32_t x388 = INT32_MAX;
	volatile int64_t t88 = -217608096177261834LL;

	t88 = ((x385-(x386&x387))^x388);

	if (t88 != 1221889004LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x389 = UINT64_MAX;
	static int8_t x390 = 12;
	volatile uint16_t x392 = UINT16_MAX;
	static volatile uint64_t t89 = 10543LLU;

	t89 = ((x389-(x390&x391))^x392);

	if (t89 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = 0LLU;
	volatile int64_t x395 = -1LL;
	uint32_t x396 = 48U;
	uint64_t t90 = 1LLU;

	t90 = ((x393-(x394&x395))^x396);

	if (t90 != 9223372036854775856LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x397 = 1673LLU;
	int64_t x399 = INT64_MAX;
	static volatile uint64_t t91 = 54242187099252LLU;

	t91 = ((x397-(x398&x399))^x400);

	if (t91 != 9223024975560546457LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = 1029716463LL;
	int8_t x402 = INT8_MAX;
	uint8_t x403 = UINT8_MAX;
	volatile int8_t x404 = INT8_MIN;
	volatile int64_t t92 = 1394LL;

	t92 = ((x401-(x402&x403))^x404);

	if (t92 != -1029716240LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = 26U;
	static uint32_t x406 = 5884U;
	int16_t x407 = -1;

	t93 = ((x405-(x406&x407))^x408);

	if (t93 != 132960277265LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x410 = -1;
	int64_t x411 = INT64_MAX;
	volatile uint32_t x412 = 84U;

	t94 = ((x409-(x410&x411))^x412);

	if (t94 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x413 = 3LLU;
	int64_t x414 = 1LL;
	int16_t x415 = 1;
	uint8_t x416 = 0U;
	volatile uint64_t t95 = 14688LLU;

	t95 = ((x413-(x414&x415))^x416);

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = 116847U;
	uint64_t x418 = UINT64_MAX;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t96 = 139529059480201825LLU;

	t96 = ((x417-(x418&x419))^x420);

	if (t96 != 2147371120LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x421 = -1;
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = INT32_MAX;
	volatile uint64_t t97 = 20415965975485290LLU;

	t97 = ((x421-(x422&x423))^x424);

	if (t97 != 2147450880LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x425 = -1;
	uint32_t x427 = 51099254U;
	int64_t t98 = 14163LL;

	t98 = ((x425-(x426&x427))^x428);

	if (t98 != 17511942LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x429 = 1840383947U;
	volatile uint32_t x430 = UINT32_MAX;
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = INT8_MIN;

	t99 = ((x429-(x430&x431))^x432);

	if (t99 != 2454583372LLU) { NG(); } else { ; }
	
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

