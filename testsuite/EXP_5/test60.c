#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
int64_t x7 = INT64_MIN;
int8_t x10 = INT8_MIN;
uint8_t x11 = UINT8_MAX;
int32_t t2 = -261479683;
int32_t x18 = INT32_MAX;
volatile int32_t t3 = 148747;
static uint64_t x25 = UINT64_MAX;
uint8_t x30 = 0U;
int64_t x31 = INT64_MIN;
int64_t x42 = 9623LL;
volatile int8_t x44 = 6;
uint64_t x47 = UINT64_MAX;
int32_t t10 = 722031;
int64_t x61 = -1212LL;
int32_t t13 = -8092502;
volatile uint64_t x68 = 49981500859502734LLU;
static volatile uint64_t x73 = 70747889221085593LLU;
static int64_t x75 = -1LL;
volatile uint64_t x78 = UINT64_MAX;
uint16_t x80 = 114U;
int32_t t16 = 537675715;
volatile int64_t x82 = INT64_MIN;
uint16_t x86 = 1U;
volatile int16_t x88 = INT16_MIN;
int64_t x92 = INT64_MIN;
static int32_t t19 = 54335951;
volatile uint64_t x93 = 91314370048485908LLU;
static int32_t x94 = INT32_MIN;
volatile int64_t x101 = INT64_MIN;
static int32_t x104 = INT32_MIN;
volatile int32_t t22 = 3993791;
int16_t x109 = INT16_MAX;
uint32_t x118 = UINT32_MAX;
uint64_t x122 = UINT64_MAX;
static uint32_t x126 = 311288U;
int16_t x135 = -1808;
int32_t t30 = 2524;
static uint16_t x147 = 3605U;
uint32_t x149 = 16236955U;
uint16_t x151 = 3755U;
int32_t x155 = INT32_MIN;
static int64_t x170 = -1LL;
static int32_t t38 = 211960;
int16_t x173 = -1;
volatile int16_t x175 = INT16_MAX;
uint16_t x179 = UINT16_MAX;
static int8_t x180 = -1;
int8_t x182 = INT8_MIN;
volatile int16_t x191 = INT16_MIN;
volatile int64_t x204 = INT64_MIN;
int32_t x207 = INT32_MIN;
int16_t x208 = INT16_MIN;
int16_t x209 = INT16_MIN;
static uint32_t x223 = 612U;
int32_t t49 = 1345;
static volatile int64_t x229 = -1LL;
int8_t x230 = 14;
int32_t x231 = INT32_MIN;
int64_t x233 = INT64_MIN;
uint32_t x234 = 106567942U;
uint16_t x247 = 0U;
int64_t x250 = 8520192129443LL;
int16_t x251 = INT16_MIN;
int32_t t56 = 47;
static int8_t x258 = -1;
uint64_t x260 = UINT64_MAX;
static volatile int16_t x277 = INT16_MIN;
static uint8_t x282 = UINT8_MAX;
uint64_t x283 = 194467580737315055LLU;
uint32_t x289 = 934U;
int16_t x305 = INT16_MIN;
static int8_t x307 = 10;
int8_t x311 = -1;
volatile int32_t t67 = 3;
static uint16_t x315 = 0U;
int32_t x319 = INT32_MIN;
int32_t t69 = 260219;
uint16_t x326 = UINT16_MAX;
uint16_t x327 = UINT16_MAX;
uint32_t x331 = 14769797U;
int32_t t72 = 476747439;
uint64_t x344 = UINT64_MAX;
int64_t x346 = INT64_MIN;
static uint16_t x347 = UINT16_MAX;
uint64_t x357 = 1LLU;
int8_t x360 = -1;
uint8_t x365 = 5U;
int16_t x369 = INT16_MAX;
static volatile uint64_t x370 = UINT64_MAX;
uint64_t x371 = 122560428798LLU;
volatile int8_t x384 = -1;
int32_t x387 = 10635;
volatile uint8_t x392 = 6U;
uint64_t x393 = 119LLU;
volatile int16_t x394 = INT16_MIN;
int64_t x395 = 1094287188194238LL;
uint8_t x397 = 2U;
int16_t x408 = -1;
uint8_t x412 = UINT8_MAX;
int64_t x427 = -1LL;
int32_t t97 = 31;
int8_t x440 = INT8_MIN;


void f0(void) {
	static volatile uint8_t x2 = 24U;
	uint16_t x3 = 1U;
	uint16_t x4 = 11988U;
	int32_t t0 = -1;

	t0 = (x1==((x2+x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x6 = UINT16_MAX;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 21;

	t1 = (x5==((x6+x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -8;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9==((x10+x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x19 = -1;
	static int32_t x20 = -1;

	t3 = (x17==((x18+x19)%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 31U;
	volatile int64_t x22 = -817430960938LL;
	volatile int32_t x23 = INT32_MIN;
	uint16_t x24 = 9388U;
	volatile int32_t t4 = 23972317;

	t4 = (x21==((x22+x23)%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	static int64_t x28 = -1LL;
	int32_t t5 = -9167;

	t5 = (x25==((x26+x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = 227;

	t6 = (x29==((x30+x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	uint16_t x34 = 41U;
	static uint32_t x35 = 6U;
	static int16_t x36 = -99;
	volatile int32_t t7 = -1;

	t7 = (x33==((x34+x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -1LL;
	uint8_t x38 = 21U;
	volatile int32_t x39 = -1;
	int16_t x40 = -1;
	volatile int32_t t8 = -2;

	t8 = (x37==((x38+x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int32_t t9 = -12672;

	t9 = (x41==((x42+x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	uint8_t x48 = 2U;

	t10 = (x45==((x46+x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 740332530U;
	int32_t x54 = INT32_MIN;
	uint64_t x55 = 4625691454561LLU;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t11 = -27761;

	t11 = (x53==((x54+x55)%x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	uint8_t x58 = 2U;
	int32_t x59 = -1;
	int32_t x60 = -1;
	volatile int32_t t12 = 1163835;

	t12 = (x57==((x58+x59)%x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = 197U;
	volatile int16_t x63 = INT16_MIN;
	int32_t x64 = -128973084;

	t13 = (x61==((x62+x63)%x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = -6;
	int64_t x67 = 3343517366957774635LL;
	volatile int32_t t14 = -12092432;

	t14 = (x65==((x66+x67)%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = -4;
	int32_t x76 = 1040451;
	int32_t t15 = 173;

	t15 = (x73==((x74+x75)%x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 6;
	static uint32_t x79 = 107U;

	t16 = (x77==((x78+x79)%x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 6396LL;
	static volatile int32_t x83 = 37;
	uint64_t x84 = 197LLU;
	int32_t t17 = 1992;

	t17 = (x81==((x82+x83)%x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 10LL;
	int8_t x87 = 25;
	volatile int32_t t18 = -253928120;

	t18 = (x85==((x86+x87)%x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MAX;
	uint64_t x91 = UINT64_MAX;

	t19 = (x89==((x90+x91)%x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x95 = 206635842;
	int64_t x96 = -1112794431857766LL;
	static volatile int32_t t20 = -8;

	t20 = (x93==((x94+x95)%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -1;
	uint32_t x98 = 1276U;
	int8_t x99 = INT8_MIN;
	volatile int64_t x100 = INT64_MIN;
	int32_t t21 = 0;

	t21 = (x97==((x98+x99)%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = 1;
	int32_t x103 = INT32_MIN;

	t22 = (x101==((x102+x103)%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x110 = 0;
	int8_t x111 = INT8_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	volatile int32_t t23 = -518988;

	t23 = (x109==((x110+x111)%x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = 9;
	uint8_t x114 = 0U;
	uint32_t x115 = 1880U;
	int64_t x116 = -1LL;
	static volatile int32_t t24 = 1;

	t24 = (x113==((x114+x115)%x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = -1;
	volatile int32_t t25 = -3904;

	t25 = (x117==((x118+x119)%x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	volatile int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MAX;
	volatile int32_t t26 = 41853;

	t26 = (x121==((x122+x123)%x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	static volatile int64_t x127 = -2663612LL;
	int16_t x128 = 7;
	int32_t t27 = -14093217;

	t27 = (x125==((x126+x127)%x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 144U;
	int32_t x131 = -9680;
	int64_t x132 = INT64_MIN;
	volatile int32_t t28 = 1;

	t28 = (x129==((x130+x131)%x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x133 = INT64_MAX;
	static volatile uint64_t x134 = 866LLU;
	volatile int32_t x136 = -30567334;
	int32_t t29 = -20367649;

	t29 = (x133==((x134+x135)%x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -256665;
	uint8_t x138 = 1U;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MIN;

	t30 = (x137==((x138+x139)%x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = 1;
	int64_t x142 = -3102478369141LL;
	int32_t x143 = 349740;
	int16_t x144 = 245;
	volatile int32_t t31 = 936768870;

	t31 = (x141==((x142+x143)%x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	int8_t x148 = -1;
	int32_t t32 = 88;

	t32 = (x145==((x146+x147)%x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x150 = UINT32_MAX;
	uint8_t x152 = 70U;
	int32_t t33 = 298546576;

	t33 = (x149==((x150+x151)%x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 11U;
	volatile int64_t x154 = INT64_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	int32_t t34 = 3392906;

	t34 = (x153==((x154+x155)%x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x157 = 112748448911424789LLU;
	uint64_t x158 = UINT64_MAX;
	static int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	static int32_t t35 = 73;

	t35 = (x157==((x158+x159)%x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = -5;
	volatile uint64_t x163 = 5091600422LLU;
	volatile uint16_t x164 = 11U;
	int32_t t36 = 16;

	t36 = (x161==((x162+x163)%x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = -1;
	int64_t x166 = INT64_MIN;
	static uint8_t x167 = 13U;
	int16_t x168 = -1;
	volatile int32_t t37 = 44;

	t37 = (x165==((x166+x167)%x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 259939922U;
	uint64_t x171 = 13649857LLU;
	int16_t x172 = INT16_MIN;

	t38 = (x169==((x170+x171)%x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = -134948018491LL;
	uint32_t x176 = UINT32_MAX;
	static volatile int32_t t39 = 552;

	t39 = (x173==((x174+x175)%x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = 7620;
	volatile int32_t t40 = 45;

	t40 = (x177==((x178+x179)%x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = UINT16_MAX;
	static int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	volatile int32_t t41 = -7339;

	t41 = (x181==((x182+x183)%x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = -1LL;
	int8_t x192 = INT8_MAX;
	static volatile int32_t t42 = -21;

	t42 = (x189==((x190+x191)%x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MAX;
	int16_t x194 = -1;
	int16_t x195 = -7;
	uint32_t x196 = 61766U;
	static volatile int32_t t43 = -856090;

	t43 = (x193==((x194+x195)%x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = 1;
	int32_t x202 = INT32_MIN;
	int8_t x203 = 33;
	volatile int32_t t44 = -31276;

	t44 = (x201==((x202+x203)%x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x205 = 892U;
	volatile int16_t x206 = INT16_MAX;
	int32_t t45 = -133;

	t45 = (x205==((x206+x207)%x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x210 = 2544LLU;
	uint8_t x211 = 4U;
	uint8_t x212 = UINT8_MAX;
	int32_t t46 = -17;

	t46 = (x209==((x210+x211)%x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x213 = 61033649U;
	int8_t x214 = INT8_MIN;
	int8_t x215 = -1;
	volatile int16_t x216 = INT16_MIN;
	int32_t t47 = -6478142;

	t47 = (x213==((x214+x215)%x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = 35603746868845LL;
	int64_t x218 = -21321215228271467LL;
	volatile uint64_t x219 = UINT64_MAX;
	int64_t x220 = INT64_MAX;
	volatile int32_t t48 = -925143275;

	t48 = (x217==((x218+x219)%x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = 12;
	int8_t x222 = 22;
	uint32_t x224 = 741008135U;

	t49 = (x221==((x222+x223)%x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x232 = 172899543487199LLU;
	volatile int32_t t50 = -756743274;

	t50 = (x229==((x230+x231)%x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x235 = 10491493U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t51 = -94913602;

	t51 = (x233==((x234+x235)%x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = -1;
	volatile uint64_t x238 = 12402189LLU;
	int8_t x239 = 12;
	uint64_t x240 = 118LLU;
	volatile int32_t t52 = 252;

	t52 = (x237==((x238+x239)%x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;
	int64_t x244 = INT64_MAX;
	volatile int32_t t53 = 6852;

	t53 = (x241==((x242+x243)%x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -1LL;
	static int8_t x246 = INT8_MAX;
	volatile int8_t x248 = -1;
	volatile int32_t t54 = -3421;

	t54 = (x245==((x246+x247)%x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x252 = -29;
	int32_t t55 = 0;

	t55 = (x249==((x250+x251)%x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MAX;
	uint64_t x254 = 1607037031531046LLU;
	int16_t x255 = -1;
	int64_t x256 = INT64_MAX;

	t56 = (x253==((x254+x255)%x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x257 = INT8_MAX;
	uint64_t x259 = UINT64_MAX;
	volatile int32_t t57 = -15173949;

	t57 = (x257==((x258+x259)%x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -524339745;
	static int16_t x262 = -1;
	volatile int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MAX;
	volatile int32_t t58 = 14;

	t58 = (x261==((x262+x263)%x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x265 = UINT8_MAX;
	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MAX;
	int64_t x268 = INT64_MIN;
	int32_t t59 = 1582841;

	t59 = (x265==((x266+x267)%x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x273 = 259996U;
	volatile int64_t x274 = -3949340820445089064LL;
	static volatile int32_t x275 = -65458;
	uint64_t x276 = 52LLU;
	volatile int32_t t60 = -3;

	t60 = (x273==((x274+x275)%x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x278 = INT64_MIN;
	volatile uint64_t x279 = UINT64_MAX;
	uint32_t x280 = 1343851U;
	volatile int32_t t61 = -11;

	t61 = (x277==((x278+x279)%x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = INT32_MIN;
	volatile uint32_t x284 = 27U;
	static volatile int32_t t62 = 43;

	t62 = (x281==((x282+x283)%x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x290 = UINT8_MAX;
	int8_t x291 = -19;
	static int32_t x292 = INT32_MAX;
	static volatile int32_t t63 = 290;

	t63 = (x289==((x290+x291)%x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 137630861453661LLU;
	uint64_t x294 = 3038645LLU;
	int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MAX;
	volatile int32_t t64 = -7019777;

	t64 = (x293==((x294+x295)%x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x301 = 2575;
	volatile uint64_t x302 = 256115738LLU;
	uint16_t x303 = 0U;
	static int16_t x304 = 68;
	int32_t t65 = 59080627;

	t65 = (x301==((x302+x303)%x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x306 = 1007029818928284702LLU;
	uint64_t x308 = 63502LLU;
	int32_t t66 = 64757;

	t66 = (x305==((x306+x307)%x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MAX;
	uint16_t x310 = 4226U;
	uint16_t x312 = 457U;

	t67 = (x309==((x310+x311)%x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x314 = 3U;
	int32_t x316 = INT32_MIN;
	int32_t t68 = 7104954;

	t68 = (x313==((x314+x315)%x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = UINT16_MAX;
	static int16_t x320 = INT16_MIN;

	t69 = (x317==((x318+x319)%x320));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 19929U;
	int8_t x322 = -2;
	static uint8_t x323 = 116U;
	volatile int32_t x324 = INT32_MIN;
	int32_t t70 = 1885066;

	t70 = (x321==((x322+x323)%x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 54U;
	int64_t x328 = -1LL;
	volatile int32_t t71 = 15546339;

	t71 = (x325==((x326+x327)%x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -1;
	int8_t x330 = -1;
	static uint32_t x332 = 49938U;

	t72 = (x329==((x330+x331)%x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -2092751LL;
	static int32_t x334 = INT32_MIN;
	static uint32_t x335 = 85U;
	int16_t x336 = -1;
	volatile int32_t t73 = 814758163;

	t73 = (x333==((x334+x335)%x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = 15154;
	volatile int32_t x338 = -1;
	volatile int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t74 = -10676627;

	t74 = (x337==((x338+x339)%x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = 3U;
	int64_t x342 = -1LL;
	int8_t x343 = -1;
	volatile int32_t t75 = -9;

	t75 = (x341==((x342+x343)%x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MAX;
	uint32_t x348 = 441292U;
	static int32_t t76 = 6592451;

	t76 = (x345==((x346+x347)%x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x349 = 109U;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t77 = 63973;

	t77 = (x349==((x350+x351)%x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	volatile int8_t x354 = -1;
	static uint64_t x355 = 188624817498076513LLU;
	uint32_t x356 = 1168072U;
	volatile int32_t t78 = 15132;

	t78 = (x353==((x354+x355)%x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 8U;
	volatile int32_t t79 = 72073;

	t79 = (x357==((x358+x359)%x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x361 = INT8_MIN;
	int64_t x362 = -1LL;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int32_t t80 = 163;

	t80 = (x361==((x362+x363)%x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x366 = -30300;
	uint32_t x367 = 305U;
	int32_t x368 = -1;
	int32_t t81 = -15;

	t81 = (x365==((x366+x367)%x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t82 = 300048831;

	t82 = (x369==((x370+x371)%x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x373 = INT8_MAX;
	static int16_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t83 = 138669;

	t83 = (x373==((x374+x375)%x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x377 = INT32_MAX;
	volatile int8_t x378 = INT8_MIN;
	volatile uint8_t x379 = 84U;
	int64_t x380 = -17685683965LL;
	volatile int32_t t84 = 40190;

	t84 = (x377==((x378+x379)%x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x381 = 27U;
	volatile uint32_t x382 = 282U;
	int32_t x383 = -1;
	static volatile int32_t t85 = -307137;

	t85 = (x381==((x382+x383)%x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = 4;
	uint32_t x386 = 420U;
	uint16_t x388 = 12U;
	static volatile int32_t t86 = 0;

	t86 = (x385==((x386+x387)%x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x389 = 34U;
	int16_t x390 = INT16_MAX;
	int64_t x391 = INT64_MIN;
	static int32_t t87 = -196;

	t87 = (x389==((x390+x391)%x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x396 = -1;
	int32_t t88 = 236;

	t88 = (x393==((x394+x395)%x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x398 = UINT8_MAX;
	volatile int8_t x399 = 50;
	volatile int8_t x400 = INT8_MAX;
	static int32_t t89 = 711389876;

	t89 = (x397==((x398+x399)%x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = 5;
	int64_t x402 = INT64_MAX;
	int32_t x403 = -1;
	static int64_t x404 = -1LL;
	static int32_t t90 = -147;

	t90 = (x401==((x402+x403)%x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x405 = 1;
	volatile int32_t x406 = INT32_MIN;
	uint16_t x407 = UINT16_MAX;
	static volatile int32_t t91 = -6985594;

	t91 = (x405==((x406+x407)%x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = 87215954LL;
	uint8_t x411 = UINT8_MAX;
	volatile int32_t t92 = 7573929;

	t92 = (x409==((x410+x411)%x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x413 = INT64_MIN;
	static uint16_t x414 = UINT16_MAX;
	static uint8_t x415 = 3U;
	volatile uint32_t x416 = 166687U;
	volatile int32_t t93 = 8262297;

	t93 = (x413==((x414+x415)%x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x417 = 104U;
	volatile uint16_t x418 = 567U;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 93333432067660887LLU;
	int32_t t94 = -3077;

	t94 = (x417==((x418+x419)%x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	volatile uint64_t x422 = 17453830145735763LLU;
	int64_t x423 = -1LL;
	static int8_t x424 = INT8_MIN;
	int32_t t95 = -1;

	t95 = (x421==((x422+x423)%x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x425 = -1;
	static uint8_t x426 = UINT8_MAX;
	int64_t x428 = -1LL;
	volatile int32_t t96 = -180;

	t96 = (x425==((x426+x427)%x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MAX;
	int8_t x434 = INT8_MIN;
	volatile int16_t x435 = -1235;
	volatile int16_t x436 = INT16_MIN;

	t97 = (x433==((x434+x435)%x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = INT16_MIN;
	volatile int8_t x438 = INT8_MAX;
	volatile int64_t x439 = INT64_MIN;
	volatile int32_t t98 = 99055;

	t98 = (x437==((x438+x439)%x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x441 = 45LLU;
	int64_t x442 = INT64_MIN;
	uint64_t x443 = 1114082627188635LLU;
	volatile uint16_t x444 = UINT16_MAX;
	int32_t t99 = -2;

	t99 = (x441==((x442+x443)%x444));

	if (t99 != 0) { NG(); } else { ; }
	
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

