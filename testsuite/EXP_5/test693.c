#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 9416895805LL;
uint64_t x3 = 3513066LLU;
uint64_t x10 = 27982LLU;
uint64_t x14 = 222184193225271LLU;
uint64_t t2 = 29310LLU;
int32_t x18 = INT32_MAX;
volatile int16_t x31 = INT16_MIN;
int16_t x35 = INT16_MIN;
static int32_t x37 = INT32_MAX;
int64_t x53 = 769958240844LL;
static int64_t x54 = -511220LL;
int32_t x56 = INT32_MIN;
static int64_t t12 = 712160224228LL;
int16_t x58 = INT16_MIN;
volatile int32_t t13 = -27;
int8_t x67 = -1;
static int32_t x74 = INT32_MIN;
int32_t x81 = INT32_MAX;
int64_t x87 = INT64_MIN;
int8_t x95 = INT8_MIN;
uint8_t x101 = UINT8_MAX;
volatile int32_t x103 = INT32_MIN;
int8_t x106 = INT8_MIN;
int64_t x108 = 250016022LL;
volatile int64_t t22 = -9LL;
int16_t x111 = 1;
volatile uint64_t t25 = 343216895238821102LLU;
int32_t x124 = -24824;
int16_t x125 = -6151;
uint8_t x132 = 29U;
int16_t x136 = INT16_MAX;
volatile int8_t x147 = INT8_MAX;
int64_t x148 = -1LL;
volatile int16_t x151 = INT16_MIN;
uint8_t x152 = 57U;
uint64_t t33 = 242843590021992455LLU;
uint8_t x170 = UINT8_MAX;
static volatile int8_t x176 = INT8_MIN;
volatile int64_t t38 = 1700148404LL;
int16_t x179 = INT16_MIN;
int8_t x181 = -1;
int64_t x183 = INT64_MAX;
int8_t x186 = -2;
static volatile int64_t x190 = -9801632390882LL;
static int16_t x195 = INT16_MIN;
int32_t x197 = INT32_MIN;
int32_t x201 = INT32_MAX;
int32_t x204 = -1;
volatile int32_t x205 = INT32_MIN;
static volatile int32_t x210 = INT32_MAX;
int16_t x215 = INT16_MIN;
volatile int64_t t48 = 1790705506LL;
volatile uint8_t x219 = UINT8_MAX;
volatile int64_t x221 = -1LL;
uint32_t x235 = 60336U;
int64_t x246 = INT64_MIN;
uint8_t x249 = UINT8_MAX;
volatile uint8_t x250 = UINT8_MAX;
volatile int32_t t56 = 135609748;
static volatile int64_t t57 = -10068304891LL;
static int32_t x264 = -4743;
uint32_t t60 = 11U;
static uint8_t x271 = 3U;
int64_t x273 = 10267947LL;
int64_t x275 = -1LL;
int64_t x283 = INT64_MAX;
volatile uint16_t x286 = UINT16_MAX;
volatile uint32_t x289 = UINT32_MAX;
uint32_t t65 = 79998117U;
uint8_t x297 = UINT8_MAX;
uint32_t x298 = 217U;
volatile int8_t x299 = INT8_MIN;
volatile uint32_t t67 = 104281799U;
int32_t x309 = -9576842;
int16_t x310 = INT16_MIN;
uint8_t x313 = 0U;
volatile int8_t x314 = INT8_MIN;
int16_t x317 = 1;
int8_t x320 = -11;
static int32_t x335 = -1722447;
int32_t x341 = 8;
int16_t x344 = -30;
volatile uint8_t x352 = 2U;
static int32_t x361 = -1;
int32_t x362 = 12;
int32_t x371 = -1;
static uint64_t t83 = 12419LLU;
static volatile uint64_t t84 = 123336LLU;
int8_t x389 = -32;
int32_t x391 = 22;
int16_t x392 = INT16_MAX;
volatile int64_t x393 = INT64_MIN;
int32_t x395 = -4003076;
int32_t x396 = -1;
static volatile int64_t t86 = -125211785LL;
uint64_t x399 = UINT64_MAX;
static uint16_t x401 = 2U;
static uint32_t x407 = 50372656U;
static uint8_t x419 = UINT8_MAX;
int64_t x423 = INT64_MAX;
int8_t x427 = -15;
static int64_t x438 = INT64_MIN;
int64_t x440 = 157285616568683LL;
int32_t x443 = -1;
static int32_t x447 = -1;


void f0(void) {
	int16_t x2 = -16167;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 54415895013913LLU;

	t0 = (x1/((x2%x3)-x4));

	if (t0 != 2857LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 10166525U;
	int64_t x11 = -134643043283LL;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t1 = 604444LLU;

	t1 = (x9/((x10%x11)-x12));

	if (t1 != 363LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;

	t2 = (x13/((x14%x15)-x16));

	if (t2 != 83024LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x19 = -1;
	int16_t x20 = -3196;
	int32_t t3 = 81361;

	t3 = (x17/((x18%x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int16_t x22 = -13915;
	int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MIN;
	uint32_t t4 = 16926U;

	t4 = (x21/((x22%x23)-x24));

	if (t4 != 131360U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = -1;
	int8_t x27 = -25;
	uint64_t x28 = 2195792LLU;
	uint64_t t5 = 17814LLU;

	t5 = (x25/((x26%x27)-x28));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -4609;
	uint64_t x30 = 5311LLU;
	volatile uint64_t x32 = 964793890LLU;
	uint64_t t6 = 7779LLU;

	t6 = (x29/((x30%x31)-x32));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static volatile int16_t x34 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t7 = 13935LLU;

	t7 = (x33/((x34%x35)-x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -1;
	int8_t x39 = INT8_MAX;
	volatile uint16_t x40 = UINT16_MAX;
	static int32_t t8 = -213;

	t8 = (x37/((x38%x39)-x40));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	volatile uint64_t x43 = 52982524840LLU;
	uint32_t x44 = 1203699U;
	volatile uint64_t t9 = 134017134529069LLU;

	t9 = (x41/((x42%x43)-x44));

	if (t9 != 760355002LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	static uint8_t x46 = UINT8_MAX;
	uint32_t x47 = 9128U;
	volatile int8_t x48 = 14;
	uint32_t t10 = 738446U;

	t10 = (x45/((x46%x47)-x48));

	if (t10 != 8910720U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	static volatile uint8_t x51 = 13U;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t11 = 42U;

	t11 = (x49/((x50%x51)-x52));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x55 = INT8_MIN;

	t12 = (x53/((x54%x55)-x56));

	if (t12 != 358LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = -1;
	static volatile int32_t x59 = -1;
	int16_t x60 = -483;

	t13 = (x57/((x58%x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 3U;
	static int16_t x62 = 1;
	uint64_t x63 = 13243104LLU;
	uint8_t x64 = UINT8_MAX;
	volatile uint64_t t14 = 2057LLU;

	t14 = (x61/((x62%x63)-x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -2;
	int32_t x66 = INT32_MIN;
	uint32_t x68 = 1U;
	uint32_t t15 = 9098783U;

	t15 = (x65/((x66%x67)-x68));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 29U;
	static uint32_t x70 = 2585466U;
	int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MAX;
	static int64_t t16 = 3218LL;

	t16 = (x69/((x70%x71)-x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1500799;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = INT16_MIN;
	int32_t t17 = -33000493;

	t17 = (x73/((x74%x75)-x76));

	if (t17 != -45) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = INT64_MIN;
	static int32_t x84 = -10086426;
	static uint64_t t18 = 202420477494LLU;

	t18 = (x81/((x82%x83)-x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 2857U;
	uint64_t x86 = 98016378883256LLU;
	int64_t x88 = -11734657495LL;
	static uint64_t t19 = 176224437LLU;

	t19 = (x85/((x86%x87)-x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x93 = -972;
	volatile uint8_t x94 = 0U;
	static volatile uint8_t x96 = 1U;
	volatile int32_t t20 = -1;

	t20 = (x93/((x94%x95)-x96));

	if (t20 != 972) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x102 = 1U;
	int16_t x104 = INT16_MIN;
	volatile int32_t t21 = 77036748;

	t21 = (x101/((x102%x103)-x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x105 = INT32_MIN;
	uint32_t x107 = 133U;

	t22 = (x105/((x106%x107)-x108));

	if (t22 != 8LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = 28;
	volatile int64_t x110 = INT64_MAX;
	volatile int64_t x112 = 4213677492246LL;
	volatile int64_t t23 = 0LL;

	t23 = (x109/((x110%x111)-x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MAX;
	volatile int64_t x114 = -1540518869152387108LL;
	int64_t x115 = -1LL;
	static int8_t x116 = -1;
	volatile int64_t t24 = 0LL;

	t24 = (x113/((x114%x115)-x116));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 7628536U;
	uint64_t x118 = UINT64_MAX;
	uint32_t x119 = 15399621U;
	int16_t x120 = 5;

	t25 = (x117/((x118%x119)-x120));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 1414023U;
	uint32_t x123 = 5001U;
	static uint32_t t26 = 301243U;

	t26 = (x121/((x122%x123)-x124));

	if (t26 != 75178U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x126 = -1;
	static int16_t x127 = INT16_MIN;
	static volatile uint64_t x128 = 1LLU;
	volatile uint64_t t27 = 68639721LLU;

	t27 = (x125/((x126%x127)-x128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 7U;
	static volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	static uint32_t t28 = 540361914U;

	t28 = (x129/((x130%x131)-x132));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -251739618;
	volatile uint16_t x134 = 24537U;
	int32_t x135 = INT32_MAX;
	int32_t t29 = -1;

	t29 = (x133/((x134%x135)-x136));

	if (t29 != 30588) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = 58;
	int16_t x138 = INT16_MIN;
	volatile int32_t x139 = INT32_MIN;
	volatile uint64_t x140 = 25427186LLU;
	uint64_t t30 = 176440993046819100LLU;

	t30 = (x137/((x138%x139)-x140));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 203022U;
	int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MAX;
	volatile int64_t t31 = -4431110630250LL;

	t31 = (x141/((x142%x143)-x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x145 = 1044796U;
	static uint64_t x146 = 1288245LLU;
	uint64_t t32 = 179706LLU;

	t32 = (x145/((x146%x147)-x148));

	if (t32 != 12291LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 193LLU;
	int16_t x150 = INT16_MIN;

	t33 = (x149/((x150%x151)-x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 2605634611694LL;
	volatile int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = -1;
	int64_t t34 = 438471LL;

	t34 = (x153/((x154%x155)-x156));

	if (t34 != 2605634611694LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = INT16_MIN;
	static uint16_t x158 = 1957U;
	uint32_t x159 = 6898883U;
	volatile int16_t x160 = INT16_MAX;
	volatile uint32_t t35 = 4180U;

	t35 = (x157/((x158%x159)-x160));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	int64_t t36 = 7490305865796217LL;

	t36 = (x165/((x166%x167)-x168));

	if (t36 != -281474976710656LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 706060LLU;
	static volatile int32_t x171 = INT32_MIN;
	int32_t x172 = -52720442;
	volatile uint64_t t37 = 37535LLU;

	t37 = (x169/((x170%x171)-x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = INT64_MIN;
	static int8_t x174 = 58;
	volatile int16_t x175 = INT16_MAX;

	t38 = (x173/((x174%x175)-x176));

	if (t38 != -49588021703520300LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x178 = -1;
	int16_t x180 = INT16_MAX;
	int32_t t39 = 63623;

	t39 = (x177/((x178%x179)-x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x182 = INT8_MIN;
	uint8_t x184 = 19U;
	static int64_t t40 = -575031932338833LL;

	t40 = (x181/((x182%x183)-x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x185 = 4436;
	int8_t x187 = INT8_MIN;
	static volatile int64_t x188 = -1018704384738379163LL;
	static int64_t t41 = 55LL;

	t41 = (x185/((x186%x187)-x188));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	volatile int32_t x191 = INT32_MAX;
	int16_t x192 = -109;
	volatile int64_t t42 = -117285LL;

	t42 = (x189/((x190%x191)-x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 4LLU;
	uint32_t x194 = 7171U;
	int32_t x196 = INT32_MAX;
	volatile uint64_t t43 = 64248002LLU;

	t43 = (x193/((x194%x195)-x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x198 = 1;
	uint32_t x199 = 6124U;
	static int16_t x200 = -12833;
	volatile uint32_t t44 = 23751513U;

	t44 = (x197/((x198%x199)-x200));

	if (t44 != 167327U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x202 = 5U;
	static int64_t x203 = -1LL;
	volatile int64_t t45 = 125340438178LL;

	t45 = (x201/((x202%x203)-x204));

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x206 = 111203150959LLU;
	volatile int32_t x207 = -14465;
	volatile int16_t x208 = INT16_MIN;
	uint64_t t46 = 228140375309406057LLU;

	t46 = (x205/((x206%x207)-x208));

	if (t46 != 165883236LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = INT8_MAX;
	static int32_t x211 = 166267;
	uint64_t x212 = 23313698LLU;
	static volatile uint64_t t47 = 1LLU;

	t47 = (x209/((x210%x211)-x212));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = INT64_MIN;
	uint8_t x214 = 4U;
	uint32_t x216 = 3965U;

	t48 = (x213/((x214%x215)-x216));

	if (t48 != -2147485628LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 26212;
	uint64_t x218 = 100329276779LLU;
	int32_t x220 = -28;
	uint64_t t49 = 16399451LLU;

	t49 = (x217/((x218%x219)-x220));

	if (t49 != 301LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x222 = -56493770;
	int64_t x223 = -1LL;
	static volatile int16_t x224 = 1880;
	static volatile int64_t t50 = 322801113LL;

	t50 = (x221/((x222%x223)-x224));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MAX;
	int64_t x226 = 32353765337857LL;
	int64_t x227 = -1LL;
	static int8_t x228 = INT8_MAX;
	volatile int64_t t51 = -441191643579173LL;

	t51 = (x225/((x226%x227)-x228));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x229 = 950136687LLU;
	int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = 16U;
	uint64_t t52 = 20766779898108587LLU;

	t52 = (x229/((x230%x231)-x232));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = 1U;
	static int8_t x236 = -1;
	volatile uint32_t t53 = 440711U;

	t53 = (x233/((x234%x235)-x236));

	if (t53 != 2147467264U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MAX;
	static int64_t x239 = INT64_MIN;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t54 = 123LLU;

	t54 = (x237/((x238%x239)-x240));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	static int8_t x248 = INT8_MAX;
	int64_t t55 = 13675380296LL;

	t55 = (x245/((x246%x247)-x248));

	if (t55 != -33818640LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x251 = INT8_MIN;
	int8_t x252 = -2;

	t56 = (x249/((x250%x251)-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = INT8_MIN;
	uint32_t x254 = 493520U;
	volatile int64_t x255 = -26LL;
	int16_t x256 = INT16_MAX;

	t57 = (x253/((x254%x255)-x256));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -1LL;
	uint8_t x258 = 7U;
	volatile uint32_t x259 = 97U;
	int8_t x260 = INT8_MIN;
	static volatile int64_t t58 = 118088560835980LL;

	t58 = (x257/((x258%x259)-x260));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x261 = -4015688LL;
	int8_t x262 = 4;
	int8_t x263 = -1;
	volatile int64_t t59 = -6798973969LL;

	t59 = (x261/((x262%x263)-x264));

	if (t59 != -846LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile uint32_t x266 = 74825783U;
	int32_t x267 = INT32_MIN;
	volatile int8_t x268 = -1;

	t60 = (x265/((x266%x267)-x268));

	if (t60 != 57U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = INT64_MIN;
	volatile int8_t x270 = -1;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t61 = 630717956158LL;

	t61 = (x269/((x270%x271)-x272));

	if (t61 != 140737488355328LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x274 = 14U;
	uint8_t x276 = UINT8_MAX;
	int64_t t62 = 3415088823631895LL;

	t62 = (x273/((x274%x275)-x276));

	if (t62 != -40266LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int32_t x284 = -1;
	static int64_t t63 = -3737244141067345LL;

	t63 = (x281/((x282%x283)-x284));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = INT8_MAX;
	static volatile uint64_t x287 = 522269LLU;
	int32_t x288 = INT32_MIN;
	uint64_t t64 = 7000046879251493LLU;

	t64 = (x285/((x286%x287)-x288));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x290 = -1;
	static volatile uint32_t x291 = 21U;
	uint8_t x292 = 0U;

	t65 = (x289/((x290%x291)-x292));

	if (t65 != 1431655765U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 6U;
	uint32_t x294 = UINT32_MAX;
	static volatile uint8_t x295 = 42U;
	volatile int16_t x296 = INT16_MIN;
	static volatile uint32_t t66 = 1U;

	t66 = (x293/((x294%x295)-x296));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x300 = 4;

	t67 = (x297/((x298%x299)-x300));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x311 = INT32_MIN;
	uint8_t x312 = 48U;
	static volatile int32_t t68 = -847;

	t68 = (x309/((x310%x311)-x312));

	if (t68 != 291) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x315 = INT64_MIN;
	int16_t x316 = -1;
	int64_t t69 = 142427LL;

	t69 = (x313/((x314%x315)-x316));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x318 = UINT32_MAX;
	volatile int8_t x319 = 48;
	volatile uint32_t t70 = 22468U;

	t70 = (x317/((x318%x319)-x320));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = INT8_MAX;
	static volatile int32_t x322 = INT32_MAX;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = 182;
	static int64_t t71 = 10LL;

	t71 = (x321/((x322%x323)-x324));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MIN;
	volatile int16_t x326 = INT16_MIN;
	uint64_t x327 = 61007726LLU;
	static uint16_t x328 = 3U;
	uint64_t t72 = 886938LLU;

	t72 = (x325/((x326%x327)-x328));

	if (t72 != 500876500521LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = 0;
	static int64_t x330 = INT64_MIN;
	static int16_t x331 = INT16_MIN;
	static int64_t x332 = 12707888766LL;
	volatile int64_t t73 = -16512LL;

	t73 = (x329/((x330%x331)-x332));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x333 = 2U;
	volatile uint32_t x334 = 32U;
	static uint8_t x336 = 0U;
	static volatile uint32_t t74 = 698853058U;

	t74 = (x333/((x334%x335)-x336));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = -356LL;
	int64_t x338 = INT64_MAX;
	static uint32_t x339 = 124905014U;
	uint8_t x340 = 3U;
	volatile int64_t t75 = 40362LL;

	t75 = (x337/((x338%x339)-x340));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x342 = 13;
	volatile int16_t x343 = -1;
	int32_t t76 = 2378297;

	t76 = (x341/((x342%x343)-x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = -1;
	uint16_t x347 = 1680U;
	volatile int16_t x348 = INT16_MAX;
	volatile int32_t t77 = 504;

	t77 = (x345/((x346%x347)-x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -1;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 26U;
	int32_t t78 = 445072;

	t78 = (x349/((x350%x351)-x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x363 = 80546851560LLU;
	int64_t x364 = INT64_MIN;
	uint64_t t79 = 2472116530657101011LLU;

	t79 = (x361/((x362%x363)-x364));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x365 = -25;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 4U;
	static int64_t x368 = -3288807LL;
	int64_t t80 = 3157426LL;

	t80 = (x365/((x366%x367)-x368));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = 9663LLU;
	int16_t x372 = -1;
	volatile uint64_t t81 = 7108727304LLU;

	t81 = (x369/((x370%x371)-x372));

	if (t81 != 1908810438090806LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint16_t x374 = 29U;
	volatile int32_t x375 = INT32_MIN;
	static uint16_t x376 = UINT16_MAX;
	static uint32_t t82 = 1412U;

	t82 = (x373/((x374%x375)-x376));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = INT64_MAX;
	volatile uint16_t x378 = UINT16_MAX;
	volatile uint64_t x379 = 176002205555471436LLU;
	volatile int32_t x380 = 403961;

	t83 = (x377/((x378%x379)-x380));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x385 = INT8_MAX;
	uint64_t x386 = 34921878LLU;
	static int8_t x387 = -42;
	volatile uint8_t x388 = UINT8_MAX;

	t84 = (x385/((x386%x387)-x388));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = INT16_MAX;
	volatile int32_t t85 = -55;

	t85 = (x389/((x390%x391)-x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x394 = INT32_MIN;

	t86 = (x393/((x394%x395)-x396));

	if (t86 != 5026604580197LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x398 = 43182172;
	volatile int32_t x400 = -5;
	volatile uint64_t t87 = 937959576139LLU;

	t87 = (x397/((x398%x399)-x400));

	if (t87 != 427184207820LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x402 = 1LL;
	int16_t x403 = -1;
	uint32_t x404 = 2894253U;
	volatile int64_t t88 = -41LL;

	t88 = (x401/((x402%x403)-x404));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = 23365LL;
	int32_t x406 = -55973482;
	static uint16_t x408 = 19945U;
	volatile int64_t t89 = 391858411570596905LL;

	t89 = (x405/((x406%x407)-x408));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = 35097800579786961LL;
	uint8_t x410 = 5U;
	static int64_t x411 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;
	static volatile int64_t t90 = -4994870LL;

	t90 = (x409/((x410%x411)-x412));

	if (t90 != 16343686LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x413 = INT32_MAX;
	int32_t x414 = INT32_MIN;
	int64_t x415 = INT64_MIN;
	volatile uint64_t x416 = 6243150588972LLU;
	volatile uint64_t t91 = 24321237269826546LLU;

	t91 = (x413/((x414%x415)-x416));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = INT16_MIN;
	uint64_t x418 = 688043408487LLU;
	int8_t x420 = INT8_MAX;
	uint64_t t92 = 7170958LLU;

	t92 = (x417/((x418%x419)-x420));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x421 = 19U;
	static int16_t x422 = 103;
	uint64_t x424 = UINT64_MAX;
	static uint64_t t93 = 1627679955LLU;

	t93 = (x421/((x422%x423)-x424));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	static volatile uint8_t x426 = 48U;
	uint8_t x428 = 97U;
	int32_t t94 = 443677;

	t94 = (x425/((x426%x427)-x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MAX;
	volatile uint8_t x430 = 23U;
	volatile int16_t x431 = INT16_MIN;
	volatile uint16_t x432 = UINT16_MAX;
	static volatile int32_t t95 = 1;

	t95 = (x429/((x430%x431)-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = -1;
	volatile int32_t x434 = INT32_MAX;
	int8_t x435 = -1;
	int8_t x436 = -1;
	volatile int32_t t96 = 7244;

	t96 = (x433/((x434%x435)-x436));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x437 = -1;
	static uint64_t x439 = 4313357606076LLU;
	uint64_t t97 = 0LLU;

	t97 = (x437/((x438%x439)-x440));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x441 = UINT16_MAX;
	uint16_t x442 = 2U;
	uint8_t x444 = 36U;
	int32_t t98 = 49757994;

	t98 = (x441/((x442%x443)-x444));

	if (t98 != -1820) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = INT32_MAX;
	static uint64_t x446 = 25727682038136523LLU;
	uint16_t x448 = 6U;
	uint64_t t99 = 244LLU;

	t99 = (x445/((x446%x447)-x448));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

