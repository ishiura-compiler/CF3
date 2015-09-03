#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x15 = INT8_MIN;
int16_t x27 = 471;
volatile int16_t x28 = -1;
volatile uint64_t x31 = UINT64_MAX;
int16_t x47 = -10967;
int16_t x50 = INT16_MIN;
volatile int32_t x53 = -1;
static volatile int8_t x55 = INT8_MAX;
int8_t x63 = INT8_MIN;
uint32_t x65 = UINT32_MAX;
volatile int16_t x66 = 30;
int16_t x69 = 0;
volatile uint64_t x74 = 309576410LLU;
uint64_t x77 = 0LLU;
volatile int64_t t19 = 227744LL;
int16_t x88 = 2;
uint16_t x91 = UINT16_MAX;
static int32_t x98 = INT32_MIN;
volatile int64_t x99 = -24149LL;
int64_t x106 = -49568509505LL;
int64_t t25 = -528LL;
volatile int32_t x113 = INT32_MIN;
static int32_t x124 = -1;
int32_t x126 = INT32_MIN;
static int64_t x128 = INT64_MIN;
uint8_t x129 = 56U;
int64_t x131 = -116339540LL;
int16_t x132 = -1;
static int64_t x134 = INT64_MAX;
int64_t x144 = 55425725820LL;
volatile int64_t t32 = -3632856LL;
volatile uint32_t x147 = 43U;
static uint64_t x152 = UINT64_MAX;
int32_t x159 = 2;
static int64_t x164 = INT64_MAX;
uint64_t x166 = 0LLU;
int32_t x169 = INT32_MIN;
uint32_t x175 = 4227U;
static volatile int64_t t40 = 95LL;
volatile int8_t x180 = INT8_MAX;
static uint64_t t41 = 618909367479LLU;
static uint8_t x181 = 10U;
static int16_t x184 = INT16_MIN;
volatile int64_t t45 = -54662LL;
static volatile int64_t x197 = INT64_MAX;
uint32_t x205 = 192182322U;
volatile uint64_t x207 = 1LLU;
volatile uint64_t x215 = 15723LLU;
uint16_t x218 = 13107U;
volatile uint64_t x219 = 8858211354611440LLU;
int32_t x225 = -1;
static uint16_t x226 = 3U;
int32_t x229 = INT32_MIN;
volatile int8_t x231 = 4;
static int32_t x233 = INT32_MIN;
static int32_t t55 = -1;
static int16_t x238 = 1946;
static int16_t x240 = INT16_MIN;
int64_t t56 = -540493111117LL;
int32_t t57 = -811;
int32_t x246 = INT32_MIN;
volatile uint32_t x253 = 3113785U;
int16_t x256 = -1;
int8_t x260 = INT8_MAX;
int8_t x271 = INT8_MAX;
volatile int64_t t64 = 2179768355830434436LL;
int64_t x278 = -6183562932LL;
int8_t x280 = INT8_MIN;
volatile uint16_t x293 = 97U;
int32_t x297 = INT32_MAX;
uint64_t x299 = 2203285938322306LLU;
static uint64_t t69 = 8382723479LLU;
volatile int16_t x305 = INT16_MAX;
int8_t x308 = INT8_MIN;
volatile int32_t t71 = -79732;
uint32_t x309 = UINT32_MAX;
static uint64_t t74 = 13523226530230811LLU;
uint64_t x328 = 823050977480936LLU;
static int64_t x329 = -32482326520447787LL;
volatile int64_t t78 = -1LL;
volatile int32_t x350 = -102527089;
static int32_t x352 = 130157;
volatile uint32_t x366 = 39892U;
volatile uint32_t t84 = 45U;
uint16_t x370 = 3797U;
static int16_t x376 = INT16_MIN;
int32_t x377 = INT32_MIN;
int16_t x383 = 63;
int8_t x384 = INT8_MIN;
uint64_t t88 = 150487LLU;
uint32_t x393 = 15525U;
volatile int32_t t93 = 562232;
uint64_t x414 = 447200724LLU;
volatile uint64_t t94 = 613495813224104276LLU;
static uint32_t x426 = UINT32_MAX;
int64_t t97 = 126LL;
static uint32_t x429 = 1944964510U;
int32_t x432 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = -31;
	static volatile int32_t x3 = INT32_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -1039026;

	t0 = ((x1-(x2|x3))%x4);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 106154U;
	int32_t x8 = -1;
	volatile int64_t t1 = 378309992LL;

	t1 = ((x5-(x6|x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -28775889LL;
	volatile uint16_t x10 = 12342U;
	static volatile uint32_t x11 = 22811736U;
	volatile uint16_t x12 = 11U;
	volatile int64_t t2 = -163052554LL;

	t2 = ((x9-(x10|x11))%x12);

	if (t2 != -3LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -337721118332160LL;
	static volatile int32_t x14 = 99521;
	int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 176163048138LL;

	t3 = ((x13-(x14|x15))%x16);

	if (t3 != -1397396673LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 1557728742547LLU;
	int8_t x19 = -1;
	int16_t x20 = -1;
	volatile uint64_t t4 = 8996523258729862LLU;

	t4 = ((x17-(x18|x19))%x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int32_t x22 = INT32_MAX;
	volatile int16_t x23 = INT16_MIN;
	uint8_t x24 = 20U;
	int32_t t5 = -129537;

	t5 = ((x21-(x22|x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int8_t x26 = 1;
	volatile int64_t t6 = -651181LL;

	t6 = ((x25-(x26|x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 0U;
	uint32_t x30 = 26U;
	static uint8_t x32 = 1U;
	uint64_t t7 = 1LLU;

	t7 = ((x29-(x30|x31))%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1851889554116LL;
	static uint64_t x34 = 2146693745953061786LLU;
	volatile uint32_t x35 = UINT32_MAX;
	volatile int16_t x36 = -1;
	uint64_t t8 = 38173301160168LLU;

	t8 = ((x33-(x34|x35))%x36);

	if (t8 != 16300048474140306749LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 2089241018U;
	uint8_t x42 = UINT8_MAX;
	volatile uint16_t x43 = 1U;
	int32_t x44 = INT32_MIN;
	static volatile uint32_t t9 = 7U;

	t9 = ((x41-(x42|x43))%x44);

	if (t9 != 2089240763U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	static volatile uint64_t x46 = UINT64_MAX;
	static uint32_t x48 = UINT32_MAX;
	uint64_t t10 = 8362271441652187LLU;

	t10 = ((x45-(x46|x47))%x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -22841911273304LL;
	int16_t x51 = INT16_MAX;
	uint8_t x52 = 11U;
	volatile int64_t t11 = 3640252LL;

	t11 = ((x49-(x50|x51))%x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x54 = 485U;
	uint16_t x56 = 447U;
	static int32_t t12 = -4877743;

	t12 = ((x53-(x54|x55))%x56);

	if (t12 != -65) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	int64_t x60 = -1LL;
	volatile uint64_t t13 = 261215201092673LLU;

	t13 = ((x57-(x58|x59))%x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 0;
	uint32_t x62 = 1160690U;
	int8_t x64 = -8;
	volatile uint32_t t14 = 1284U;

	t14 = ((x61-(x62|x63))%x64);

	if (t14 != 14U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x67 = 160447242001939081LLU;
	uint64_t x68 = 32985034045800LLU;
	uint64_t t15 = 8107740137LLU;

	t15 = ((x65-(x66|x67))%x68);

	if (t15 != 20676657930008LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x70 = -1;
	uint8_t x71 = 7U;
	int64_t x72 = -1LL;
	volatile int64_t t16 = 2082745400LL;

	t16 = ((x69-(x70|x71))%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x73 = UINT32_MAX;
	uint16_t x75 = 179U;
	int64_t x76 = INT64_MIN;
	uint64_t t17 = 3042447269LLU;

	t17 = ((x73-(x74|x75))%x76);

	if (t17 != 3985390852LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = 234692857479938143LL;
	uint64_t x79 = 0LLU;
	int8_t x80 = INT8_MIN;
	static volatile uint64_t t18 = 778460966841LLU;

	t18 = ((x77-(x78|x79))%x80);

	if (t18 != 18212051216229613473LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -3071;
	static int64_t x82 = -1LL;
	static int32_t x83 = INT32_MAX;
	uint32_t x84 = UINT32_MAX;

	t19 = ((x81-(x82|x83))%x84);

	if (t19 != -3070LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	uint64_t x86 = 294690LLU;
	static volatile uint64_t x87 = UINT64_MAX;
	static volatile uint64_t t20 = 1902166362255193363LLU;

	t20 = ((x85-(x86|x87))%x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = 235;
	int8_t x92 = 46;
	int32_t t21 = 240514;

	t21 = ((x89-(x90|x91))%x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	static int16_t x100 = INT16_MAX;
	volatile int64_t t22 = 8753261342LL;

	t22 = ((x97-(x98|x99))%x100);

	if (t22 != 24150LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MAX;
	uint32_t x102 = 1189U;
	static uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MAX;
	uint32_t t23 = 106U;

	t23 = ((x101-(x102|x103))%x104);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	int8_t x107 = -1;
	int8_t x108 = INT8_MIN;
	int64_t t24 = -938810167407148LL;

	t24 = ((x105-(x106|x107))%x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 955193823722LL;
	int32_t x110 = -12;
	int32_t x111 = INT32_MIN;
	static int64_t x112 = INT64_MIN;

	t25 = ((x109-(x110|x111))%x112);

	if (t25 != 955193823734LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x114 = 32U;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = -5;
	int64_t t26 = -14641461LL;

	t26 = ((x113-(x114|x115))%x116);

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = 1;
	uint32_t x122 = UINT32_MAX;
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t27 = 23LLU;

	t27 = ((x121-(x122|x123))%x124);

	if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = 4265625393498301012LL;
	volatile int64_t x127 = -401331024LL;
	static volatile int64_t t28 = 357041125417559LL;

	t28 = ((x125-(x126|x127))%x128);

	if (t28 != 4265625393899632036LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x130 = 11241U;
	int64_t t29 = -2LL;

	t29 = ((x129-(x130|x131))%x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	int32_t x135 = 218;
	int8_t x136 = -1;
	int64_t t30 = -2364024439140694LL;

	t30 = ((x133-(x134|x135))%x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x137 = UINT64_MAX;
	uint8_t x138 = 2U;
	int32_t x139 = -383;
	int16_t x140 = INT16_MAX;
	static volatile uint64_t t31 = 1LLU;

	t31 = ((x137-(x138|x139))%x140);

	if (t31 != 380LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 268;
	static int32_t x142 = 0;
	int64_t x143 = -11243297935295LL;

	t32 = ((x141-(x142|x143))%x144);

	if (t32 != 47301319923LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -4295551003LL;
	static int32_t x146 = INT32_MIN;
	int64_t x148 = -1LL;
	volatile int64_t t33 = 1583661031259151166LL;

	t33 = ((x145-(x146|x147))%x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 15U;
	int32_t x150 = INT32_MIN;
	static int8_t x151 = -16;
	static volatile uint64_t t34 = 182966313567543LLU;

	t34 = ((x149-(x150|x151))%x152);

	if (t34 != 31LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MAX;
	volatile uint64_t x154 = 14639LLU;
	static uint64_t x155 = 626069706LLU;
	int32_t x156 = -1;
	uint64_t t35 = 14797519018812109LLU;

	t35 = ((x153-(x154|x155))%x156);

	if (t35 != 1521403408LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = -104;
	uint8_t x158 = 120U;
	uint8_t x160 = 59U;
	volatile int32_t t36 = 36;

	t36 = ((x157-(x158|x159))%x160);

	if (t36 != -49) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = -6078;
	volatile int64_t t37 = 109597379004028492LL;

	t37 = ((x161-(x162|x163))%x164);

	if (t37 != 256LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 1U;
	volatile int32_t x167 = -16023;
	int32_t x168 = INT32_MIN;
	uint64_t t38 = 16073529117378LLU;

	t38 = ((x165-(x166|x167))%x168);

	if (t38 != 16024LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x170 = UINT32_MAX;
	volatile int64_t x171 = -1LL;
	uint8_t x172 = 125U;
	int64_t t39 = -1422LL;

	t39 = ((x169-(x170|x171))%x172);

	if (t39 != -22LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = -12804;
	int64_t x176 = INT64_MIN;

	t40 = ((x173-(x174|x175))%x176);

	if (t40 != 8577LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x177 = 0U;
	volatile uint64_t x178 = 3082787840742LLU;
	volatile int32_t x179 = INT32_MIN;

	t41 = ((x177-(x178|x179))%x180);

	if (t41 != 78LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = INT32_MAX;
	volatile int8_t x183 = INT8_MIN;
	int32_t t42 = -6;

	t42 = ((x181-(x182|x183))%x184);

	if (t42 != 11) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = 10837294;
	uint8_t x186 = UINT8_MAX;
	static uint32_t x187 = 3U;
	int16_t x188 = -1;
	uint32_t t43 = 70960998U;

	t43 = ((x185-(x186|x187))%x188);

	if (t43 != 10837039U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = INT8_MIN;
	int32_t x190 = 665306;
	volatile int64_t x191 = 61149266834LL;
	int8_t x192 = INT8_MAX;
	volatile int64_t t44 = -2606973409LL;

	t44 = ((x189-(x190|x191))%x192);

	if (t44 != -54LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 247U;
	static int64_t x194 = -1LL;
	int32_t x195 = 39802247;
	volatile int8_t x196 = INT8_MAX;

	t45 = ((x193-(x194|x195))%x196);

	if (t45 != 121LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x198 = 445237928;
	int32_t x199 = INT32_MAX;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t46 = 435675956827891708LLU;

	t46 = ((x197-(x198|x199))%x200);

	if (t46 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 30537752820LLU;
	int64_t x202 = -1297225688LL;
	int16_t x203 = 9983;
	int64_t x204 = 2852LL;
	uint64_t t47 = 1228159034051438LLU;

	t47 = ((x201-(x202|x203))%x204);

	if (t47 != 189LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x206 = 7307U;
	volatile int64_t x208 = 1LL;
	uint64_t t48 = 0LLU;

	t48 = ((x205-(x206|x207))%x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x209 = UINT16_MAX;
	uint32_t x210 = UINT32_MAX;
	static volatile int16_t x211 = -1;
	int8_t x212 = INT8_MAX;
	static volatile uint32_t t49 = 1544877U;

	t49 = ((x209-(x210|x211))%x212);

	if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	int64_t x214 = INT64_MIN;
	uint16_t x216 = UINT16_MAX;
	static volatile uint64_t t50 = 383636821437LLU;

	t50 = ((x213-(x214|x215))%x216);

	if (t50 != 17044LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = 1;
	static volatile int32_t x220 = INT32_MAX;
	uint64_t t51 = 11540220206954LLU;

	t51 = ((x217-(x218|x219))%x220);

	if (t51 != 1922944787LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = 13016054405230521LL;
	volatile uint16_t x222 = UINT16_MAX;
	int32_t x223 = INT32_MIN;
	volatile int32_t x224 = INT32_MIN;
	static int64_t t52 = -3LL;

	t52 = ((x221-(x222|x223))%x224);

	if (t52 != 1395814330LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	static int32_t t53 = 518;

	t53 = ((x225-(x226|x227))%x228);

	if (t53 != 124) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x230 = INT64_MIN;
	volatile int64_t x232 = -1LL;
	int64_t t54 = 8062649632LL;

	t54 = ((x229-(x230|x231))%x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x234 = 108U;
	int8_t x235 = INT8_MIN;
	volatile int32_t x236 = -118896722;

	t55 = ((x233-(x234|x235))%x236);

	if (t55 != -7342632) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -1LL;
	int32_t x239 = INT32_MIN;

	t56 = ((x237-(x238|x239))%x240);

	if (t56 != 30821LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -1;
	uint16_t x242 = 62U;
	int8_t x243 = 0;
	int32_t x244 = -1949380;

	t57 = ((x241-(x242|x243))%x244);

	if (t57 != -63) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	int64_t x247 = INT64_MIN;
	uint8_t x248 = 40U;
	static volatile int64_t t58 = 178896741432LL;

	t58 = ((x245-(x246|x247))%x248);

	if (t58 != 15LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 37U;
	int64_t x252 = INT64_MIN;
	int64_t t59 = 3751984337435981568LL;

	t59 = ((x249-(x250|x251))%x252);

	if (t59 != 9223372036854775643LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x254 = INT8_MIN;
	int64_t x255 = -1LL;
	int64_t t60 = 27380035074228503LL;

	t60 = ((x253-(x254|x255))%x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	static volatile int64_t t61 = 431629094253808LL;

	t61 = ((x257-(x258|x259))%x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	static volatile uint64_t x267 = UINT64_MAX;
	static int16_t x268 = 14396;
	volatile uint64_t t62 = 13767894609LLU;

	t62 = ((x265-(x266|x267))%x268);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x269 = INT8_MIN;
	static uint32_t x270 = 8312826U;
	int64_t x272 = -8784456553031029LL;
	int64_t t63 = 63093473385754525LL;

	t63 = ((x269-(x270|x271))%x272);

	if (t63 != 4286654337LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = -1;
	volatile int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile uint16_t x276 = UINT16_MAX;

	t64 = ((x273-(x274|x275))%x276);

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = -14;
	volatile int8_t x279 = -1;
	int64_t t65 = -42435372LL;

	t65 = ((x277-(x278|x279))%x280);

	if (t65 != -13LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -410007667;
	volatile uint16_t x286 = 1U;
	static uint16_t x287 = 28868U;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t66 = 2865286129249LLU;

	t66 = ((x285-(x286|x287))%x288);

	if (t66 != 18446744073299515080LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -1LL;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	volatile int32_t x292 = -1;
	static int64_t t67 = -126489008247LL;

	t67 = ((x289-(x290|x291))%x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x294 = INT64_MIN;
	volatile int16_t x295 = INT16_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile int64_t t68 = 14081706942LL;

	t68 = ((x293-(x294|x295))%x296);

	if (t68 != 98LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = 11;
	uint32_t x300 = UINT32_MAX;

	t69 = ((x297-(x298|x299))%x300);

	if (t69 != 71757973LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = -1LL;
	uint32_t x302 = 63880319U;
	static int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	static int64_t t70 = 348284LL;

	t70 = ((x301-(x302|x303))%x304);

	if (t70 != -2211363968LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x306 = 207U;
	static int8_t x307 = INT8_MAX;

	t71 = ((x305-(x306|x307))%x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x310 = 87LLU;
	int8_t x311 = -1;
	int8_t x312 = -1;
	uint64_t t72 = 46264362LLU;

	t72 = ((x309-(x310|x311))%x312);

	if (t72 != 4294967296LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MAX;
	int16_t x318 = -93;
	int32_t x319 = 129686994;
	static uint8_t x320 = UINT8_MAX;
	static volatile int32_t t73 = -278679;

	t73 = ((x317-(x318|x319))%x320);

	if (t73 != 140) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x321 = INT64_MIN;
	static uint64_t x322 = UINT64_MAX;
	static uint16_t x323 = UINT16_MAX;
	static uint8_t x324 = UINT8_MAX;

	t74 = ((x321-(x322|x323))%x324);

	if (t74 != 129LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = -1;
	int8_t x327 = 28;
	uint64_t t75 = 230160501LLU;

	t75 = ((x325-(x326|x327))%x328);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x330 = INT8_MIN;
	volatile int64_t x331 = -1LL;
	int16_t x332 = INT16_MAX;
	static volatile int64_t t76 = -1096710987607108951LL;

	t76 = ((x329-(x330|x331))%x332);

	if (t76 != -23614LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = 1;
	volatile int64_t x334 = INT64_MIN;
	static int8_t x335 = -1;
	int8_t x336 = INT8_MIN;
	volatile int64_t t77 = 246204618444414LL;

	t77 = ((x333-(x334|x335))%x336);

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int16_t x339 = 1498;
	int16_t x340 = -110;

	t78 = ((x337-(x338|x339))%x340);

	if (t78 != -88LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = 92;
	volatile int32_t x342 = -1;
	volatile uint32_t x343 = 357182U;
	volatile int16_t x344 = -1;
	volatile uint32_t t79 = 129959U;

	t79 = ((x341-(x342|x343))%x344);

	if (t79 != 93U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -11015404804913378LL;
	uint32_t x346 = 59U;
	int64_t x347 = -1LL;
	static int8_t x348 = -1;
	volatile int64_t t80 = 867700920941LL;

	t80 = ((x345-(x346|x347))%x348);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = -21;
	uint32_t x351 = 45U;
	static volatile uint32_t t81 = 0U;

	t81 = ((x349-(x350|x351))%x352);

	if (t81 != 93477U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 1358619752U;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -2916084756859486748LL;
	int32_t x356 = INT32_MIN;
	int64_t t82 = 1248641297884897LL;

	t82 = ((x353-(x354|x355))%x356);

	if (t82 != 881157764LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -1;
	uint64_t x358 = 92021LLU;
	int32_t x359 = -1;
	static uint16_t x360 = 349U;
	uint64_t t83 = 22041LLU;

	t83 = ((x357-(x358|x359))%x360);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	static int8_t x367 = -1;
	int8_t x368 = INT8_MIN;

	t84 = ((x365-(x366|x367))%x368);

	if (t84 != 4294934529U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x369 = 47;
	int16_t x371 = 59;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t85 = 66383473;

	t85 = ((x369-(x370|x371))%x372);

	if (t85 != -3792) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x373 = INT32_MIN;
	volatile int64_t x374 = 851506754651LL;
	int32_t x375 = -161197600;
	static volatile int64_t t86 = 227328LL;

	t86 = ((x373-(x374|x375))%x376);

	if (t86 != -30203LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x378 = 23048801LLU;
	int16_t x379 = INT16_MAX;
	static int8_t x380 = INT8_MAX;
	uint64_t t87 = 76LLU;

	t87 = ((x377-(x378|x379))%x380);

	if (t87 != 111LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = INT16_MIN;
	uint64_t x382 = UINT64_MAX;

	t88 = ((x381-(x382|x383))%x384);

	if (t88 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = UINT8_MAX;
	int64_t t89 = 44958832704LL;

	t89 = ((x385-(x386|x387))%x388);

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x389 = INT32_MIN;
	int64_t x390 = -1218024931533489LL;
	static volatile int16_t x391 = INT16_MIN;
	uint16_t x392 = UINT16_MAX;
	static volatile int64_t t90 = -788333857147860LL;

	t90 = ((x389-(x390|x391))%x392);

	if (t90 != -23887LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x394 = -59;
	int8_t x395 = -1;
	uint8_t x396 = 3U;
	static uint32_t t91 = 18U;

	t91 = ((x393-(x394|x395))%x396);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = -1;
	static int32_t x398 = INT32_MIN;
	uint16_t x399 = 1U;
	volatile int64_t x400 = INT64_MIN;
	int64_t t92 = 15328254886LL;

	t92 = ((x397-(x398|x399))%x400);

	if (t92 != 2147483646LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x409 = -1;
	int32_t x410 = INT32_MIN;
	int32_t x411 = -1;
	volatile int32_t x412 = INT32_MIN;

	t93 = ((x409-(x410|x411))%x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x413 = 117U;
	int8_t x415 = INT8_MIN;
	int8_t x416 = -1;

	t94 = ((x413-(x414|x415))%x416);

	if (t94 != 161LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x417 = INT16_MAX;
	static uint8_t x418 = 55U;
	int8_t x419 = -1;
	volatile int8_t x420 = -45;
	volatile int32_t t95 = 301436957;

	t95 = ((x417-(x418|x419))%x420);

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = -1;
	int32_t x422 = INT32_MAX;
	uint8_t x423 = UINT8_MAX;
	static volatile uint64_t x424 = UINT64_MAX;
	volatile uint64_t t96 = 35418618054LLU;

	t96 = ((x421-(x422|x423))%x424);

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x425 = 12572872U;
	int64_t x427 = -1LL;
	int32_t x428 = -2;

	t97 = ((x425-(x426|x427))%x428);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x430 = INT16_MIN;
	volatile int8_t x431 = -1;
	uint32_t t98 = 53624U;

	t98 = ((x429-(x430|x431))%x432);

	if (t98 != 1944964511U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x433 = INT16_MIN;
	static int16_t x434 = INT16_MIN;
	static volatile int8_t x435 = 39;
	int8_t x436 = INT8_MIN;
	int32_t t99 = 7883077;

	t99 = ((x433-(x434|x435))%x436);

	if (t99 != -39) { NG(); } else { ; }
	
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

