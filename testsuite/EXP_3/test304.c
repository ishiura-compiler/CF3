#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int32_t x12 = -1;
int8_t x22 = INT8_MIN;
int64_t x33 = -1LL;
volatile int64_t t7 = 15933312584193LL;
volatile int16_t x37 = -1;
int8_t x42 = INT8_MAX;
static int16_t x44 = INT16_MAX;
volatile int32_t t9 = -144;
int32_t x46 = INT32_MIN;
int64_t t10 = -23602LL;
int32_t x53 = INT32_MAX;
uint64_t x62 = 5LLU;
static uint64_t t14 = 113854620370LLU;
int32_t x69 = 0;
uint32_t x81 = 16174U;
int16_t x83 = INT16_MIN;
static uint8_t x96 = 13U;
int64_t t20 = 438627151668LL;
volatile uint8_t x97 = UINT8_MAX;
int32_t x103 = INT32_MIN;
int8_t x107 = INT8_MAX;
int32_t t23 = -125497;
static uint64_t x111 = 729355108179755936LLU;
uint32_t x116 = 588212U;
static int8_t x122 = INT8_MAX;
uint32_t x125 = 58853U;
uint32_t x126 = 2115315861U;
uint64_t t28 = 971449LLU;
static int64_t x135 = 440664265LL;
volatile uint8_t x137 = UINT8_MAX;
uint32_t x149 = 462755U;
static int8_t x152 = INT8_MAX;
uint32_t t33 = 4U;
uint16_t x158 = UINT16_MAX;
int64_t x160 = -1LL;
int16_t x161 = INT16_MIN;
volatile uint32_t x163 = UINT32_MAX;
uint8_t x164 = 5U;
int8_t x165 = INT8_MAX;
volatile int64_t x168 = -1LL;
uint8_t x172 = UINT8_MAX;
volatile uint64_t t38 = 4329415652964LLU;
int16_t x175 = INT16_MIN;
int16_t x177 = INT16_MIN;
static int32_t t40 = 1;
static int64_t x184 = -1LL;
uint32_t x186 = 2U;
int32_t x195 = 160;
static int8_t x203 = INT8_MIN;
static int32_t x205 = INT32_MIN;
uint64_t x206 = 419788974754LLU;
volatile uint64_t t45 = 9151151LLU;
static int64_t x219 = -1LL;
uint32_t x220 = 773264U;
int64_t x226 = INT64_MIN;
int64_t t49 = -7444LL;
int64_t x232 = INT64_MIN;
int16_t x237 = INT16_MIN;
uint64_t t54 = 821LLU;
volatile uint64_t t55 = 8359182644LLU;
int16_t x264 = -1948;
static int32_t x272 = INT32_MIN;
int32_t x273 = -1;
int8_t x290 = 1;
uint64_t t61 = 1010371613LLU;
int64_t x299 = INT64_MAX;
volatile int64_t x300 = 20LL;
static volatile int64_t t63 = -556778181486799077LL;
static volatile int32_t x301 = INT32_MIN;
int32_t t64 = -685;
int64_t x313 = -1LL;
static uint32_t x317 = 16U;
int8_t x326 = -11;
uint32_t x335 = UINT32_MAX;
uint32_t t70 = 102500U;
uint32_t x340 = UINT32_MAX;
uint8_t x345 = 100U;
int8_t x347 = -1;
uint16_t x353 = UINT16_MAX;
uint64_t x356 = 136LLU;
static volatile uint8_t x357 = UINT8_MAX;
static int8_t x359 = INT8_MIN;
int16_t x361 = -1;
static int64_t x364 = -1166726103LL;
static int64_t x366 = INT64_MIN;
static volatile int8_t x372 = -2;
static uint64_t x373 = UINT64_MAX;
int32_t x379 = -2602;
static int16_t x385 = INT16_MIN;
int32_t x386 = INT32_MAX;
int64_t t85 = -58LL;
static int16_t x397 = 2344;
uint32_t x398 = UINT32_MAX;
uint8_t x402 = 6U;
int8_t x410 = -2;
uint32_t t89 = 76458121U;
int32_t x418 = -100;
int16_t x421 = 3;
static volatile int32_t x423 = INT32_MAX;
volatile int8_t x427 = -1;
int16_t x444 = -7042;
static uint32_t x449 = UINT32_MAX;
int8_t x459 = -63;
uint8_t x460 = UINT8_MAX;


void f0(void) {
	static int16_t x1 = -1;
	int8_t x3 = INT8_MIN;
	static int64_t x4 = INT64_MIN;
	static volatile uint64_t t0 = 2LLU;

	t0 = ((x1&x2)%(x3-x4));

	if (t0 != 255LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint32_t x6 = 110U;
	volatile uint16_t x7 = 0U;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 4847U;

	t1 = ((x5&x6)%(x7-x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = 1;
	static int32_t x11 = INT32_MIN;
	int32_t t2 = 5020750;

	t2 = ((x9&x10)%(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 3;
	int8_t x14 = INT8_MIN;
	static int16_t x15 = 37;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 413217LLU;

	t3 = ((x13&x14)%(x15-x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = UINT32_MAX;
	static int8_t x23 = INT8_MIN;
	static int32_t x24 = INT32_MIN;
	uint32_t t4 = 4513U;

	t4 = ((x21&x22)%(x23-x24));

	if (t4 != 128U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = UINT8_MAX;
	volatile uint64_t x27 = 4335433884878564LLU;
	int64_t x28 = -1LL;
	uint64_t t5 = 71LLU;

	t5 = ((x25&x26)%(x27-x28));

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	uint8_t x30 = 120U;
	int64_t x31 = -6077126246LL;
	static int8_t x32 = INT8_MAX;
	static volatile int64_t t6 = -1542966LL;

	t6 = ((x29&x30)%(x31-x32));

	if (t6 != 120LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MAX;
	int32_t x35 = INT32_MAX;
	static uint16_t x36 = 949U;

	t7 = ((x33&x34)%(x35-x36));

	if (t7 != 1804999LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x38 = 15U;
	static uint16_t x39 = 2995U;
	int8_t x40 = INT8_MAX;
	static int32_t t8 = 134;

	t8 = ((x37&x38)%(x39-x40));

	if (t8 != 15) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 790U;
	int16_t x43 = INT16_MIN;

	t9 = ((x41&x42)%(x43-x44));

	if (t9 != 22) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	int8_t x47 = -1;
	uint16_t x48 = 88U;

	t10 = ((x45&x46)%(x47-x48));

	if (t10 != -67LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 0U;
	int16_t x50 = INT16_MIN;
	static uint16_t x51 = UINT16_MAX;
	uint32_t x52 = 164U;
	uint32_t t11 = 781114U;

	t11 = ((x49&x50)%(x51-x52));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = INT32_MAX;
	volatile uint64_t x55 = 12LLU;
	static int8_t x56 = -9;
	static uint64_t t12 = 3751831206LLU;

	t12 = ((x53&x54)%(x55-x56));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x57 = INT64_MIN;
	uint32_t x58 = 864127956U;
	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;
	static volatile int64_t t13 = 0LL;

	t13 = ((x57&x58)%(x59-x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	volatile int64_t x63 = INT64_MAX;
	volatile uint16_t x64 = UINT16_MAX;

	t14 = ((x61&x62)%(x63-x64));

	if (t14 != 5LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	static int32_t t15 = -108;

	t15 = ((x65&x66)%(x67-x68));

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x70 = 0LLU;
	int32_t x71 = -524680251;
	int64_t x72 = INT64_MIN;
	uint64_t t16 = 105335457685993LLU;

	t16 = ((x69&x70)%(x71-x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = 16LL;
	int8_t x84 = INT8_MIN;
	volatile int64_t t17 = 84LL;

	t17 = ((x81&x82)%(x83-x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -21303LL;
	static uint64_t x86 = UINT64_MAX;
	int8_t x87 = 6;
	volatile uint32_t x88 = UINT32_MAX;
	uint64_t t18 = 6337740722LLU;

	t18 = ((x85&x86)%(x87-x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 23932U;
	volatile uint64_t x91 = 30653094232508653LLU;
	uint16_t x92 = UINT16_MAX;
	uint64_t t19 = 27324291799519LLU;

	t19 = ((x89&x90)%(x91-x92));

	if (t19 != 23932LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -1LL;
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MAX;

	t20 = ((x93&x94)%(x95-x96));

	if (t20 != 13LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x98 = 2099U;
	static int32_t x99 = 0;
	volatile int8_t x100 = -1;
	static int32_t t21 = 6435;

	t21 = ((x97&x98)%(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x101 = -1;
	volatile int8_t x102 = INT8_MAX;
	int8_t x104 = -1;
	volatile int32_t t22 = 189;

	t22 = ((x101&x102)%(x103-x104));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	volatile int16_t x106 = 14010;
	static int32_t x108 = -164276278;

	t23 = ((x105&x106)%(x107-x108));

	if (t23 != 14010) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -20;
	static volatile int64_t x110 = INT64_MIN;
	volatile int32_t x112 = -65806918;
	static volatile uint64_t t24 = 163609LLU;

	t24 = ((x109&x110)%(x111-x112));

	if (t24 != 471110737908021560LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x113 = 5152518U;
	uint32_t x114 = UINT32_MAX;
	uint8_t x115 = UINT8_MAX;
	uint32_t t25 = 17943996U;

	t25 = ((x113&x114)%(x115-x116));

	if (t25 != 5152518U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x121 = INT64_MIN;
	static int64_t x123 = INT64_MIN;
	int8_t x124 = -10;
	static int64_t t26 = -49371414235357729LL;

	t26 = ((x121&x122)%(x123-x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x127 = INT64_MAX;
	static uint16_t x128 = 61U;
	volatile int64_t t27 = 2LL;

	t27 = ((x125&x126)%(x127-x128));

	if (t27 != 8325LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x129 = 614U;
	uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	volatile uint32_t x132 = 0U;

	t28 = ((x129&x130)%(x131-x132));

	if (t28 != 614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 1;
	int32_t x134 = -1;
	static int8_t x136 = -1;
	int64_t t29 = -7113LL;

	t29 = ((x133&x134)%(x135-x136));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = 234LL;
	int16_t x139 = -11;
	static volatile int32_t x140 = INT32_MIN;
	int64_t t30 = 211787936086LL;

	t30 = ((x137&x138)%(x139-x140));

	if (t30 != 234LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = -1;
	int32_t x142 = INT32_MIN;
	static uint16_t x143 = 53U;
	uint8_t x144 = UINT8_MAX;
	static volatile int32_t t31 = 338;

	t31 = ((x141&x142)%(x143-x144));

	if (t31 != -34) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = 1;
	static int8_t x146 = INT8_MAX;
	static int8_t x147 = INT8_MAX;
	int32_t x148 = 209420;
	int32_t t32 = 0;

	t32 = ((x145&x146)%(x147-x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x150 = 12U;
	int32_t x151 = INT32_MAX;

	t33 = ((x149&x150)%(x151-x152));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -2338;
	int16_t x154 = -9176;
	static int16_t x155 = INT16_MIN;
	static uint8_t x156 = 6U;
	int32_t t34 = -9;

	t34 = ((x153&x154)%(x155-x156));

	if (t34 != -11256) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	int64_t t35 = 219458129160100LL;

	t35 = ((x157&x158)%(x159-x160));

	if (t35 != 65408LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x162 = UINT64_MAX;
	uint64_t t36 = 231912045LLU;

	t36 = ((x161&x162)%(x163-x164));

	if (t36 != 4294934558LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = 13;
	volatile int64_t t37 = -19LL;

	t37 = ((x165&x166)%(x167-x168));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = 9471;
	uint64_t x170 = UINT64_MAX;
	uint32_t x171 = UINT32_MAX;

	t38 = ((x169&x170)%(x171-x172));

	if (t38 != 9471LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t x174 = INT64_MIN;
	static int64_t x176 = -272395464460706195LL;
	volatile int64_t t39 = -4577597434570963171LL;

	t39 = ((x173&x174)%(x175-x176));

	if (t39 != -234321709652552717LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	static volatile int8_t x180 = 1;

	t40 = ((x177&x178)%(x179-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 12U;
	int32_t x182 = -234907932;
	uint8_t x183 = 1U;
	volatile int64_t t41 = 1664777613351167026LL;

	t41 = ((x181&x182)%(x183-x184));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MAX;
	volatile int32_t x187 = INT32_MIN;
	static volatile uint32_t x188 = 1078366U;
	volatile uint32_t t42 = 123U;

	t42 = ((x185&x186)%(x187-x188));

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MAX;
	static uint32_t x194 = UINT32_MAX;
	static uint64_t x196 = 9049616180015LLU;
	static uint64_t t43 = 1028195633167296LLU;

	t43 = ((x193&x194)%(x195-x196));

	if (t43 != 4294967295LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 126U;
	static uint32_t x202 = UINT32_MAX;
	uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t44 = 8197031004499765549LLU;

	t44 = ((x201&x202)%(x203-x204));

	if (t44 != 126LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MAX;

	t45 = ((x205&x206)%(x207-x208));

	if (t45 != 418759311360LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = -1;
	static volatile uint32_t x210 = 1392664002U;
	int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	uint32_t t46 = 20652693U;

	t46 = ((x209&x210)%(x211-x212));

	if (t46 != 36U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x217 = INT32_MAX;
	uint64_t x218 = 10504LLU;
	volatile uint64_t t47 = 16124087089LLU;

	t47 = ((x217&x218)%(x219-x220));

	if (t47 != 10504LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x221 = 2U;
	uint64_t x222 = 608782790LLU;
	int64_t x223 = INT64_MAX;
	int8_t x224 = 0;
	volatile uint64_t t48 = 62793839784LLU;

	t48 = ((x221&x222)%(x223-x224));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = 0U;
	int16_t x227 = 7;
	uint32_t x228 = 5957U;

	t49 = ((x225&x226)%(x227-x228));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = 60U;
	static int8_t x231 = -14;
	int64_t t50 = 215223815523837348LL;

	t50 = ((x229&x230)%(x231-x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x233 = -110237581480LL;
	uint32_t x234 = UINT32_MAX;
	static int8_t x235 = -56;
	int8_t x236 = -1;
	static volatile int64_t t51 = 29149712494416LL;

	t51 = ((x233&x234)%(x235-x236));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x238 = -1;
	static int64_t x239 = 250144225019037738LL;
	int64_t x240 = 33LL;
	volatile int64_t t52 = 4072116528LL;

	t52 = ((x237&x238)%(x239-x240));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 1U;
	int32_t x246 = INT32_MIN;
	uint64_t x247 = 8708600172795LLU;
	int64_t x248 = -42342576712LL;
	uint64_t t53 = 45046LLU;

	t53 = ((x245&x246)%(x247-x248));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x249 = 1766690692543LLU;
	static int8_t x250 = 1;
	uint32_t x251 = 43767228U;
	int32_t x252 = INT32_MAX;

	t54 = ((x249&x250)%(x251-x252));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	static volatile int32_t x255 = INT32_MIN;
	uint64_t x256 = 641182246149523LLU;

	t55 = ((x253&x254)%(x255-x256));

	if (t55 != 641182246149523LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x261 = 1942189795074LLU;
	int32_t x262 = INT32_MIN;
	int8_t x263 = 3;
	uint64_t t56 = 635282450466LLU;

	t56 = ((x261&x262)%(x263-x264));

	if (t56 != 476LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = 65176238;
	uint8_t x270 = 3U;
	int8_t x271 = INT8_MIN;
	int32_t t57 = -8268801;

	t57 = ((x269&x270)%(x271-x272));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = INT32_MIN;
	uint8_t x275 = 1U;
	static uint32_t x276 = 118U;
	uint32_t t58 = 75486U;

	t58 = ((x273&x274)%(x275-x276));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x277 = -1LL;
	int64_t x278 = INT64_MAX;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	volatile int64_t t59 = -13471049LL;

	t59 = ((x277&x278)%(x279-x280));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x285 = -1;
	int8_t x286 = -1;
	uint8_t x287 = 1U;
	int16_t x288 = -2;
	int32_t t60 = 427;

	t60 = ((x285&x286)%(x287-x288));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 10U;
	uint64_t x291 = 7741906813431426283LLU;
	volatile int16_t x292 = INT16_MIN;

	t61 = ((x289&x290)%(x291-x292));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x293 = 1071561890822LLU;
	volatile int8_t x294 = INT8_MAX;
	int64_t x295 = -28585970749058144LL;
	static int32_t x296 = INT32_MIN;
	volatile uint64_t t62 = 274486561009160551LLU;

	t62 = ((x293&x294)%(x295-x296));

	if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MAX;

	t63 = ((x297&x298)%(x299-x300));

	if (t63 != 2147483520LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 37U;
	int32_t x304 = -1;

	t64 = ((x301&x302)%(x303-x304));

	if (t64 != -22) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x305 = 1;
	static int8_t x306 = INT8_MIN;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = 113U;
	volatile uint32_t t65 = 52596846U;

	t65 = ((x305&x306)%(x307-x308));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = 193U;
	static int8_t x310 = INT8_MIN;
	int8_t x311 = 43;
	int16_t x312 = 928;
	int32_t t66 = -944459886;

	t66 = ((x309&x310)%(x311-x312));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 52U;
	int8_t x316 = INT8_MIN;
	volatile int64_t t67 = -57275158609307396LL;

	t67 = ((x313&x314)%(x315-x316));

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x318 = 12U;
	uint32_t x319 = 234853249U;
	volatile uint64_t x320 = 135129638522880918LLU;
	volatile uint64_t t68 = 252LLU;

	t68 = ((x317&x318)%(x319-x320));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x325 = UINT64_MAX;
	int8_t x327 = 46;
	uint8_t x328 = UINT8_MAX;
	volatile uint64_t t69 = 319075719496347400LLU;

	t69 = ((x325&x326)%(x327-x328));

	if (t69 != 198LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	volatile int8_t x336 = INT8_MIN;

	t70 = ((x333&x334)%(x335-x336));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x337 = INT64_MAX;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 6244U;
	int64_t t71 = 1853018089895667LL;

	t71 = ((x337&x338)%(x339-x340));

	if (t71 != 4235LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x341 = 59408304993741LL;
	static uint64_t x342 = 1312790068976855632LLU;
	volatile int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MIN;
	volatile uint64_t t72 = 6714553785587556LLU;

	t72 = ((x341&x342)%(x343-x344));

	if (t72 != 31288LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x346 = 1U;
	volatile uint64_t x348 = 121503989569LLU;
	volatile uint64_t t73 = 14757838172507LLU;

	t73 = ((x345&x346)%(x347-x348));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x349 = -1;
	static uint16_t x350 = 19419U;
	static int64_t x351 = INT64_MAX;
	static uint64_t x352 = UINT64_MAX;
	volatile uint64_t t74 = 13725LLU;

	t74 = ((x349&x350)%(x351-x352));

	if (t74 != 19419LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x354 = 43LLU;
	volatile int16_t x355 = 0;
	uint64_t t75 = 200019702934710103LLU;

	t75 = ((x353&x354)%(x355-x356));

	if (t75 != 43LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x358 = -1;
	static int64_t x360 = -171LL;
	int64_t t76 = -1421LL;

	t76 = ((x357&x358)%(x359-x360));

	if (t76 != 40LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x362 = 8U;
	static volatile int32_t x363 = -1;
	static volatile int64_t t77 = 1641229150420861880LL;

	t77 = ((x361&x362)%(x363-x364));

	if (t77 != 8LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x365 = INT64_MIN;
	static volatile int32_t x367 = -1793705;
	uint8_t x368 = UINT8_MAX;
	volatile int64_t t78 = -1549LL;

	t78 = ((x365&x366)%(x367-x368));

	if (t78 != -1596288LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = -1;
	int8_t x370 = INT8_MAX;
	int64_t x371 = INT64_MIN;
	int64_t t79 = 34245990736808889LL;

	t79 = ((x369&x370)%(x371-x372));

	if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x374 = -1;
	int64_t x375 = -1432579172885047LL;
	static uint64_t x376 = 84096764LLU;
	uint64_t t80 = 6353035890331123LLU;

	t80 = ((x373&x374)%(x375-x376));

	if (t80 != 1432579256981810LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x377 = -1;
	static volatile int16_t x378 = INT16_MAX;
	uint64_t x380 = 1994023521LLU;
	uint64_t t81 = 0LLU;

	t81 = ((x377&x378)%(x379-x380));

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x381 = INT32_MAX;
	volatile uint32_t x382 = UINT32_MAX;
	int16_t x383 = -1;
	int16_t x384 = 139;
	volatile uint32_t t82 = 2809112U;

	t82 = ((x381&x382)%(x383-x384));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x387 = 1U;
	int16_t x388 = INT16_MIN;
	static int32_t t83 = -2;

	t83 = ((x385&x386)%(x387-x388));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MAX;
	volatile uint16_t x390 = UINT16_MAX;
	volatile int64_t x391 = -852701016620LL;
	int64_t x392 = INT64_MIN;
	int64_t t84 = -1LL;

	t84 = ((x389&x390)%(x391-x392));

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = INT64_MAX;
	static volatile int8_t x394 = -6;
	static int64_t x395 = -247839238528643LL;
	uint16_t x396 = UINT16_MAX;

	t85 = ((x393&x394)%(x395-x396));

	if (t85 != 34772572441532LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x399 = UINT16_MAX;
	static int16_t x400 = INT16_MAX;
	uint32_t t86 = 17863925U;

	t86 = ((x397&x398)%(x399-x400));

	if (t86 != 2344U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	uint8_t x404 = 113U;
	volatile uint32_t t87 = 149005596U;

	t87 = ((x401&x402)%(x403-x404));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = -57;
	uint32_t x411 = 21772U;
	uint64_t x412 = 0LLU;
	static uint64_t t88 = 34819871LLU;

	t88 = ((x409&x410)%(x411-x412));

	if (t88 != 1602LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x413 = INT32_MIN;
	int32_t x414 = -141860;
	uint32_t x415 = 18396U;
	static int8_t x416 = -1;

	t89 = ((x413&x414)%(x415-x416));

	if (t89 != 1838U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x417 = INT32_MAX;
	uint16_t x419 = 1679U;
	volatile int16_t x420 = INT16_MIN;
	int32_t t90 = -335012665;

	t90 = ((x417&x418)%(x419-x420));

	if (t90 != 23121) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x422 = INT32_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t91 = 9516LLU;

	t91 = ((x421&x422)%(x423-x424));

	if (t91 != 3LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x425 = -1;
	int8_t x426 = 28;
	uint64_t x428 = 4LLU;
	volatile uint64_t t92 = 40763184LLU;

	t92 = ((x425&x426)%(x427-x428));

	if (t92 != 28LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x433 = INT8_MIN;
	static int8_t x434 = INT8_MIN;
	static int32_t x435 = 540;
	volatile int8_t x436 = INT8_MAX;
	volatile int32_t t93 = -797515475;

	t93 = ((x433&x434)%(x435-x436));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = -646;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MIN;
	int64_t t94 = 469090338868168LL;

	t94 = ((x437&x438)%(x439-x440));

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x441 = -22;
	int64_t x442 = -944425589780717410LL;
	static int32_t x443 = -3;
	int64_t t95 = -131839581LL;

	t95 = ((x441&x442)%(x443-x444));

	if (t95 != -555LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x445 = 3;
	static int8_t x446 = 4;
	int8_t x447 = -28;
	volatile int16_t x448 = INT16_MAX;
	volatile int32_t t96 = 650153906;

	t96 = ((x445&x446)%(x447-x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x450 = -1;
	static volatile int64_t x451 = -165508LL;
	int64_t x452 = INT64_MIN;
	static volatile int64_t t97 = 1LL;

	t97 = ((x449&x450)%(x451-x452));

	if (t97 != 4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x453 = 42262502091LLU;
	uint64_t x454 = 2472088482557LLU;
	static int16_t x455 = INT16_MIN;
	static int32_t x456 = INT32_MIN;
	volatile uint64_t t98 = 865017645826771LLU;

	t98 = ((x453&x454)%(x455-x456));

	if (t98 != 319427273LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x457 = 829264U;
	static int8_t x458 = INT8_MIN;
	static uint32_t t99 = 2U;

	t99 = ((x457&x458)%(x459-x460));

	if (t99 != 829184U) { NG(); } else { ; }
	
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

