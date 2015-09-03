#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int16_t x6 = INT16_MIN;
uint8_t x8 = UINT8_MAX;
static volatile int32_t t2 = 13502191;
volatile int16_t x17 = INT16_MIN;
int32_t x20 = -1;
static int64_t x27 = -127861022203457LL;
volatile int32_t t5 = 689624;
int32_t x32 = 39399;
uint32_t x34 = 874820U;
int32_t x35 = -36;
int32_t x40 = INT32_MIN;
int64_t x54 = -10LL;
int32_t x55 = INT32_MIN;
int64_t x56 = 8283090LL;
int8_t x59 = -1;
static uint8_t x77 = 84U;
static int32_t x79 = INT32_MIN;
static int64_t x80 = -1LL;
uint16_t x84 = UINT16_MAX;
int32_t x86 = 8;
int16_t x87 = INT16_MAX;
int32_t x89 = INT32_MAX;
volatile uint32_t x96 = 18275566U;
static volatile int64_t x97 = INT64_MIN;
volatile int16_t x100 = INT16_MAX;
int8_t x102 = -34;
int64_t x103 = -56887029619835LL;
int8_t x110 = INT8_MIN;
static int16_t x114 = 781;
static int32_t x116 = -1;
static volatile int32_t t26 = -724;
static uint8_t x120 = UINT8_MAX;
int32_t t27 = -9;
int64_t x123 = INT64_MIN;
int64_t x132 = -2352851LL;
int32_t t32 = -1387757;
int32_t t33 = -3751457;
static volatile uint8_t x146 = 0U;
int32_t x155 = 1561184;
volatile uint8_t x161 = 59U;
int64_t x166 = INT64_MIN;
static int32_t x173 = INT32_MIN;
int32_t x174 = INT32_MAX;
volatile uint64_t x179 = UINT64_MAX;
uint32_t x190 = UINT32_MAX;
int16_t x193 = INT16_MIN;
uint32_t x195 = 68211102U;
static volatile int32_t t48 = -20;
int32_t x207 = INT32_MIN;
uint64_t x209 = UINT64_MAX;
int64_t x211 = 128LL;
static volatile uint64_t x215 = 133166794917LLU;
static volatile int32_t t51 = 222;
int64_t x217 = INT64_MAX;
int8_t x218 = INT8_MAX;
uint32_t x222 = 4106226U;
int16_t x223 = INT16_MIN;
static int64_t x231 = -1LL;
int16_t x232 = 14244;
int32_t t54 = 1900799;
volatile int32_t t55 = -21848571;
volatile int32_t x249 = INT32_MIN;
int16_t x250 = INT16_MIN;
static volatile int32_t t59 = 1008571;
static int64_t x264 = INT64_MAX;
uint32_t x269 = UINT32_MAX;
uint8_t x270 = 11U;
int8_t x271 = -1;
static uint8_t x275 = 7U;
int64_t x276 = -763LL;
volatile int32_t t64 = -67425431;
static int64_t x278 = 41958665LL;
static int16_t x280 = 84;
uint32_t x282 = UINT32_MAX;
volatile int32_t t66 = -608942740;
int32_t t69 = 308775;
static uint16_t x299 = 53U;
uint64_t x301 = UINT64_MAX;
uint64_t x304 = UINT64_MAX;
volatile int8_t x306 = -1;
int8_t x311 = -1;
int16_t x316 = INT16_MIN;
volatile int16_t x320 = -621;
volatile int32_t t75 = 25;
uint64_t x321 = UINT64_MAX;
static int16_t x325 = INT16_MAX;
int32_t t77 = 10;
uint16_t x329 = UINT16_MAX;
static int32_t t78 = -868820;
int32_t x339 = INT32_MIN;
static volatile int8_t x349 = INT8_MIN;
int16_t x360 = -477;
volatile int32_t x364 = -887118905;
static volatile int32_t t85 = 737;
int8_t x366 = INT8_MIN;
volatile int16_t x369 = INT16_MAX;
static volatile int32_t t89 = 498;
int32_t x382 = 12299693;
int16_t x391 = -1;
int32_t x392 = -33445782;
static int32_t x397 = 648309426;
static volatile uint64_t x404 = 91412527LLU;
int8_t x409 = INT8_MIN;
int16_t x415 = INT16_MIN;
volatile int32_t t96 = -1573579;
static uint32_t x418 = 2U;
int8_t x425 = INT8_MIN;
int32_t t99 = 58574;


void f0(void) {
	static int32_t x7 = -6863;
	volatile int32_t t0 = -279898133;

	t0 = (x5<=((x6|x7)-x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 13LLU;
	int16_t x12 = 0;
	volatile int32_t t1 = 56338245;

	t1 = (x9<=((x10|x11)-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 29U;
	uint8_t x14 = 9U;
	int16_t x15 = 5494;
	volatile int64_t x16 = -1LL;

	t2 = (x13<=((x14|x15)-x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x18 = INT8_MAX;
	static volatile uint64_t x19 = UINT64_MAX;
	static volatile int32_t t3 = -15231904;

	t3 = (x17<=((x18|x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 5U;
	int8_t x22 = INT8_MIN;
	static uint16_t x23 = UINT16_MAX;
	volatile int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 1;

	t4 = (x21<=((x22|x23)-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MAX;
	volatile uint16_t x28 = 2047U;

	t5 = (x25<=((x26|x27)-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 23U;
	uint64_t x30 = UINT64_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile int32_t t6 = 9242;

	t6 = (x29<=((x30|x31)-x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 2483122398139270348LLU;
	static uint64_t x36 = UINT64_MAX;
	int32_t t7 = 211173;

	t7 = (x33<=((x34|x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = 1178854LL;
	static int64_t x38 = INT64_MIN;
	int16_t x39 = 3;
	static int32_t t8 = -821027286;

	t8 = (x37<=((x38|x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -969;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = -37;
	static volatile int32_t x44 = -47;
	int32_t t9 = -49616899;

	t9 = (x41<=((x42|x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 7047518733684LLU;
	int8_t x46 = 1;
	uint64_t x47 = 24LLU;
	uint8_t x48 = 0U;
	int32_t t10 = 11674913;

	t10 = (x45<=((x46|x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -440569795775815LL;
	int8_t x50 = 4;
	int64_t x51 = 7LL;
	uint8_t x52 = 3U;
	int32_t t11 = -26251833;

	t11 = (x49<=((x50|x51)-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 1882395032499476LL;
	volatile int32_t t12 = 81;

	t12 = (x53<=((x54|x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MAX;
	int32_t x60 = -1;
	int32_t t13 = -698681;

	t13 = (x57<=((x58|x59)-x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 14U;
	int16_t x62 = INT16_MAX;
	int64_t x63 = 12398600105108485LL;
	static volatile int8_t x64 = -1;
	int32_t t14 = 234132748;

	t14 = (x61<=((x62|x63)-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 10907097U;
	static int16_t x66 = -1;
	static volatile int16_t x67 = -1;
	int32_t x68 = -117;
	static volatile int32_t t15 = -8535;

	t15 = (x65<=((x66|x67)-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = UINT32_MAX;
	int64_t x70 = INT64_MIN;
	int32_t x71 = 413651352;
	int64_t x72 = -1LL;
	static volatile int32_t t16 = 18763053;

	t16 = (x69<=((x70|x71)-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x78 = INT32_MAX;
	int32_t t17 = 0;

	t17 = (x77<=((x78|x79)-x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = 199U;
	int8_t x82 = INT8_MIN;
	int16_t x83 = 75;
	volatile int32_t t18 = -1174;

	t18 = (x81<=((x82|x83)-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = -1;
	int8_t x88 = 4;
	int32_t t19 = -626;

	t19 = (x85<=((x86|x87)-x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = 21104U;
	int64_t x91 = -1LL;
	int32_t x92 = -1267;
	int32_t t20 = 2708;

	t20 = (x89<=((x90|x91)-x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	static int32_t x94 = INT32_MIN;
	static int16_t x95 = INT16_MAX;
	int32_t t21 = -61;

	t21 = (x93<=((x94|x95)-x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x98 = 1;
	int16_t x99 = -1;
	volatile int32_t t22 = -19073124;

	t22 = (x97<=((x98|x99)-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -5730;
	static volatile uint32_t x104 = 45480944U;
	static volatile int32_t t23 = -1;

	t23 = (x101<=((x102|x103)-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 251617734649712LLU;
	int8_t x106 = 1;
	int16_t x107 = INT16_MIN;
	int8_t x108 = 45;
	int32_t t24 = -1271453;

	t24 = (x105<=((x106|x107)-x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1508987LL;
	int16_t x111 = 10;
	int64_t x112 = -1068127304244449LL;
	volatile int32_t t25 = 44794285;

	t25 = (x109<=((x110|x111)-x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	int8_t x115 = -1;

	t26 = (x113<=((x114|x115)-x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x117 = INT32_MIN;
	uint64_t x118 = 1530136984256714LLU;
	uint8_t x119 = UINT8_MAX;

	t27 = (x117<=((x118|x119)-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int64_t x122 = -1LL;
	uint16_t x124 = 169U;
	int32_t t28 = 705053;

	t28 = (x121<=((x122|x123)-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MIN;
	volatile int16_t x126 = -1;
	int64_t x127 = -1LL;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t29 = -22588387;

	t29 = (x125<=((x126|x127)-x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = 23956U;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = -1;
	volatile int32_t t30 = -504910064;

	t30 = (x129<=((x130|x131)-x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = 4;
	int32_t x134 = INT32_MAX;
	uint32_t x135 = UINT32_MAX;
	int64_t x136 = -1LL;
	int32_t t31 = -446324634;

	t31 = (x133<=((x134|x135)-x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -47786151LL;
	static uint16_t x138 = UINT16_MAX;
	uint32_t x139 = 2U;
	uint64_t x140 = UINT64_MAX;

	t32 = (x137<=((x138|x139)-x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	int8_t x142 = 0;
	int32_t x143 = -489;
	volatile uint64_t x144 = 550484942LLU;

	t33 = (x141<=((x142|x143)-x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 3;
	int8_t x147 = 0;
	uint16_t x148 = 27U;
	static volatile int32_t t34 = -975230760;

	t34 = (x145<=((x146|x147)-x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = INT8_MIN;
	uint64_t x150 = 306365763165LLU;
	volatile uint16_t x151 = 154U;
	uint16_t x152 = UINT16_MAX;
	int32_t t35 = -226745415;

	t35 = (x149<=((x150|x151)-x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 3965211526LLU;
	uint16_t x154 = 1274U;
	int32_t x156 = 9;
	int32_t t36 = 48952;

	t36 = (x153<=((x154|x155)-x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	uint32_t x160 = 924284998U;
	volatile int32_t t37 = -14;

	t37 = (x157<=((x158|x159)-x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = 71914U;
	uint8_t x163 = 1U;
	static uint64_t x164 = UINT64_MAX;
	volatile int32_t t38 = -62156;

	t38 = (x161<=((x162|x163)-x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	int16_t x167 = INT16_MIN;
	int32_t x168 = -1;
	volatile int32_t t39 = -5312;

	t39 = (x165<=((x166|x167)-x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = -2;
	static int64_t x171 = -267012687814LL;
	int64_t x172 = INT64_MIN;
	static int32_t t40 = 50336314;

	t40 = (x169<=((x170|x171)-x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x175 = -1LL;
	uint16_t x176 = 13888U;
	static int32_t t41 = 110845;

	t41 = (x173<=((x174|x175)-x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 23148982;
	int8_t x178 = 12;
	int32_t x180 = INT32_MIN;
	volatile int32_t t42 = 5515890;

	t42 = (x177<=((x178|x179)-x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x181 = 385869U;
	int16_t x182 = INT16_MIN;
	int32_t x183 = -1;
	uint64_t x184 = 21LLU;
	int32_t t43 = -66165653;

	t43 = (x181<=((x182|x183)-x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = INT64_MAX;
	int16_t x186 = -1;
	int32_t x187 = 455736150;
	int64_t x188 = INT64_MIN;
	int32_t t44 = -1864809;

	t44 = (x185<=((x186|x187)-x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = 718;
	int64_t x191 = INT64_MIN;
	int16_t x192 = 464;
	volatile int32_t t45 = 395977369;

	t45 = (x189<=((x190|x191)-x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x194 = 6442LLU;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t46 = -5058034;

	t46 = (x193<=((x194|x195)-x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = UINT32_MAX;
	static int32_t x198 = INT32_MIN;
	volatile int64_t x199 = INT64_MAX;
	int64_t x200 = 24556654887655178LL;
	int32_t t47 = 162121902;

	t47 = (x197<=((x198|x199)-x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 81U;
	static int8_t x202 = INT8_MAX;
	int64_t x203 = 6606555LL;
	int8_t x204 = INT8_MAX;

	t48 = (x201<=((x202|x203)-x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = -2;
	volatile int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t49 = -285509912;

	t49 = (x205<=((x206|x207)-x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x210 = 3U;
	uint32_t x212 = 277447706U;
	volatile int32_t t50 = 4615703;

	t50 = (x209<=((x210|x211)-x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 50U;
	volatile int64_t x214 = -1LL;
	volatile int16_t x216 = INT16_MIN;

	t51 = (x213<=((x214|x215)-x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x219 = -1;
	volatile int16_t x220 = -685;
	int32_t t52 = 14612;

	t52 = (x217<=((x218|x219)-x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = -1;
	uint16_t x224 = 7675U;
	volatile int32_t t53 = -84;

	t53 = (x221<=((x222|x223)-x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = 1143;
	static int16_t x230 = INT16_MIN;

	t54 = (x229<=((x230|x231)-x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 50350U;
	int64_t x238 = -10714713042LL;
	int64_t x239 = INT64_MIN;
	int32_t x240 = -1;

	t55 = (x237<=((x238|x239)-x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = 1342940191202193660LL;
	volatile uint64_t x242 = 11508981804495795LLU;
	volatile int8_t x243 = -1;
	static int8_t x244 = -1;
	int32_t t56 = 131413755;

	t56 = (x241<=((x242|x243)-x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 1580U;
	int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MAX;
	uint64_t x248 = 209783530LLU;
	int32_t t57 = 3609;

	t57 = (x245<=((x246|x247)-x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x251 = -1;
	int16_t x252 = 0;
	static volatile int32_t t58 = 1;

	t58 = (x249<=((x250|x251)-x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = UINT8_MAX;
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = -3;
	int64_t x256 = INT64_MAX;

	t59 = (x253<=((x254|x255)-x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile int8_t x259 = 1;
	static int64_t x260 = 0LL;
	volatile int32_t t60 = -129751;

	t60 = (x257<=((x258|x259)-x260));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = INT64_MAX;
	volatile int32_t x262 = -1;
	volatile int32_t x263 = -1946;
	volatile int32_t t61 = -459200;

	t61 = (x261<=((x262|x263)-x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -1;
	static uint8_t x266 = 1U;
	uint8_t x267 = UINT8_MAX;
	static int8_t x268 = 1;
	int32_t t62 = 3;

	t62 = (x265<=((x266|x267)-x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x272 = INT8_MIN;
	int32_t t63 = -66636815;

	t63 = (x269<=((x270|x271)-x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x273 = UINT8_MAX;
	uint8_t x274 = UINT8_MAX;

	t64 = (x273<=((x274|x275)-x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	int32_t t65 = 79;

	t65 = (x277<=((x278|x279)-x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MIN;
	static int64_t x283 = INT64_MIN;
	int64_t x284 = -1LL;

	t66 = (x281<=((x282|x283)-x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -1;
	int32_t t67 = 11680;

	t67 = (x285<=((x286|x287)-x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MAX;
	uint64_t x291 = 8634873434882LLU;
	int16_t x292 = 38;
	volatile int32_t t68 = 124421;

	t68 = (x289<=((x290|x291)-x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = UINT64_MAX;
	static int8_t x294 = 60;
	static int64_t x295 = -1LL;
	static int32_t x296 = INT32_MIN;

	t69 = (x293<=((x294|x295)-x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	static int64_t x300 = INT64_MIN;
	int32_t t70 = -21698508;

	t70 = (x297<=((x298|x299)-x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x302 = 0U;
	int64_t x303 = 312102033877LL;
	volatile int32_t t71 = 107419;

	t71 = (x301<=((x302|x303)-x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x305 = -70944LL;
	uint16_t x307 = 2910U;
	int8_t x308 = -1;
	int32_t t72 = 134774452;

	t72 = (x305<=((x306|x307)-x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	static volatile uint32_t x310 = UINT32_MAX;
	volatile uint16_t x312 = 20U;
	int32_t t73 = 173426092;

	t73 = (x309<=((x310|x311)-x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x313 = 157U;
	volatile uint64_t x314 = 126099001LLU;
	volatile int64_t x315 = 3699LL;
	int32_t t74 = 32;

	t74 = (x313<=((x314|x315)-x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x317 = -185539480732328601LL;
	int32_t x318 = -47;
	volatile int32_t x319 = INT32_MIN;

	t75 = (x317<=((x318|x319)-x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = -1;
	uint16_t x324 = 23517U;
	volatile int32_t t76 = 834;

	t76 = (x321<=((x322|x323)-x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 32842781983584LLU;

	t77 = (x325<=((x326|x327)-x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x330 = 4;
	uint32_t x331 = UINT32_MAX;
	int32_t x332 = 3;

	t78 = (x329<=((x330|x331)-x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -7297;
	uint16_t x334 = 2U;
	volatile uint32_t x335 = 3U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t79 = -1;

	t79 = (x333<=((x334|x335)-x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	volatile int32_t x338 = -1;
	int64_t x340 = -1LL;
	int32_t t80 = -494498543;

	t80 = (x337<=((x338|x339)-x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = 66340726;
	uint32_t x343 = 1U;
	int32_t x344 = INT32_MIN;
	volatile int32_t t81 = 408266072;

	t81 = (x341<=((x342|x343)-x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x345 = -1;
	int8_t x346 = -1;
	static int16_t x347 = INT16_MIN;
	int32_t x348 = -3;
	volatile int32_t t82 = -399;

	t82 = (x345<=((x346|x347)-x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x350 = -23079478LL;
	uint16_t x351 = UINT16_MAX;
	static int16_t x352 = INT16_MAX;
	volatile int32_t t83 = -200099;

	t83 = (x349<=((x350|x351)-x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = 7;
	static volatile int8_t x359 = INT8_MAX;
	int32_t t84 = 2861183;

	t84 = (x357<=((x358|x359)-x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MIN;
	static volatile int8_t x362 = 50;
	uint8_t x363 = UINT8_MAX;

	t85 = (x361<=((x362|x363)-x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x365 = 0U;
	volatile int16_t x367 = INT16_MIN;
	volatile int16_t x368 = INT16_MIN;
	int32_t t86 = 4452;

	t86 = (x365<=((x366|x367)-x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x370 = -1;
	static int16_t x371 = 1;
	uint16_t x372 = UINT16_MAX;
	int32_t t87 = 1502;

	t87 = (x369<=((x370|x371)-x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x373 = -1;
	int16_t x374 = -1;
	static int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t88 = -2;

	t88 = (x373<=((x374|x375)-x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = 3050U;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	static int32_t x380 = 0;

	t89 = (x377<=((x378|x379)-x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = INT8_MIN;
	volatile int64_t x383 = INT64_MIN;
	int32_t x384 = 216318;
	int32_t t90 = -720;

	t90 = (x381<=((x382|x383)-x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x389 = 3480U;
	int32_t x390 = -955;
	volatile int32_t t91 = -921207202;

	t91 = (x389<=((x390|x391)-x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -19;
	volatile uint64_t x394 = 242243353821LLU;
	int32_t x395 = -1598859;
	int64_t x396 = -51323811LL;
	static int32_t t92 = -4638;

	t92 = (x393<=((x394|x395)-x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x398 = INT16_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MIN;
	volatile int32_t t93 = 284443527;

	t93 = (x397<=((x398|x399)-x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MAX;
	int8_t x402 = -7;
	volatile int8_t x403 = 9;
	int32_t t94 = 0;

	t94 = (x401<=((x402|x403)-x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = -1;
	volatile uint32_t x411 = UINT32_MAX;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t95 = 2;

	t95 = (x409<=((x410|x411)-x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 86231904709LLU;
	uint32_t x414 = 77100705U;
	int16_t x416 = 251;

	t96 = (x413<=((x414|x415)-x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = -1;
	int16_t x419 = INT16_MIN;
	volatile uint8_t x420 = 0U;
	int32_t t97 = -43;

	t97 = (x417<=((x418|x419)-x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MIN;
	int64_t x423 = 2815LL;
	volatile uint16_t x424 = 27U;
	int32_t t98 = 1;

	t98 = (x421<=((x422|x423)-x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x426 = 25027994343LL;
	uint16_t x427 = UINT16_MAX;
	uint16_t x428 = UINT16_MAX;

	t99 = (x425<=((x426|x427)-x428));

	if (t99 != 1) { NG(); } else { ; }
	
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

