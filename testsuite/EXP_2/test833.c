#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
uint32_t x7 = 172747711U;
int16_t x14 = -3;
uint64_t x15 = UINT64_MAX;
int64_t x16 = INT64_MIN;
uint64_t t3 = 11673803052LLU;
int16_t x18 = -10140;
uint32_t x20 = UINT32_MAX;
static uint32_t t4 = 65U;
int64_t x23 = -1LL;
static uint64_t x43 = UINT64_MAX;
int64_t x44 = -35333706412504168LL;
uint16_t x48 = UINT16_MAX;
int32_t t11 = 1;
int16_t x51 = 4;
volatile int32_t t12 = 20798;
int8_t x57 = INT8_MAX;
int16_t x58 = INT16_MAX;
static volatile int8_t x63 = INT8_MAX;
int8_t x74 = INT8_MIN;
int16_t x75 = 14180;
int64_t x77 = -1LL;
int16_t x79 = -1;
int32_t x82 = -1;
volatile uint32_t t20 = 60662U;
volatile int64_t x87 = 2214415653774557201LL;
int64_t t21 = -5LL;
int8_t x89 = INT8_MIN;
int16_t x94 = -1;
volatile uint64_t x97 = 19325167566LLU;
static uint64_t t24 = 1306791LLU;
int64_t x108 = INT64_MIN;
int32_t x111 = -1434;
uint32_t x113 = 0U;
int16_t x116 = 1612;
uint32_t t28 = 437069U;
static volatile uint64_t t30 = 29548958LLU;
int32_t x129 = INT32_MIN;
uint64_t x133 = 14753612446LLU;
uint64_t t32 = 797394422624773930LLU;
static int32_t x138 = INT32_MAX;
static volatile int16_t x142 = INT16_MAX;
volatile int8_t x153 = 0;
int64_t t36 = -3608958478LL;
volatile uint64_t t37 = 172072233111051LLU;
static volatile int16_t x166 = INT16_MIN;
int64_t x167 = -1LL;
volatile int32_t x169 = 0;
uint16_t x175 = 1713U;
uint64_t x176 = UINT64_MAX;
int32_t x178 = INT32_MIN;
int64_t x181 = INT64_MIN;
static int16_t x183 = -323;
volatile int32_t x184 = -1;
int32_t x190 = INT32_MIN;
int64_t x192 = -60659467LL;
int32_t x193 = -27;
volatile int64_t x198 = 4943LL;
int16_t x200 = INT16_MIN;
volatile int64_t t46 = 1066787260889LL;
volatile uint16_t x209 = UINT16_MAX;
int8_t x210 = INT8_MAX;
int32_t x212 = -1;
int32_t x214 = INT32_MIN;
uint32_t x221 = 432128189U;
int64_t x229 = INT64_MIN;
uint64_t t54 = 2590200612111LLU;
int64_t x245 = INT64_MIN;
int32_t t57 = 0;
static int64_t x261 = INT64_MIN;
uint16_t x272 = 1U;
static uint64_t x278 = UINT64_MAX;
static int64_t x282 = INT64_MIN;
int32_t x285 = -3995;
uint16_t x289 = 15275U;
static volatile uint64_t t64 = 595074597507877LLU;
uint32_t x294 = UINT32_MAX;
int16_t x303 = INT16_MAX;
int8_t x319 = 1;
int8_t x324 = INT8_MIN;
volatile int16_t x326 = INT16_MIN;
static volatile int64_t t73 = 1704LL;
uint32_t x337 = 1U;
uint16_t x340 = 248U;
uint32_t x344 = UINT32_MAX;
int16_t x347 = INT16_MIN;
int64_t x353 = INT64_MIN;
uint32_t x357 = UINT32_MAX;
volatile int64_t x359 = -505LL;
static int8_t x367 = INT8_MAX;
uint64_t x377 = 7022LLU;
uint8_t x381 = 1U;
volatile int64_t x382 = -1LL;
uint32_t x390 = 48U;
int64_t x402 = INT64_MIN;
int64_t x405 = INT64_MIN;
uint32_t x406 = UINT32_MAX;
static int8_t x410 = -1;
int64_t x419 = INT64_MAX;
static int32_t x421 = -3;
uint64_t x423 = UINT64_MAX;
static int8_t x425 = -11;
int16_t x426 = -6;
static int16_t x427 = -309;
static uint16_t x454 = 30U;
uint8_t x455 = UINT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 6305U;
	volatile uint64_t x2 = 60744LLU;
	uint32_t x4 = 1U;
	uint64_t t0 = 11417956844257LLU;

	t0 = ((x1^(x2%x3))+x4);

	if (t0 != 62954LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	static int64_t x6 = -2075287572882LL;
	static int8_t x8 = INT8_MIN;
	int64_t t1 = 1192546767845LL;

	t1 = ((x5^(x6%x7))+x8);

	if (t1 != 9223372036785455041LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 177927362LLU;
	uint32_t x10 = UINT32_MAX;
	uint8_t x11 = 3U;
	volatile uint32_t x12 = 0U;
	uint64_t t2 = 1119684308613LLU;

	t2 = ((x9^(x10%x11))+x12);

	if (t2 != 177927362LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 5628348U;

	t3 = ((x13^(x14%x15))+x16);

	if (t3 != 9223372036849147457LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint16_t x19 = 15U;

	t4 = ((x17^(x18%x19))+x20);

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int16_t x22 = INT16_MIN;
	uint32_t x24 = 451644801U;
	static int64_t t5 = -1018LL;

	t5 = ((x21^(x22%x23))+x24);

	if (t5 != -1695838847LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 7879U;
	static uint16_t x28 = 6805U;
	static volatile uint32_t t6 = 103U;

	t6 = ((x25^(x26%x27))+x28);

	if (t6 != 9293U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	static int64_t x31 = -1LL;
	int32_t x32 = INT32_MAX;
	int64_t t7 = -1119021356435503LL;

	t7 = ((x29^(x30%x31))+x32);

	if (t7 != 6442450942LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -9228;
	int32_t x34 = INT32_MAX;
	uint32_t x35 = 2U;
	volatile uint64_t x36 = 112406156392LLU;
	uint64_t t8 = 1LLU;

	t8 = ((x33^(x34%x35))+x36);

	if (t8 != 116701114461LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 2U;
	static uint16_t x38 = UINT16_MAX;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	volatile uint32_t t9 = 427869U;

	t9 = ((x37^(x38%x39))+x40);

	if (t9 != 2147483650U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -34059;
	int8_t x42 = -2;
	volatile uint64_t t10 = 4096191242870LLU;

	t10 = ((x41^(x42%x43))+x44);

	if (t10 != 18411410367297081507LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	uint16_t x46 = UINT16_MAX;
	int16_t x47 = INT16_MAX;

	t11 = ((x45^(x46%x47))+x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = 2;
	int16_t x52 = INT16_MIN;

	t12 = ((x49^(x50%x51))+x52);

	if (t12 != 32765) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int16_t x54 = 9606;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = UINT8_MAX;
	int64_t t13 = -13974572192LL;

	t13 = ((x53^(x54%x55))+x56);

	if (t13 != -9223372036854775382LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x59 = -1;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = 28781636;

	t14 = ((x57^(x58%x59))+x60);

	if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -1LL;

	t15 = ((x61^(x62%x63))+x64);

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 87U;
	int32_t x66 = 230057929;
	volatile int64_t x67 = 4382510984449199LL;
	volatile int8_t x68 = 0;
	static volatile int64_t t16 = -62618753818LL;

	t16 = ((x65^(x66%x67))+x68);

	if (t16 != 230057886LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t17 = 25293028LLU;

	t17 = ((x69^(x70%x71))+x72);

	if (t17 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	uint8_t x76 = 24U;
	static volatile int32_t t18 = 23238211;

	t18 = ((x73^(x74%x75))+x76);

	if (t18 != 151) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x78 = 22700LLU;
	volatile int8_t x80 = -1;
	uint64_t t19 = 63449841583LLU;

	t19 = ((x77^(x78%x79))+x80);

	if (t19 != 18446744073709528914LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 175271745U;
	static uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;

	t20 = ((x81^(x82%x83))+x84);

	if (t20 != 4119662782U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 850756U;
	int16_t x86 = INT16_MIN;
	static uint16_t x88 = 126U;

	t21 = ((x85^(x86%x87))+x88);

	if (t21 != -820286LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 14469205345584LLU;
	volatile uint8_t x91 = UINT8_MAX;
	static int8_t x92 = -1;
	volatile uint64_t t22 = 111LLU;

	t22 = ((x89^(x90%x91))+x92);

	if (t22 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 15U;
	volatile uint8_t x95 = UINT8_MAX;
	static int32_t x96 = -46;
	int32_t t23 = 9;

	t23 = ((x93^(x94%x95))+x96);

	if (t23 != -62) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x98 = INT8_MIN;
	static int16_t x99 = -219;
	uint16_t x100 = 27786U;

	t24 = ((x97^(x98%x99))+x100);

	if (t24 != 18446744054384411864LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 1505;
	uint16_t x102 = 55U;
	int8_t x103 = 60;
	int32_t x104 = -497737883;
	volatile int32_t t25 = 863;

	t25 = ((x101^(x102%x103))+x104);

	if (t25 != -497736389) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 1551U;
	volatile uint8_t x106 = 10U;
	int64_t x107 = -1LL;
	int64_t t26 = 4LL;

	t26 = ((x105^(x106%x107))+x108);

	if (t26 != -9223372036854774257LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = UINT32_MAX;
	uint64_t x112 = UINT64_MAX;
	uint64_t t27 = 20082824LLU;

	t27 = ((x109^(x110%x111))+x112);

	if (t27 != 4294935960LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = -4354;

	t28 = ((x113^(x114%x115))+x116);

	if (t28 != 5965U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 97131641U;
	static int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	volatile int32_t x124 = INT32_MIN;
	int64_t t29 = -9LL;

	t29 = ((x121^(x122%x123))+x124);

	if (t29 != -2244633479LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 799287585232910788LLU;
	uint16_t x126 = 35U;
	int32_t x127 = -1;
	static uint8_t x128 = 49U;

	t30 = ((x125^(x126%x127))+x128);

	if (t30 != 799287585232910837LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MAX;
	uint32_t x131 = UINT32_MAX;
	uint16_t x132 = UINT16_MAX;
	uint32_t t31 = 144027495U;

	t31 = ((x129^(x130%x131))+x132);

	if (t31 != 2147549310U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x134 = 60LLU;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;

	t32 = ((x133^(x134%x135))+x136);

	if (t32 != 14753612705LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x137 = UINT32_MAX;
	volatile int8_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile uint32_t t33 = 15U;

	t33 = ((x137^(x138%x139))+x140);

	if (t33 != 254U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x141 = UINT8_MAX;
	volatile int64_t x143 = INT64_MAX;
	static volatile uint8_t x144 = UINT8_MAX;
	int64_t t34 = -179415384604439200LL;

	t34 = ((x141^(x142%x143))+x144);

	if (t34 != 32767LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 419U;
	uint64_t x150 = 110733LLU;
	volatile int32_t x151 = INT32_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t35 = 23743LLU;

	t35 = ((x149^(x150%x151))+x152);

	if (t35 != 110893LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x154 = INT64_MAX;
	uint16_t x155 = 118U;
	static uint32_t x156 = UINT32_MAX;

	t36 = ((x153^(x154%x155))+x156);

	if (t36 != 4294967326LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	static uint64_t x159 = 24306LLU;
	int64_t x160 = -1LL;

	t37 = ((x157^(x158%x159))+x160);

	if (t37 != 18446744073709534691LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	uint8_t x162 = 22U;
	volatile uint16_t x163 = UINT16_MAX;
	uint32_t x164 = 1U;
	uint32_t t38 = 44U;

	t38 = ((x161^(x162%x163))+x164);

	if (t38 != 234U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = 51;
	uint8_t x168 = UINT8_MAX;
	int64_t t39 = -1LL;

	t39 = ((x165^(x166%x167))+x168);

	if (t39 != 306LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x170 = 1253LLU;
	static int32_t x171 = -1;
	int16_t x172 = 3;
	volatile uint64_t t40 = 16LLU;

	t40 = ((x169^(x170%x171))+x172);

	if (t40 != 1256LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = 1;
	uint64_t t41 = 226943095009284LLU;

	t41 = ((x173^(x174%x175))+x176);

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -1;
	int16_t x179 = INT16_MIN;
	int16_t x180 = -1;
	volatile int32_t t42 = -4962;

	t42 = ((x177^(x178%x179))+x180);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = INT8_MIN;
	volatile int64_t t43 = -217LL;

	t43 = ((x181^(x182%x183))+x184);

	if (t43 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	static int64_t t44 = -210606706294043967LL;

	t44 = ((x189^(x190%x191))+x192);

	if (t44 != -60692235LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x194 = UINT32_MAX;
	volatile uint8_t x195 = 46U;
	uint32_t x196 = UINT32_MAX;
	uint32_t t45 = 1718283U;

	t45 = ((x193^(x194%x195))+x196);

	if (t45 != 4294967277U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x199 = INT16_MAX;

	t46 = ((x197^(x198%x199))+x200);

	if (t46 != 4294929584LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	static int16_t x202 = INT16_MIN;
	uint32_t x203 = 13957U;
	uint16_t x204 = 0U;
	volatile uint32_t t47 = 211U;

	t47 = ((x201^(x202%x203))+x204);

	if (t47 != 4294964549U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = 7837;
	int64_t x206 = -1LL;
	volatile int64_t x207 = 90126682738310793LL;
	int16_t x208 = -1;
	volatile int64_t t48 = 68775215LL;

	t48 = ((x205^(x206%x207))+x208);

	if (t48 != -7839LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x211 = -1;
	volatile int32_t t49 = 40;

	t49 = ((x209^(x210%x211))+x212);

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = 1;
	static volatile int64_t x215 = -824857LL;
	int16_t x216 = -1528;
	volatile int64_t t50 = 27642749339945LL;

	t50 = ((x213^(x214%x215))+x216);

	if (t50 != -382406LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x222 = UINT64_MAX;
	static int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	uint64_t t51 = 281466LLU;

	t51 = ((x221^(x222%x223))+x224);

	if (t51 != 18446744073277423426LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -9;
	int64_t x226 = -266473448684793128LL;
	uint16_t x227 = 10U;
	uint16_t x228 = 151U;
	volatile int64_t t52 = -1051366579789824490LL;

	t52 = ((x225^(x226%x227))+x228);

	if (t52 != 166LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x230 = -1;
	static volatile int64_t x231 = 148654105367243622LL;
	static int64_t x232 = INT64_MIN;
	int64_t t53 = 609923442LL;

	t53 = ((x229^(x230%x231))+x232);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -1;
	static uint64_t x242 = 20592670933308333LLU;
	int32_t x243 = 118966;
	int16_t x244 = INT16_MAX;

	t54 = ((x241^(x242%x243))+x244);

	if (t54 != 3987LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = INT8_MAX;
	static volatile uint16_t x247 = 254U;
	uint64_t x248 = 271562185725LLU;
	uint64_t t55 = 1466254291463LLU;

	t55 = ((x245^(x246%x247))+x248);

	if (t55 != 9223372308416961660LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x249 = 17639381LLU;
	int16_t x250 = -1;
	static uint8_t x251 = UINT8_MAX;
	static int16_t x252 = -1;
	volatile uint64_t t56 = 4634530373596910403LLU;

	t56 = ((x249^(x250%x251))+x252);

	if (t56 != 18446744073691912233LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = 1;
	int16_t x254 = -1;
	static int16_t x255 = INT16_MIN;
	int32_t x256 = 43453;

	t57 = ((x253^(x254%x255))+x256);

	if (t57 != 43451) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MAX;
	int32_t x259 = 2;
	int16_t x260 = INT16_MAX;
	int32_t t58 = 18;

	t58 = ((x257^(x258%x259))+x260);

	if (t58 != 32640) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x262 = -110633706996LL;
	uint64_t x263 = 87924271656391LLU;
	static uint64_t x264 = 783193359330LLU;
	volatile uint64_t t59 = 187060260041987LLU;

	t59 = ((x261^(x262%x263))+x264);

	if (t59 != 9223428741069835176LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x269 = UINT64_MAX;
	volatile uint8_t x270 = UINT8_MAX;
	uint8_t x271 = UINT8_MAX;
	uint64_t t60 = 56064LLU;

	t60 = ((x269^(x270%x271))+x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MIN;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t61 = 4166355233LLU;

	t61 = ((x277^(x278%x279))+x280);

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x281 = 21U;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t62 = 286517532541643601LL;

	t62 = ((x281^(x282%x283))+x284);

	if (t62 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = 21U;
	volatile int64_t t63 = -61342528277726997LL;

	t63 = ((x285^(x286%x287))+x288);

	if (t63 != 28794LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x290 = INT32_MIN;
	volatile uint16_t x291 = 4U;
	uint64_t x292 = 6797LLU;

	t64 = ((x289^(x290%x291))+x292);

	if (t64 != 22072LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 3612229225092323533LLU;
	int64_t x295 = 1452543088798172LL;
	volatile uint16_t x296 = UINT16_MAX;
	static volatile uint64_t t65 = 61LLU;

	t65 = ((x293^(x294%x295))+x296);

	if (t65 != 3612229225061771057LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x297 = UINT16_MAX;
	static volatile int64_t x298 = -164334267942913687LL;
	volatile int16_t x299 = -1;
	int16_t x300 = INT16_MAX;
	int64_t t66 = 512994LL;

	t66 = ((x297^(x298%x299))+x300);

	if (t66 != 98302LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = INT16_MAX;
	static int64_t x302 = -36785179297934LL;
	uint32_t x304 = 16154109U;
	volatile int64_t t67 = 4191336255402924LL;

	t67 = ((x301^(x302%x303))+x304);

	if (t67 != 16153460LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 7319U;
	int8_t x306 = 2;
	volatile int8_t x307 = INT8_MAX;
	int32_t x308 = 6241;
	int32_t t68 = -1280367;

	t68 = ((x305^(x306%x307))+x308);

	if (t68 != 13558) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x309 = INT32_MAX;
	static int8_t x310 = -4;
	uint64_t x311 = 4817LLU;
	int8_t x312 = -1;
	static volatile uint64_t t69 = 1207549451431019919LLU;

	t69 = ((x309^(x310%x311))+x312);

	if (t69 != 2147482281LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = 2044;
	static volatile int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = 1805U;
	static volatile int32_t t70 = 28809690;

	t70 = ((x313^(x314%x315))+x316);

	if (t70 != -241) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	uint64_t t71 = 7685915644319LLU;

	t71 = ((x317^(x318%x319))+x320);

	if (t71 != 32639LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = INT16_MIN;
	volatile int32_t t72 = -181;

	t72 = ((x321^(x322%x323))+x324);

	if (t72 != -32769) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = INT8_MAX;
	int64_t x327 = INT64_MAX;
	int64_t x328 = -7526812LL;

	t73 = ((x325^(x326%x327))+x328);

	if (t73 != -7559453LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = INT64_MAX;
	static uint64_t x330 = 643534LLU;
	volatile int8_t x331 = INT8_MIN;
	int32_t x332 = -10612;
	static volatile uint64_t t74 = 95LLU;

	t74 = ((x329^(x330%x331))+x332);

	if (t74 != 9223372036854121661LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x338 = INT16_MIN;
	static int64_t x339 = INT64_MIN;
	int64_t t75 = -100LL;

	t75 = ((x337^(x338%x339))+x340);

	if (t75 != -32519LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x341 = 51;
	int32_t x342 = INT32_MIN;
	volatile uint32_t x343 = 540683077U;
	volatile uint32_t t76 = 137936U;

	t76 = ((x341^(x342%x343))+x344);

	if (t76 != 525434369U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x345 = INT32_MIN;
	volatile int8_t x346 = -1;
	int16_t x348 = -4175;
	int32_t t77 = 0;

	t77 = ((x345^(x346%x347))+x348);

	if (t77 != 2147479472) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x349 = 114574U;
	int32_t x350 = 2;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = -1LL;
	static volatile int64_t t78 = -2929973813392042LL;

	t78 = ((x349^(x350%x351))+x352);

	if (t78 != 114571LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x354 = 2353;
	static uint64_t x355 = 962725243296116LLU;
	uint8_t x356 = 6U;
	volatile uint64_t t79 = 259810080263155LLU;

	t79 = ((x353^(x354%x355))+x356);

	if (t79 != 9223372036854778167LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x358 = INT8_MIN;
	int64_t x360 = -1LL;
	static int64_t t80 = 30401409875886LL;

	t80 = ((x357^(x358%x359))+x360);

	if (t80 != -4294967170LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = -139913341649730LL;
	uint64_t x366 = 2866938944945LLU;
	int8_t x368 = -3;
	uint64_t t81 = 0LLU;

	t81 = ((x365^(x366%x367))+x368);

	if (t81 != 18446604160367901865LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = UINT16_MAX;
	static int16_t x370 = -1577;
	int16_t x371 = -14;
	volatile uint16_t x372 = 250U;
	int32_t t82 = -1;

	t82 = ((x369^(x370%x371))+x372);

	if (t82 != -65278) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x373 = -1;
	static uint64_t x374 = 497572363LLU;
	uint64_t x375 = 59524951324541LLU;
	int64_t x376 = -1LL;
	uint64_t t83 = 27964LLU;

	t83 = ((x373^(x374%x375))+x376);

	if (t83 != 18446744073211979251LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MIN;
	uint8_t x380 = UINT8_MAX;
	uint64_t t84 = 1LLU;

	t84 = ((x377^(x378%x379))+x380);

	if (t84 != 18446744073709526125LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x383 = INT64_MAX;
	int8_t x384 = INT8_MIN;
	volatile int64_t t85 = -114670LL;

	t85 = ((x381^(x382%x383))+x384);

	if (t85 != -130LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x389 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	static uint32_t t86 = 116072176U;

	t86 = ((x389^(x390%x391))+x392);

	if (t86 != 4294934607U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x393 = -1;
	int32_t x394 = -1489;
	volatile int32_t x395 = -10;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t87 = 1154;

	t87 = ((x393^(x394%x395))+x396);

	if (t87 != -32760) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = -57;
	static int64_t x398 = INT64_MIN;
	static uint64_t x399 = 118397367481818LLU;
	volatile int8_t x400 = INT8_MIN;
	static uint64_t t88 = 127473883576LLU;

	t88 = ((x397^(x398%x399))+x400);

	if (t88 != 18446645361055879721LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint32_t x403 = UINT32_MAX;
	int64_t x404 = -1LL;
	static volatile uint64_t t89 = 7LLU;

	t89 = ((x401^(x402%x403))+x404);

	if (t89 != 2147483646LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x407 = 3U;
	volatile int16_t x408 = 38;
	int64_t t90 = -628LL;

	t90 = ((x405^(x406%x407))+x408);

	if (t90 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x409 = -102;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 100U;
	static int32_t t91 = -4226;

	t91 = ((x409^(x410%x411))+x412);

	if (t91 != 201) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x413 = -1;
	volatile int32_t x414 = -125567;
	volatile uint8_t x415 = UINT8_MAX;
	uint8_t x416 = 15U;
	static volatile int32_t t92 = -1852322;

	t92 = ((x413^(x414%x415))+x416);

	if (t92 != 121) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = 27U;
	int16_t x418 = 0;
	uint64_t x420 = 187225523LLU;
	volatile uint64_t t93 = 48543332LLU;

	t93 = ((x417^(x418%x419))+x420);

	if (t93 != 187225550LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x422 = -215;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t94 = 261LLU;

	t94 = ((x421^(x422%x423))+x424);

	if (t94 != 211LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x428 = UINT64_MAX;
	uint64_t t95 = 2036100745296689LLU;

	t95 = ((x425^(x426%x427))+x428);

	if (t95 != 14LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x429 = INT32_MAX;
	uint16_t x430 = 226U;
	uint64_t x431 = 351105658837LLU;
	int8_t x432 = 5;
	uint64_t t96 = 3994705649153818LLU;

	t96 = ((x429^(x430%x431))+x432);

	if (t96 != 2147483426LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = -1;
	uint32_t x438 = 6826U;
	int32_t x439 = 3;
	int16_t x440 = 9074;
	uint32_t t97 = 14U;

	t97 = ((x437^(x438%x439))+x440);

	if (t97 != 9072U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MAX;
	static int64_t x446 = -1LL;
	int64_t x447 = INT64_MIN;
	int32_t x448 = INT32_MAX;
	volatile int64_t t98 = -3836LL;

	t98 = ((x445^(x446%x447))+x448);

	if (t98 != 2147483519LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -54827338593919671LL;
	uint16_t x456 = UINT16_MAX;
	volatile int64_t t99 = -61733LL;

	t99 = ((x453^(x454%x455))+x456);

	if (t99 != -54827338593854122LL) { NG(); } else { ; }
	
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

