#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
static int32_t x8 = 368602353;
volatile int32_t x11 = -52;
volatile int8_t x15 = 13;
int8_t x19 = INT8_MIN;
int8_t x29 = INT8_MAX;
uint32_t x30 = 922350242U;
static int8_t x32 = INT8_MIN;
int32_t x34 = -1;
volatile int16_t x35 = -64;
static uint64_t x36 = 6888285243209168LLU;
static volatile int16_t x39 = -755;
int32_t x41 = 270;
uint64_t t9 = 775961678540LLU;
int32_t x48 = -5;
static volatile int64_t t10 = 8760592096723LL;
volatile int8_t x76 = INT8_MIN;
int64_t x79 = INT64_MIN;
int64_t t15 = 57476LL;
int16_t x97 = -1;
int64_t x98 = INT64_MAX;
int8_t x102 = INT8_MIN;
int16_t x106 = INT16_MIN;
volatile int16_t x107 = 4219;
int16_t x111 = -20;
int8_t x112 = INT8_MAX;
volatile int64_t t25 = -867348661LL;
int64_t t27 = 1210727797093710LL;
volatile int64_t x142 = INT64_MIN;
int64_t x145 = INT64_MIN;
int32_t x152 = 254;
int64_t t33 = 1403264219701432LL;
int16_t x159 = INT16_MIN;
int32_t x162 = 1;
uint64_t x169 = 524136934250805LLU;
int16_t x183 = INT16_MIN;
static int32_t x189 = INT32_MAX;
static volatile int32_t t39 = 0;
volatile uint64_t t41 = 7945343980911622LLU;
int32_t x201 = INT32_MIN;
int64_t x202 = -1223LL;
int32_t x204 = 2787;
uint8_t x205 = UINT8_MAX;
int8_t x208 = INT8_MIN;
static int32_t t43 = -200036891;
int32_t x213 = 1;
uint32_t x221 = UINT32_MAX;
uint8_t x228 = UINT8_MAX;
int32_t x236 = INT32_MIN;
uint64_t x238 = 11616LLU;
uint64_t t50 = 17680627283395942LLU;
uint16_t x243 = 5U;
int64_t x246 = INT64_MAX;
int32_t x247 = INT32_MIN;
uint8_t x248 = 6U;
int64_t x266 = INT64_MIN;
int32_t t57 = 153;
int64_t x273 = -277106LL;
static volatile int16_t x276 = 0;
int64_t t58 = 123100842827LL;
volatile int64_t x277 = INT64_MIN;
static int16_t x279 = INT16_MAX;
volatile int64_t t59 = -10439253LL;
static int16_t x281 = INT16_MAX;
int8_t x283 = INT8_MIN;
int64_t x293 = -1LL;
int32_t x299 = -1;
static uint32_t x306 = 229933420U;
static int64_t x307 = 61614214LL;
volatile int64_t x321 = -1LL;
int8_t x322 = -3;
volatile int32_t t70 = -4887885;
int8_t x345 = -1;
int64_t x354 = INT64_MIN;
static volatile int8_t x360 = INT8_MIN;
static volatile uint64_t t74 = 28276267859927007LLU;
int32_t x361 = INT32_MAX;
int64_t x362 = INT64_MIN;
volatile uint32_t x367 = 16951U;
int64_t t76 = 6785LL;
uint64_t x378 = UINT64_MAX;
int8_t x379 = INT8_MIN;
static volatile int64_t x397 = -41LL;
volatile int8_t x400 = -1;
int32_t x401 = INT32_MIN;
static volatile int32_t t85 = 1453;
static volatile uint32_t x410 = 207959780U;
int8_t x415 = INT8_MAX;
uint32_t t87 = 102292467U;
int32_t x427 = INT32_MIN;
volatile int8_t x428 = -1;
volatile int64_t t88 = -14660102706LL;
int64_t x432 = 6532475372950411LL;
int16_t x453 = INT16_MIN;
int32_t x457 = INT32_MAX;
volatile uint8_t x460 = 28U;
int32_t x466 = -1;
uint64_t x475 = 825163000170594643LLU;
static int16_t x476 = -1;
volatile uint64_t x477 = 30711LLU;
int64_t x482 = -1LL;
static int16_t x484 = -1;


void f0(void) {
	int8_t x1 = -1;
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = 14U;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 1556770;

	t0 = (((x1/x2)+x3)-x4);

	if (t0 != -2147483633) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint32_t x6 = UINT32_MAX;
	static volatile uint32_t t1 = 15199279U;

	t1 = (((x5/x6)+x7)-x8);

	if (t1 != 1778881295U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static volatile uint16_t x10 = 23524U;
	int64_t x12 = 1020833750543574LL;
	volatile int64_t t2 = 51430LL;

	t2 = (((x9/x10)+x11)-x12);

	if (t2 != -1020833750543627LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -15635;
	static int32_t x14 = 1092874;
	int32_t x16 = -1;
	volatile int32_t t3 = -15323;

	t3 = (((x13/x14)+x15)-x16);

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	static volatile int8_t x18 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -178665;

	t4 = (((x17/x18)+x19)-x20);

	if (t4 != 16809856) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -1LL;
	static int16_t x26 = INT16_MIN;
	volatile uint8_t x27 = 0U;
	static int16_t x28 = INT16_MIN;
	int64_t t5 = -209875131069LL;

	t5 = (((x25/x26)+x27)-x28);

	if (t5 != 32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x31 = INT32_MIN;
	static uint32_t t6 = 484611951U;

	t6 = (((x29/x30)+x31)-x32);

	if (t6 != 2147483776U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	volatile uint64_t t7 = 673498LLU;

	t7 = (((x33/x34)+x35)-x36);

	if (t7 != 18439855788466342385LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	uint64_t x38 = 463LLU;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t8 = 333777812251207639LLU;

	t8 = (((x37/x38)+x39)-x40);

	if (t8 != 39841779856856098LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	uint64_t x44 = 824LLU;

	t9 = (((x41/x42)+x43)-x44);

	if (t9 != 9223372036854774984LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int16_t x46 = 77;
	int64_t x47 = 123875958008317LL;

	t10 = (((x45/x46)+x47)-x48);

	if (t10 != 123875958008322LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x58 = INT64_MIN;
	uint8_t x59 = 124U;
	int32_t x60 = -1;
	int64_t t11 = 2185722267076LL;

	t11 = (((x57/x58)+x59)-x60);

	if (t11 != 125LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x65 = 3U;
	uint32_t x66 = 5U;
	static int32_t x67 = INT32_MAX;
	volatile int8_t x68 = INT8_MAX;
	uint32_t t12 = 14788U;

	t12 = (((x65/x66)+x67)-x68);

	if (t12 != 2147483520U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -1;
	int64_t x70 = -5511230000LL;
	volatile int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	volatile int64_t t13 = 487LL;

	t13 = (((x69/x70)+x71)-x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 18U;
	uint16_t x74 = 6316U;
	static uint64_t x75 = 4442LLU;
	uint64_t t14 = 4LLU;

	t14 = (((x73/x74)+x75)-x76);

	if (t14 != 4570LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	uint32_t x78 = 1U;
	int8_t x80 = INT8_MIN;

	t15 = (((x77/x78)+x79)-x80);

	if (t15 != -9223372032559808385LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x81 = 14896561188LLU;
	int8_t x82 = INT8_MIN;
	static volatile uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MAX;
	static uint64_t t16 = 41199594LLU;

	t16 = (((x81/x82)+x83)-x84);

	if (t16 != 32768LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MIN;
	static uint32_t x87 = 312911491U;
	uint32_t x88 = UINT32_MAX;
	uint32_t t17 = 0U;

	t17 = (((x85/x86)+x87)-x88);

	if (t17 != 312911492U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	int32_t x92 = 4726;
	volatile int64_t t18 = -417548436LL;

	t18 = (((x89/x90)+x91)-x92);

	if (t18 != -4727LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	int64_t x94 = INT64_MAX;
	uint16_t x95 = 3U;
	int64_t x96 = -1551LL;
	static volatile int64_t t19 = 1672184956LL;

	t19 = (((x93/x94)+x95)-x96);

	if (t19 != 1554LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x99 = INT8_MIN;
	uint16_t x100 = 29U;
	int64_t t20 = 1570261309LL;

	t20 = (((x97/x98)+x99)-x100);

	if (t20 != -157LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 235132140026963LLU;
	volatile int16_t x103 = -11323;
	int8_t x104 = -1;
	uint64_t t21 = 10956008689651LLU;

	t21 = (((x101/x102)+x103)-x104);

	if (t21 != 18446744073709540294LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = INT64_MIN;
	int16_t x108 = 6;
	volatile int64_t t22 = -8010487010406058LL;

	t22 = (((x105/x106)+x107)-x108);

	if (t22 != 281474976714869LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = 219;
	static volatile int32_t t23 = 7;

	t23 = (((x109/x110)+x111)-x112);

	if (t23 != -9806008) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 9U;
	int8_t x114 = -1;
	volatile int16_t x115 = -1;
	static int16_t x116 = INT16_MAX;
	int32_t t24 = -55345920;

	t24 = (((x113/x114)+x115)-x116);

	if (t24 != -32777) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	static volatile int8_t x118 = INT8_MIN;
	static int64_t x119 = 578LL;
	int16_t x120 = INT16_MIN;

	t25 = (((x117/x118)+x119)-x120);

	if (t25 != 16810562LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 217822U;
	int8_t x122 = -1;
	static int8_t x123 = INT8_MAX;
	uint32_t x124 = 2U;
	volatile uint32_t t26 = 81472574U;

	t26 = (((x121/x122)+x123)-x124);

	if (t26 != 125U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x130 = 7U;
	static int16_t x131 = INT16_MAX;
	static int32_t x132 = INT32_MIN;

	t27 = (((x129/x130)+x131)-x132);

	if (t27 != -1317624574546022986LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x133 = 22035819749588944LLU;
	int8_t x134 = -1;
	volatile uint8_t x135 = 20U;
	uint8_t x136 = 4U;
	static volatile uint64_t t28 = 243891704453161LLU;

	t28 = (((x133/x134)+x135)-x136);

	if (t28 != 16LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MAX;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	uint16_t x140 = UINT16_MAX;
	uint64_t t29 = 628256864385574924LLU;

	t29 = (((x137/x138)+x139)-x140);

	if (t29 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x141 = 72LLU;
	volatile int16_t x143 = 1;
	static uint32_t x144 = UINT32_MAX;
	volatile uint64_t t30 = 4373890956211515LLU;

	t30 = (((x141/x142)+x143)-x144);

	if (t30 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = INT32_MIN;
	int64_t x147 = -1LL;
	volatile int8_t x148 = INT8_MIN;
	static volatile int64_t t31 = 42816307805442LL;

	t31 = (((x145/x146)+x147)-x148);

	if (t31 != 4294967423LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -3;
	static int8_t x150 = INT8_MIN;
	uint8_t x151 = 11U;
	int32_t t32 = 13;

	t32 = (((x149/x150)+x151)-x152);

	if (t32 != -243) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	static int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -1LL;

	t33 = (((x153/x154)+x155)-x156);

	if (t33 != 6442450944LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 15U;
	uint64_t x158 = 3LLU;
	int16_t x160 = 1;
	uint64_t t34 = 306851878LLU;

	t34 = (((x157/x158)+x159)-x160);

	if (t34 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 0;
	int16_t x163 = -4070;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t35 = -7299;

	t35 = (((x161/x162)+x163)-x164);

	if (t35 != -4325) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 1159290572432684404LLU;
	int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MAX;
	volatile int16_t x168 = INT16_MIN;
	volatile uint64_t t36 = 62185706LLU;

	t36 = (((x165/x166)+x167)-x168);

	if (t36 != 2147516415LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x170 = INT8_MAX;
	volatile int64_t x171 = -1LL;
	uint8_t x172 = 1U;
	uint64_t t37 = 1775714627LLU;

	t37 = (((x169/x170)+x171)-x172);

	if (t37 != 4127062474413LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = 588LL;
	uint32_t x182 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	static volatile int64_t t38 = -24LL;

	t38 = (((x181/x182)+x183)-x184);

	if (t38 != -32640LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x190 = -5;
	int16_t x191 = 0;
	uint8_t x192 = 59U;

	t39 = (((x189/x190)+x191)-x192);

	if (t39 != -429496788) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = 122U;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t40 = -3562;

	t40 = (((x193/x194)+x195)-x196);

	if (t40 != -5) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x197 = 2463654291497225LLU;
	volatile int32_t x198 = INT32_MIN;
	static int8_t x199 = -1;
	int32_t x200 = INT32_MIN;

	t41 = (((x197/x198)+x199)-x200);

	if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x203 = 516883629;
	static int64_t t42 = -215364715617345834LL;

	t42 = (((x201/x202)+x203)-x204);

	if (t42 != 518636756LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x206 = 1U;
	int16_t x207 = INT16_MIN;

	t43 = (((x205/x206)+x207)-x208);

	if (t43 != -32385) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = 8847314521174154450LLU;
	int64_t x210 = INT64_MIN;
	static int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	volatile uint64_t t44 = 2LLU;

	t44 = (((x209/x210)+x211)-x212);

	if (t44 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x214 = 25631196501756LLU;
	static uint64_t x215 = UINT64_MAX;
	static int8_t x216 = 1;
	uint64_t t45 = 7LLU;

	t45 = (((x213/x214)+x215)-x216);

	if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x217 = 12198U;
	int16_t x218 = -26;
	int64_t x219 = 209LL;
	static int32_t x220 = INT32_MIN;
	volatile int64_t t46 = -335450LL;

	t46 = (((x217/x218)+x219)-x220);

	if (t46 != 2147483857LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x222 = -1LL;
	uint8_t x223 = UINT8_MAX;
	volatile int16_t x224 = INT16_MIN;
	static volatile int64_t t47 = 655423LL;

	t47 = (((x221/x222)+x223)-x224);

	if (t47 != -4294934272LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x225 = INT64_MAX;
	int32_t x226 = -43906812;
	int32_t x227 = -15650378;
	volatile int64_t t48 = -1054740507969403788LL;

	t48 = (((x225/x226)+x227)-x228);

	if (t48 != -210082645177LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x233 = -46628498;
	volatile int16_t x234 = INT16_MIN;
	volatile uint64_t x235 = 350233205518680LLU;
	uint64_t t49 = 15515387863124489LLU;

	t49 = (((x233/x234)+x235)-x236);

	if (t49 != 350235353003750LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x237 = INT16_MAX;
	int64_t x239 = 63659466535380LL;
	int32_t x240 = -460;

	t50 = (((x237/x238)+x239)-x240);

	if (t50 != 63659466535842LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = 112382883LLU;
	static volatile uint16_t x242 = 1416U;
	static int16_t x244 = INT16_MIN;
	uint64_t t51 = 30790050857125LLU;

	t51 = (((x241/x242)+x243)-x244);

	if (t51 != 112139LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = 3U;
	int64_t t52 = 368432037846834LL;

	t52 = (((x245/x246)+x247)-x248);

	if (t52 != -2147483654LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = -1;
	int16_t x250 = -4;
	static int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = (((x249/x250)+x251)-x252);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x257 = INT16_MAX;
	uint64_t x258 = 25727526296861373LLU;
	uint32_t x259 = UINT32_MAX;
	uint16_t x260 = 254U;
	volatile uint64_t t54 = 13925153LLU;

	t54 = (((x257/x258)+x259)-x260);

	if (t54 != 4294967041LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x261 = 30U;
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	uint32_t x264 = UINT32_MAX;
	uint32_t t55 = 17U;

	t55 = (((x261/x262)+x263)-x264);

	if (t55 != 4294967169U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x265 = 101U;
	int8_t x267 = -24;
	static volatile int64_t x268 = 214LL;
	int64_t t56 = -30717103507LL;

	t56 = (((x265/x266)+x267)-x268);

	if (t56 != -238LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = 6U;
	static uint16_t x270 = UINT16_MAX;
	int8_t x271 = 1;
	int8_t x272 = INT8_MIN;

	t57 = (((x269/x270)+x271)-x272);

	if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x274 = INT64_MIN;
	static int8_t x275 = INT8_MIN;

	t58 = (((x273/x274)+x275)-x276);

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x278 = UINT32_MAX;
	int32_t x280 = INT32_MIN;

	t59 = (((x277/x278)+x279)-x280);

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x282 = -149;
	volatile int16_t x284 = INT16_MAX;
	volatile int32_t t60 = 7;

	t60 = (((x281/x282)+x283)-x284);

	if (t60 != -33114) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x285 = -1;
	int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -1;
	int32_t t61 = 1643039;

	t61 = (((x285/x286)+x287)-x288);

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x289 = 678395LLU;
	static uint8_t x290 = 41U;
	uint32_t x291 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t62 = 738908180043559LLU;

	t62 = (((x289/x290)+x291)-x292);

	if (t62 != 6442467489LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x294 = INT64_MIN;
	int32_t x295 = -1277759;
	int32_t x296 = -3291;
	int64_t t63 = -10018850830360035LL;

	t63 = (((x293/x294)+x295)-x296);

	if (t63 != -1274468LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 3373U;
	static volatile int32_t x298 = INT32_MAX;
	volatile int16_t x300 = INT16_MIN;
	int32_t t64 = -8;

	t64 = (((x297/x298)+x299)-x300);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = INT8_MAX;
	static int8_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	volatile int16_t x304 = -42;
	uint32_t t65 = 12U;

	t65 = (((x301/x302)+x303)-x304);

	if (t65 != 4294967210U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	static int8_t x308 = INT8_MIN;
	volatile int64_t t66 = -25LL;

	t66 = (((x305/x306)+x307)-x308);

	if (t66 != 61614360LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = -2248;
	uint64_t x318 = 67667917803LLU;
	uint32_t x319 = 840680031U;
	uint16_t x320 = 982U;
	volatile uint64_t t67 = 1858774617289LLU;

	t67 = (((x317/x318)+x319)-x320);

	if (t67 != 1113285989LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x323 = 354U;
	int8_t x324 = 0;
	volatile int64_t t68 = 95725794LL;

	t68 = (((x321/x322)+x323)-x324);

	if (t68 != 354LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = INT16_MAX;
	uint32_t x330 = 5U;
	int8_t x331 = INT8_MAX;
	static uint16_t x332 = 26U;
	volatile uint32_t t69 = 5587U;

	t69 = (((x329/x330)+x331)-x332);

	if (t69 != 6654U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = INT16_MIN;
	static uint16_t x338 = UINT16_MAX;
	static int32_t x339 = -1;
	int8_t x340 = INT8_MIN;

	t70 = (((x337/x338)+x339)-x340);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x346 = INT32_MIN;
	int64_t x347 = -164241LL;
	int8_t x348 = -15;
	volatile int64_t t71 = -14819802LL;

	t71 = (((x345/x346)+x347)-x348);

	if (t71 != -164226LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x349 = INT32_MIN;
	int16_t x350 = 2025;
	int32_t x351 = 47944303;
	volatile int64_t x352 = INT64_MAX;
	int64_t t72 = 1496LL;

	t72 = (((x349/x350)+x351)-x352);

	if (t72 != -9223372036807891989LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x355 = 15U;
	int64_t x356 = -68752035222827609LL;
	int64_t t73 = -27LL;

	t73 = (((x353/x354)+x355)-x356);

	if (t73 != 68752035222827625LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x357 = 2172LLU;
	int64_t x358 = -1LL;
	volatile int8_t x359 = INT8_MIN;

	t74 = (((x357/x358)+x359)-x360);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x363 = 3247384;
	int8_t x364 = -1;
	int64_t t75 = -280224767634973368LL;

	t75 = (((x361/x362)+x363)-x364);

	if (t75 != 3247385LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = 1024;
	int64_t x368 = INT64_MAX;

	t76 = (((x365/x366)+x367)-x368);

	if (t76 != -9223372036854758793LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MAX;
	volatile int32_t x371 = -280;
	volatile int16_t x372 = INT16_MIN;
	volatile int64_t t77 = -96676632947116756LL;

	t77 = (((x369/x370)+x371)-x372);

	if (t77 != 72624976668180329LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 2533152866LLU;
	volatile int64_t x374 = INT64_MAX;
	volatile int16_t x375 = -1;
	static int8_t x376 = -1;
	static uint64_t t78 = 2882818999LLU;

	t78 = (((x373/x374)+x375)-x376);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x377 = 22;
	int32_t x380 = INT32_MAX;
	volatile uint64_t t79 = 236169352LLU;

	t79 = (((x377/x378)+x379)-x380);

	if (t79 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = -74;
	int16_t x382 = -49;
	static volatile int8_t x383 = 3;
	uint16_t x384 = 558U;
	volatile int32_t t80 = -55;

	t80 = (((x381/x382)+x383)-x384);

	if (t80 != -554) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x385 = UINT32_MAX;
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = 98978186U;
	volatile int32_t x388 = INT32_MIN;
	uint32_t t81 = 448630U;

	t81 = (((x385/x386)+x387)-x388);

	if (t81 != 2246527371U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x393 = -1348;
	int16_t x394 = 72;
	int64_t x395 = -1LL;
	static int32_t x396 = INT32_MIN;
	int64_t t82 = 209860742155769LL;

	t82 = (((x393/x394)+x395)-x396);

	if (t82 != 2147483629LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x398 = 160;
	int8_t x399 = 0;
	static int64_t t83 = 18831554248003272LL;

	t83 = (((x397/x398)+x399)-x400);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x402 = INT8_MAX;
	int32_t x403 = 7;
	uint8_t x404 = 1U;
	int32_t t84 = -17847;

	t84 = (((x401/x402)+x403)-x404);

	if (t84 != -16909314) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MAX;
	uint8_t x407 = 37U;
	int16_t x408 = 1;

	t85 = (((x405/x406)+x407)-x408);

	if (t85 != 35) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x409 = -1;
	int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	uint32_t t86 = 1008974572U;

	t86 = (((x409/x410)+x411)-x412);

	if (t86 != 2147516436U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 24U;
	int16_t x414 = INT16_MIN;
	uint32_t x416 = 218022801U;

	t87 = (((x413/x414)+x415)-x416);

	if (t87 != 4076944622U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x425 = 666526423U;
	static int64_t x426 = INT64_MAX;

	t88 = (((x425/x426)+x427)-x428);

	if (t88 != -2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = INT64_MIN;
	int32_t x430 = INT32_MIN;
	uint8_t x431 = 17U;
	static volatile int64_t t89 = -76504LL;

	t89 = (((x429/x430)+x431)-x432);

	if (t89 != -6532471077983098LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = -1;
	static int16_t x438 = 5363;
	static int8_t x439 = -1;
	uint32_t x440 = 5634950U;
	uint32_t t90 = 515U;

	t90 = (((x437/x438)+x439)-x440);

	if (t90 != 4289332345U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x445 = INT8_MIN;
	int16_t x446 = -1795;
	int8_t x447 = 1;
	int16_t x448 = -12;
	int32_t t91 = -235562247;

	t91 = (((x445/x446)+x447)-x448);

	if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x449 = -1872532;
	int8_t x450 = -1;
	volatile uint16_t x451 = UINT16_MAX;
	int32_t x452 = INT32_MAX;
	static volatile int32_t t92 = -21;

	t92 = (((x449/x450)+x451)-x452);

	if (t92 != -2145545580) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x454 = 1307627;
	static int32_t x455 = -1;
	static int16_t x456 = -3161;
	int32_t t93 = -4;

	t93 = (((x453/x454)+x455)-x456);

	if (t93 != 3160) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x458 = INT64_MIN;
	static int32_t x459 = 7;
	static int64_t t94 = 0LL;

	t94 = (((x457/x458)+x459)-x460);

	if (t94 != -21LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x461 = INT32_MAX;
	static volatile uint32_t x462 = 102U;
	uint16_t x463 = 2U;
	volatile uint8_t x464 = 1U;
	volatile uint32_t t95 = 23U;

	t95 = (((x461/x462)+x463)-x464);

	if (t95 != 21053762U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x465 = 90313645460462LL;
	int32_t x467 = -27;
	uint64_t x468 = UINT64_MAX;
	uint64_t t96 = 624608227544792935LLU;

	t96 = (((x465/x466)+x467)-x468);

	if (t96 != 18446653760064091128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x473 = INT64_MIN;
	int16_t x474 = INT16_MIN;
	volatile uint64_t t97 = 110LLU;

	t97 = (((x473/x474)+x475)-x476);

	if (t97 != 825444475147305300LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x478 = INT16_MIN;
	uint16_t x479 = UINT16_MAX;
	volatile int16_t x480 = -508;
	volatile uint64_t t98 = 11685469493740840LLU;

	t98 = (((x477/x478)+x479)-x480);

	if (t98 != 66043LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x481 = -1;
	static uint32_t x483 = 105954729U;
	volatile int64_t t99 = 67832029LL;

	t99 = (((x481/x482)+x483)-x484);

	if (t99 != 105954731LL) { NG(); } else { ; }
	
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
